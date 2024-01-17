/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:34:42 by agilles           #+#    #+#             */
/*   Updated: 2024/01/17 15:37:35 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstfree(t_list *lst, char **argv, int argc)
{
	t_list	*current;
	t_list	*next;
	int		i;

	current = lst;
	i = 0;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	if (argc == 2)
	{
		while (argv[i])
			i++;
		while(i < 0)
		{
			free(argv[i]);
			i--;
		}
	}
}
