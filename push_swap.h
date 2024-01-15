/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:54:25 by agilles           #+#    #+#             */
/*   Updated: 2024/01/15 17:18:37 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "printf_libft/ft_printf.h"
#include <stdlib.h>


typedef struct s_list
{
	struct s_list	*next;
	long			content;
	int				index;
}					t_list;

typedef struct s_stack
{
	t_list	*a;
	t_list	*b;
}			t_stack;

void	ft_ra(t_list *a, int i);

#endif
