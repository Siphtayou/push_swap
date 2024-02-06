/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 14:21:32 by agilles           #+#    #+#             */
/*   Updated: 2024/02/06 16:36:28 by agilles          ###   ########.fr       */
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
		ps_fiveplus(stack, -1, -1);
}

t_stack	ps_init_stack(int argc, char **argv, int i) //10 52 78 45 8
{
	t_stack	stack;

	stack.a = NULL;
	stack.b = NULL;
	while (argv[i])
	{
		ft_lstadd_back(&stack.a, ft_lstnew(ft_atoi(argv[i])));
		if (dup_err(stack.a, argv[i]) || nnb_err(argv[i]) || lim_err(argv[i]))
		{
			ft_lstfree(stack.a, argv, argc);
			stack.a = NULL;
			return (stack);
		}
		i++;
	}
	return (stack);
}
