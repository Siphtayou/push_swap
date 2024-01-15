/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ope.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 15:14:09 by agilles           #+#    #+#             */
/*   Updated: 2024/01/15 17:16:50 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_list *a, int i)
{
	t_list *tmp;

	tmp = a;
	while (tmp->next)
	{
		//printf("Content : %d\n", lst->content);
		tmp = tmp->next;
	}
	a->next = tmp;
	if (i == 1)
		ft_printf("ra\n");
}
