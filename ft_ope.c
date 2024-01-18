/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ope.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 15:14:09 by agilles           #+#    #+#             */
/*   Updated: 2024/01/18 15:10:54 by agilles          ###   ########.fr       */
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
	else if (i == 2)
		ft_printf("rb\n");
}

void	ft_sa(t_list *a, int i)
{
	t_list *tmp;
	t_list *swap;

	tmp = a->next;
	ft_printf("tmp.content : %d\n", tmp->content);
	swap = tmp;
	ft_printf("swap.content : %d\n", swap->content);
	tmp->next = a;
	ft_printf("tmp.content : %d\n", tmp->content);
	a = swap->next->next;
	ft_printf("a.content : %d\n", a->content);
	if (i == 1)
		ft_printf("sa\n");
	else if (i == 2)
		ft_printf("sb\n");
}

void	ft_ss(t_list *a, t_list *b)
{
	ft_sa(a, 0);
	ft_sa(b, 0);
	ft_printf("ss\n");
}

void	ft_rr(t_list *a, t_list *b)
{
	ft_ra(a, 0);
	ft_ra(b, 0);
	ft_printf("ss\n");
}
