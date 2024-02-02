/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ope.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 15:14:09 by agilles           #+#    #+#             */
/*   Updated: 2024/02/02 14:19:32 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_ra(t_list *a, int i)
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
	return (a);
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
	if (i == 1)
		ft_printf("rra\n");
	else if (i == 2)
		ft_printf("rrb\n");
	return (front);
}

t_stack	*ft_pb(t_stack *stack)
{
	t_list *tmp;

	tmp = stack->a;
	stack->a = stack->a->next;
	tmp->next = stack->b;
	stack->b = tmp;
	ft_printf("pb\n");
	return (stack);
}

t_stack	*ft_pa(t_stack *stack)
{
	t_list *tmp;

	tmp = stack->b;
	stack->b = stack->b->next;
	tmp->next = stack->a;
	stack->a = tmp;
	ft_printf("pa\n");
	return (stack);
}

t_list	*ft_sa(t_list *a, int i)
{
	int		swap;

	swap = a->next->content;
	a->next->content = a->content;
	a->content = swap;
	if (i == 1)
		ft_printf("sa\n");
	else if (i == 2)
		ft_printf("sb\n");
	return (a);
}

