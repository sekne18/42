/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jans <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 19:28:45 by jans              #+#    #+#             */
/*   Updated: 2024/10/17 21:37:00 by jans             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list **stack_a)
{
	t_list	*last;
	t_list	*prev;

	ft_putstr_fd("ra\n", 1);
	last = *stack_a;
	prev = NULL;
	if (!last || !last->next)
		return ;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	last->next = *stack_a;
	*stack_a = last;
}

void	rb(t_list **stack_b)
{
	t_list	*last;
	t_list	*prev;

	ft_putstr_fd("rb\n", 1);
	last = *stack_b;
	prev = NULL;
	if (!last || !last->next)
		return ;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	last->next = *stack_b;
	*stack_b = last;
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	ra(stack_a);
	rb(stack_b);
}
