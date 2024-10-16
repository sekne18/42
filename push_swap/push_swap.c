/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsekne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:45:14 by jsekne            #+#    #+#             */
/*   Updated: 2024/10/16 18:56:32 by jsekne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	print_list(t_list *lst);

int	main(int argc, char **argv)
{
	t_list	*stack;
	
	stack = NULL;
	if (argc < 2)
		return (1);
	if (!validate_args(argc, argv, &stack))
	{
		ft_putstr_fd("Error\n", 1);
		ft_lstclear(&stack);
		return (0);
	}
	print_list(stack);
	ft_lstclear(&stack);
	return (1);
}

void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("%d", lst->number);
		if (lst->next)
			printf(" -> ");
		lst = lst->next;
	}
	printf("\n");
}

int	validate_args(int argc, char **argv, t_list **stack)
{
	t_list	*node;
	int		i;
	int		type;

	type = 1;
	if (argc == 2)
	{
		type--;
		argv = ft_split(argv[argc - 1], ' ');
	}
	i = ft_arrlen(argv);
	while (i-- > type)
	{
		if (!valid_arg_format(argv[i]))
			return (0);
		node = ft_lstnew(ft_atoi(argv[i]));
		if (!node)
			return (0);
		ft_lstadd_back(stack, node);
		if (has_duplicates(stack, node))
			return (0);
	}
	if (!type)
		free_all(argv);
	return (1);
}

int	ft_arrlen(char **arr)
{
	int	len;

	len = 0;
	while (arr[len])
		len++;
	return (len);
}

int	has_duplicates(t_list **stack, t_list *node)
{
	t_list	*curr;

	curr = *stack;
	while (curr->next)
	{
		if (curr->number == node->number)
			return (1);
		curr = curr->next;
	}
	return (0);
}

int	valid_arg_format(char *str)
{
	int		i;
	int		op;

	op = 0;
	i = -1;
	while (str[++i] == '-' || str[i] == '+')
		op++;
	while (str[i])
	{
		if (!ft_isdigit(str[i++]))
			return (0);
	}
	if (INT_MAX < ft_atoi(str) || INT_MIN > ft_atoi(str))
		return (0);
	return (op < 2);
}