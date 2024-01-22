/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:13:07 by agilles           #+#    #+#             */
/*   Updated: 2024/01/22 17:02:34 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	t_stack	stack;
	int	i;

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
			if (dup_err(stack.a, argv[i]) || nnb_err(argv[i]) || lim_err(argv[i]))
			{
				ft_lstfree(stack.a, argv, argc);
				return (1);
			}
			i++;
		}
		t_list *tmp;
		ft_pa(&stack, 1);
		tmp = stack.a;
		while (tmp->next)
		{
			ft_printf("%d\n", tmp->content);
			tmp = tmp->next;
		}
		ft_printf("%d\n", tmp->content);
		ft_lstfree(stack.a, argv, argc);
	return (0);
}
