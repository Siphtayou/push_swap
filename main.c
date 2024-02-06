/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:13:07 by agilles           #+#    #+#             */
/*   Updated: 2024/02/06 14:56:04 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	stack;
	char	**tab;
	int		i;

	i = 0;
	if (argc < 2)
	{
		ft_printf("Error PS must be called like :\n./push_swap 6 -4 78 10\n");
		return (0);
	}
	else if (argc == 2)
	{
		tab = argv;
		argv = ft_split(argv[1], ' ');
		free(tab);
	}
	else
		i++;
	stack = ps_init_stack(argc, argv, i);
	if (!stack.a)
		return (0);
	ps_init_index(stack.a);
	//t_stack *tmp;

	//tmp = &stack;
	ps_sort(&stack);
	//while (tmp->a)
	//	{
	//		ft_printf("%d\n", tmp->a->content);
	//		tmp->a = tmp->a->next;
	//	}
	ft_lstfree(stack.a, argv, argc);
	return (0);
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
