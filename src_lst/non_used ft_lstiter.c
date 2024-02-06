/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   non_used ft_lstiter.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:18:57 by agilles           #+#    #+#             */
/*   Updated: 2024/02/06 16:37:20 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
