/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:15:58 by agilles           #+#    #+#             */
/*   Updated: 2024/01/30 15:11:55 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	lim_err(char *nb)
{
	long	lim;

	lim = ft_atol(&nb[0]);
	if (lim > INT_MAX || lim < INT_MIN)
	{
		ft_printf("Error, all argument are not in type int\n");
		return (1);
	}
	return (0);
}

int	dup_err(t_list *stack, char *nb)
{
	int	i;
	int	n;

	i = 0;
	n = atoi(&nb[i]);
	while (stack->next)
	{
		if (stack->content == n)
		{
			ft_printf("Error : Duplicate number\n");
			return (1);
		}
		stack = stack->next;
	}
	return (0);
}

int	nnb_err(char *nb)
{
	int	i;

	i = 0;
	if (nb[0] == '-' || nb[0] == '+')
		i++;
	while (nb[i])
	{
		if (nb[i] >= 48 && nb[i] <= 57)
			i++;
		else
		{
			ft_printf("Error, all argument are not a number\n");
			return (1);
		}
	}
	return (0);
}
