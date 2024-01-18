/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ope.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 15:14:09 by agilles           #+#    #+#             */
/*   Updated: 2024/01/18 16:16:28 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_list *a, int i)
{
	t_list *tmp;

	tmp = a;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = a;
	tmp = a;
	tmp->next = NULL;
	a = a->next;
	if (i == 1)
		ft_printf("ra\n");
	else if (i == 2)
		ft_printf("rb\n");
	//a fix
}

void	ft_rra(t_stack stack, int i)
{
	//func
}

void	ft_pa(t_stack *stack, int i)
{
	t_list *tmp;

	tmp = stack->a->next;
	stack->a->next = stack->b;
	stack->b = stack->a->next;
	stack->a->next = tmp;
	//non fini dutout
}

void	ft_sa(t_list *a, int i)
{
	int		swap;

	swap = a->next->content;
	a->next->content = a->content;
	a->content = swap;
	if (i == 1)
		ft_printf("sa\n");
	else if (i == 2)
		ft_printf("sb\n");
}

void	ft_ss(t_stack *stack)
{
	ft_sa(stack->a, 0);
	ft_sa(stack->b, 0);
	ft_printf("ss\n");
}

void	ft_rr(t_stack *stack)
{
	ft_ra(stack->a, 0);
	ft_ra(stack->b, 0);
	ft_printf("ss\n");
}
