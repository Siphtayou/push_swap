/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:13:07 by agilles           #+#    #+#             */
/*   Updated: 2024/01/16 17:23:14 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	t_stack	stack;
	int	i;
	//int	nb;

	stack.a = NULL;
	stack.b = NULL;
	i = 0;
	if (argc < 2)
	{
		ft_printf("Error push_swap must be called like :\n./push_swap 6 -4 78 10\n");
		return (0);
	}
	else if (argc == 2)
		argv = ft_split(argv[1], ' ');
	else
		i++;
	while (argv[i])
		{
			ft_lstadd_back(&stack.a, ft_lstnew(ft_atoi(argv[i])));
			if (ft_error(stack.a, argv[i]) != 0)
				return (0);
			i++;
		}
		t_stack tmp;

		tmp = stack;
		while (tmp.a->next)
		{
			ft_printf("%d\n", tmp.a->content);
			tmp.a = tmp.a->next;
		}
		ft_printf("%d\n", tmp.a->content);
		ft_lstfree(stack.a);
		// ft_ra(stack.a, 1);
		// ft_sort;
	return (0);
}

int ft_error(t_list *stack, char *nb)
{
	int	i;
	int	n;

	i = 0;
	while (nb[i])
	{
		if (nb[i] >= 48 && nb[i] <= 57)
			i++;
		else
		{
			ft_printf("Error, all argument are not a number\n");
			return (1);
		}
	}
	n = atoi(&nb[i]);
	while (stack->next)
	{
		if (stack->content == n)
		{
			ft_printf("Error : Duplicate number\n");
			return (1);
		}
		stack = stack->next;
	}
	return (0);
}
