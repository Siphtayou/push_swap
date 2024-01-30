/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 14:58:08 by agilles           #+#    #+#             */
/*   Updated: 2024/01/30 16:33:48 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*ft_lstnew(int content)
{
	t_list	*liste;

	liste = malloc(sizeof(t_list));
	if (!liste)
		return (0);
	liste->content = content;
	liste->index = 0;
	liste->next = 0;
	return (liste);
}
