/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ope.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 15:14:09 by agilles           #+#    #+#             */
/*   Updated: 2024/01/22 17:03:27 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_list *a, int i)
{
	t_list *tmp;

	tmp = a;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = a;
	tmp = a;
	a = a->next;
	tmp->next = NULL;
	if (i == 1)
		ft_printf("ra\n");
	else if (i == 2)
		ft_printf("rb\n");
}

t_list	*ft_rra(t_list *a, int i)
{
	t_list	*tmp;
	t_list	*front;

	tmp = a;
	while (tmp->next->next)
		tmp = tmp->next;
	front = tmp->next;
	front->next = a;
	tmp->next = NULL;
	return (front);
	if (i == 1)
		ft_printf("rra\n");
	else if (i == 2)
		ft_printf("rrb\n");
}

void	ft_pa(t_stack *stack, int i)
{
	t_list *tmp;

	i = 0;
	tmp = stack->a;
	stack->a = stack->a->next;
	tmp->next = stack->b;
	stack->b = tmp;
	if (i == 1)
		ft_printf("pa\n");
	else if (i == 2)
		ft_printf("pb\n");
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
