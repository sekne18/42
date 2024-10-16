/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsekne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:45:23 by jsekne            #+#    #+#             */
/*   Updated: 2024/10/18 18:10:15 by jsekne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "./libft/libft.h"

int		validate_args(int argc, char **argv, t_list **stack);
int		valid_arg_format(char *str);
int		has_duplicates(t_list **stack, t_list *node);
int		ft_arrlen(char **arr);
int		fill_list(int len, int type, t_list **stack, char **argv);
int		find_max_bits(t_list *stack_a);
int		get_bit(int n, int bit_pos);
int		ft_lstmax_idx(t_list *stack);
int		ft_lstlast_idx(t_list *stack);
int		is_sorted(t_list *stack);
int		ft_lstmin(t_list *stack);
void	push_swap(t_list **stack_a, t_list **stack_b);
void	merge_stacks(t_list **stack_a, t_list **stack_b);
void	sort_positive(t_list **stack_a, t_list **stack_b);
void	sort_negative(t_list **stack_a, t_list **stack_b);
void	normalize(t_list **stack_a, int size);
void	print_list(t_list *lst);
void	radix_sort(t_list **stack_a, t_list **stack_b);
void	sa(t_list **stack_a);
void	sb(t_list **stack_b);
void	ss(t_list **stack_a, t_list **stack_b);
void	pa(t_list **stack_a, t_list **stack_b);
void	pb(t_list **stack_a, t_list **stack_b);
void	ra(t_list **stack_a);
void	rb(t_list **stack_b);
void	rr(t_list **stack_a, t_list **stack_b);
void	rra(t_list **stack_a);
void	rrb(t_list **stack_b);
void	rrr(t_list **stack_a, t_list **stack_b);
#endif
