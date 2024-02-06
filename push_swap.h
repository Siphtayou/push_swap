/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:54:25 by agilles           #+#    #+#             */
/*   Updated: 2024/02/06 14:36:14 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <limits.h>
# include "printf_libft/ft_printf.h"
# include "src_lst/lst.h"

t_stack	*ft_pa(t_stack *stack);
t_stack	*ft_pb(t_stack *stack);
t_stack	*ps_four(t_stack *stack);
t_stack	*ps_five(t_stack *stack);
t_stack ps_init_stack(int argc, char **argv, int i);

t_list	*ft_sa(t_list *a, int i);
t_list	*ft_ra(t_list *a, int i);
t_list	*ft_rra(t_list *a, int i);
t_list	*ps_two(t_list *stack);
t_list	*ps_three(t_list *stack);
t_list	*ps_findmin(t_list *stack);
t_list	*ps_findmax(t_list *stack);
t_list	*ps_moveto(t_list *start, t_list *obj, int i);

void	ps_init_index(t_list *stack);
void	ft_ss(t_stack *stack);
void	ft_rr(t_stack *stack);
void	ps_fiveplus(t_stack *stack);
void	ps_sort(t_stack *stack);

int		dup_err(t_list *stack, char *nb);
int		nnb_err(char *nb);
int		lim_err(char *nb);
int		ps_stacklen(t_list *stack);

#endif
