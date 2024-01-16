/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:34:42 by agilles           #+#    #+#             */
/*   Updated: 2024/01/16 16:55:53 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstfree(t_list *lst)
{
	t_list	*current;
	t_list	*next;

	current = lst;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
