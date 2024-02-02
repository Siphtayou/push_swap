/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 14:21:32 by agilles           #+#    #+#             */
/*   Updated: 2024/02/02 14:23:46 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_stack *stack)
{
	int		len;

	len = ps_stacklen(stack->a);
	if (len == 2)
		stack = ps_two(stack);
	else if (len == 3)
		stack = ps_three(stack);
	else if (len == 4)
		stack = ps_four(stack);
	else if (len == 5)
		stack = ps_five(stack);
	else if (len > 5)
		ps_fiveplus(stack);
}
