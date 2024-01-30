/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:00:55 by agilles           #+#    #+#             */
/*   Updated: 2024/01/30 16:59:06 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ps_two(t_list *stack)
{
	if (stack->next->content < stack->content)
		stack = ft_ra(stack, 1);
	return (stack);
}

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

t_stack	*ps_four(t_stack *stack)
{
	stack->a = ps_moveto(stack->a, ps_findmin(stack->a), 4);
	stack = ft_pb(stack);
	stack->a = ps_three(stack->a);
	stack = ft_pa(stack);
	return (stack);
}

t_stack	*ps_five(t_stack *stack)
{
	stack->a = ps_moveto(stack->a, ps_findmin(stack->a), ps_stacklen(stack->a));
	stack = ft_pb(stack);
	stack->a = ps_moveto(stack->a, ps_findmax(stack->a), ps_stacklen(stack->a));
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
	if (ra >= i / 2)
	{
		while (ra < i + 1)
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

int		ps_stacklen(t_list *stack)
{
	t_list	*tmp;
	int		len;

	len = 0;
	tmp = stack;
	while (tmp->next)
	{
		len++;
		tmp = tmp->next;
	}
	len++;
	/*if (len == 2)
		stack = ps_two(stack);
	else if (len == 3)
		stack = ps_three(stack);
	else if (len == 4)
		stack = ps_four(stack);
	else if (len == 5)
		stack = ps_five(stack);
	else
		return (len);*/
	return (len);
	//return (0);
}

t_stack	*ps_fiveplus(t_stack *stack)
{
	int	len;

	len = ps_stacklen(stack->a);
	//ft_printf("len.a : %d\n", len);
	len--;
	while (ps_stacklen(stack->a) != 1)
	{
		stack->a = ps_moveto(stack->a, ps_findmin(stack->a), len);
		stack = ft_pb(stack);
		len--;
	}
	len = ps_stacklen(stack->b);
	//ft_printf("len.b : %d\n", len);
	while (len != 0)
	{
		stack = ft_pa(stack);
		len--;
	}
	return (stack);
}

void	ps_init_index(t_list *stack)
{
	t_list	*tmp;
	t_list	*min;
	int		i;

	i = -1;
	tmp = stack;
	min = tmp;
	while (ps_stacklen(stack) >= ++i)
	{
		while	(tmp->next)
		{
			if (min->content > tmp->content && tmp->index == 0)
				min = tmp;
			tmp = tmp->next;
		}
		if (min->content > tmp->content && tmp->index == 0)
			min = tmp;
		min->index = i;
		tmp = stack;
		while (tmp->index != 0)
			tmp = tmp->next;
		min = tmp;
		ft_printf("tmp/min content : %d\n", tmp->content);
		tmp = stack;
	}
}
