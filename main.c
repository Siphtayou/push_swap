/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:13:07 by agilles           #+#    #+#             */
/*   Updated: 2024/01/15 16:08:20 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	t_stack	stack;
	int	i;
	int	nb;

	stack.a = NULL;
	stack.b = NULL;
	i = 1;
	if (argc < 2)
	{
		ft_printf("Error push_swap must be called like :\n./push_swap 6 -4 78 10\n");
		return (0);
	}
	else
	{
		while (argv[i])
		{
			ft_lstadd_back(stack.a, ft_lstnew(ft_atoi(argv[i])));
			if (ft_error(stack.a, ft_atoi(argv[i])) != 0)
				return (0);
			i++;
		}
		// ft_ra(stack.a, 1);
		// ft_sort;
	}
	return (0);
}

int ft_error(t_list *stack, int nb)
{
	while (stack->next)
	{
		if (stack->content == nb)
		{
			ft_printf("Error : Duplicate number\n");
			return (1);
		}
	}
	return (0);
}
