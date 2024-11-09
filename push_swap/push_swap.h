/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsekne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:45:23 by jsekne            #+#    #+#             */
/*   Updated: 2024/11/09 11:35:24 by jans             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

int		validate_args(int argc, char **argv, t_list **stack);
int		valid_arg_format(char *str);
int		has_duplicates(t_list **stack, t_list *node);
int		ft_arrlen(char **arr);
int		fill_list(int len, int type, t_list **stack, char **argv);
int		find_max_bits(t_list *stack_a);
int		ft_lstmax_idx(t_list *stack);
int		ft_lstlast_idx(t_list *stack);
int		is_sorted(t_list *stack);
int		ft_lstmin(t_list *stack);
int		ft_lst_nextmin(t_list *stack);
int		valid(char *str, t_list **stack_a, t_list **stack_b);
int		read_instructions(t_list **stack_a, t_list **stack_b);
int		execute(char *str, t_list **stack_a, t_list **stack_b);

void	radix_sort_b(t_list **stack_a, t_list **stack_b, int max_bit, int i);
void	sort_3(t_list **stack_a);
void	sort_5(t_list **stack_a, t_list **stack_b, int len);
void	mini_sort(t_list **stack_a, t_list **stack_b, int len);
void	compress_numbers(t_list **stack_a, int size);
void	print_list(t_list *lst);
void	radix_sort(t_list **stack_a, t_list **stack_b);
void	push_swap(t_list **stack_a, t_list **stack_b);

void	swap(t_list **stack);
void	push(t_list **to, t_list **from);
void	rotate(t_list **stack);
void	rev_rotate(t_list **stack);
void	sa(t_list **stack_a, int bonus);
void	sb(t_list **stack_b, int bonus);
void	ss(t_list **stack_a, t_list **stack_b, int bonus);
void	pa(t_list **stack_a, t_list **stack_b, int bonus);
void	pb(t_list **stack_a, t_list **stack_b, int bonus);
void	ra(t_list **stack_a, int bonus);
void	rb(t_list **stack_b, int bonus);
void	rr(t_list **stack_a, t_list **stack_b, int bonus);
void	rra(t_list **stack_a, int bonus);
void	rrb(t_list **stack_b, int bonus);
void	rrr(t_list **stack_a, t_list **stack_b, int bonus);

void	rot_to_pos(int count, t_list **stack_b, void (*op)(t_list **stack_b,
				int bouns));
void	move_to_stack_a(t_list **stack_a, t_list **stack_b, int *rot_a);
void	move_to_stack_aa(t_list **stack_a, t_list **stack_b);
void	merge_sort(t_list **stack_a, t_list **stack_b);
int		rotate_count(t_list *stack, int index);
int		find_median(t_list *stack, int size);
int		compare_ints(const void *a, const void *b);
void	merge_sort_small(t_list **stack_a, t_list **stack_b);
void	merge_sort_big(t_list **stack_a, t_list **stack_b);
void	find_quartiles(t_list *stack, int *q1, int *q2, int *q3);
void	push_quartile_to_b(t_list **stack_a, t_list **stack_b, int upper_bound,
			int lower_bound);

#endif
