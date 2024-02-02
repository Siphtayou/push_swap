/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 14:21:32 by agilles           #+#    #+#             */
/*   Updated: 2024/02/02 14:31:16 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_sort(t_stack *stack)
{
	int		len;

	len = ps_stacklen(stack->a);
	if (len == 2)
		stack->a = ps_two(stack->a);
	else if (len == 3)
		stack->a = ps_three(stack->a);
	else if (len == 4)
		stack = ps_four(stack);
	else if (len == 5)
		stack = ps_five(stack);
	else if (len > 5)
		ps_fiveplus(stack);
}
