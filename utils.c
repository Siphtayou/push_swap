/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 14:18:16 by agilles           #+#    #+#             */
/*   Updated: 2024/02/06 16:43:58 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ps_findmin(t_list *stack)
{
	t_list	*tmp;
	t_list	*min;

	tmp = stack;
	min = tmp;
	while (tmp->next)
	{
		if (min->content > tmp->content)
			min = tmp;
		tmp = tmp->next;
	}
	if (min->content > tmp->content)
		min = tmp;
	return (min);
}

t_list	*ps_findmax(t_list *stack)
{
	t_list	*tmp;
	t_list	*max;

	tmp = stack;
	max = tmp;
	while (tmp->next)
	{
		if (max->content < tmp->content)
			max = tmp;
		tmp = tmp->next;
	}
	if (max->content < tmp->content)
		max = tmp;
	return (max);
}

t_list	*ps_moveto(t_list *start, t_list *obj, int i, int ra)
{
	t_list	*tmp;

	tmp = start;
	while (tmp != obj)
	{
		ra++;
		tmp = tmp->next;
	}
	if (ra >= i / 2)
	{
		while (ra < i)
		{
			start = ft_rra(start, 1);
			ra++;
		}
	}
	else
	{
		while (ra > 0)
		{
			start = ft_ra(start, 1);
			ra--;
		}
	}
	return (start);
}

int	ps_stacklen(t_list *stack)
{
	t_list	*tmp;
	int		len;

	len = 0;
	tmp = stack;
	while (tmp->next)
	{
		len++;
		tmp = tmp->next;
	}
	len++;
	return (len);
}

void	ps_init_index(t_list *stack)
{
	t_list	*a;
	t_list	*b;
	int		i;

	a = stack;
	while (a != NULL)
	{
		b = stack;
		i = 0;
		while (b != NULL)
		{
			if (a->content > b->content)
				i++;
			b = b->next;
		}
		a->index = i;
		a = a->next;
	}
}
