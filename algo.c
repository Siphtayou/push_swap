/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:00:55 by agilles           #+#    #+#             */
/*   Updated: 2024/01/23 17:06:51 by agilles          ###   ########.fr       */
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
	ft_pb(stack);
	ft_pb(stack);
	stack->a = ps_three(stack->a);
	ft_pa(stack);
	stack->a = ft_ra(stack->a, 1);
	ft_pa(stack);
	return (stack);
}
