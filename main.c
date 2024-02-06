/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:13:07 by agilles           #+#    #+#             */
/*   Updated: 2024/02/06 16:36:00 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	stack;
	int		i;

	i = 0;
	if (argc < 2)
	{
		ft_printf("Error PS must be called like :\n./push_swap 6 -4 78 10\n");
		return (0);
	}
	else if (argc == 2 && (ft_strchr((const char *)argv[1], ' ')))
	{
		argv = ft_split(argv[1], ' ');
	}
	else
		i++;
	stack = ps_init_stack(argc, argv, i);
	if (!stack.a)
		return (0);
	ps_init_index(stack.a);
	ps_sort(&stack);
	ft_lstfree(stack.a, argv, argc);
	return (0);
}
		//some print test

		/*t_stack *tmp;
		//t_list *tmp;
		//tmp = stack.a;
		tmp = ps_fiveplus(&stack);*/
		/*while (tmp->next)
		{
			ft_printf("content : %d ", tmp->content);
			ft_printf("index : %d\n", tmp->index);
			tmp = tmp->next;
		}
		ft_printf("content : %d ", tmp->content);
		ft_printf("index : %d\n", tmp->index);
		//t_stack *tmp;
		//tmp = ps_fiveplus(&stack);
		//tmp = ps_five(&stack);
		while (tmp->a->next)
		{
			ft_printf("%d\n", tmp->a->content);
			tmp->a = tmp->a->next;
		}
		ft_printf("%d\n", tmp->a->content);*/
