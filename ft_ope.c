/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ope.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 15:14:09 by agilles           #+#    #+#             */
/*   Updated: 2024/01/17 16:13:08 by agilles          ###   ########.fr       */
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
	tmp->next = a;
	if (i == 1)
		ft_printf("ra\n");
}

void	ft_sa(t_list *a, int i)
{
	t_list *tmp;
	t_list *swap;

	tmp = a->next;
	swap = a;
	a = tmp;
	tmp = swap;
	if (i == 1)
		ft_printf("ra\n");
	else
		ft_printf("rb\n");
}
