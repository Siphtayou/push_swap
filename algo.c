/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:00:55 by agilles           #+#    #+#             */
/*   Updated: 2024/02/06 14:48:01 by agilles          ###   ########.fr       */
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

void	ps_fiveplus(t_stack *stack)
{
	t_list *a;
	int	max_bits;
	int	len;
	int	i;
	int	j;

	len = ps_stacklen(stack->a);
	max_bits = 0;
	while ((len - 1) >> max_bits != 0)
		max_bits++;
	i = -1;
	while (++i < max_bits)
	{
		j = -1;
		while (++j < len)
		{
			a = stack->a;
			if (((a->index >> i) & 1) == 1)
				stack->a = ft_ra(a, 1);
			else
				stack = ft_pb(stack);
		}
		while (stack->b)
			stack = ft_pa(stack);
	}
}
