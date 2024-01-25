/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:00:55 by agilles           #+#    #+#             */
/*   Updated: 2024/01/25 15:29:31 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ps_three(t_list *stack)
{
	t_list	*tmp;
	int		first[4];
	int		i;

	i = 0;
	tmp = stack;
	while (tmp->next)
	{
		first[i] = tmp->content;
		tmp = tmp->next;
		i++;
	}
	first[i] = tmp->content;
	if (first[0] > first[1] && first[2] > first[0])
		ft_sa(stack, 1);
	else if (first[1] > first[2] && first[0] > first[1])
		stack = ft_rra(ft_sa(stack, 1), 1);
	else if (first[2] > first[1] && first[0] > first[2])
		stack = ft_ra(stack, 1);
	else if (first[2] > first[0] && first[1] > first[2])
		stack = ft_ra(ft_sa(stack, 1), 1);
	else if (first[0] > first[2] && first[1] > first[0])
		stack = ft_rra(stack, 1);
	return (stack);
}

t_stack	*ps_five(t_stack *stack)
{
	stack->a = ps_moveto(stack->a, ps_findmin(stack->a), 5);
	stack = ft_pb(stack);
	ft_printf("first : %d\n", stack->a->content);
	stack->a = ps_moveto(stack->a, ps_findmax(stack->a), 4);
	stack = ft_pb(stack);
	stack->a = ps_three(stack->a);
	ft_pa(stack);
	stack->a = ft_ra(stack->a, 1);
	ft_pa(stack);
	return (stack);
}

t_list	*ps_findmin(t_list *stack)
{
	t_list	*tmp;
	t_list	*min;

	tmp = stack;
	min = tmp;
	while	(tmp->next)
	{
		if (min->content > tmp->content)
			min = tmp;
		tmp = tmp->next;
	}
	if (min->content > tmp->content)
		min = tmp;
	ft_printf("min : %d\n", min->content);
	return (min);
}

t_list	*ps_findmax(t_list *stack)
{
	t_list	*tmp;
	t_list	*max;

	tmp = stack;
	max = tmp;
	while	(tmp->next)
	{
		if (max->content < tmp->content)
			max = tmp;
		tmp = tmp->next;
	}
	if (max->content < tmp->content)
		max = tmp;
	ft_printf("max : %d\n", max->content);
	return (max);
}

t_list	*ps_moveto(t_list *start, t_list *obj, int i)
{
	t_list	*tmp;
	int		ra;

	ra = 0;
	tmp = start;
	while (tmp != obj)
	{
		ra++;
		tmp = tmp->next;
	}
	ft_printf("ra : %d\n", ra); // 1 4 3 2 5 a test
	if (ra >= i - 2)
	{
		while (ra < 5)
		{
			start = ft_rra(start, 1);
			ra++;
		}
	}
	else
		while (ra > 0)
		{
			start = ft_ra(start, 1);
			ra--;
		}
	return (start);
}
