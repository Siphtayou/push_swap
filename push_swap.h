/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:54:25 by agilles           #+#    #+#             */
/*   Updated: 2024/01/17 15:08:59 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "printf_libft/ft_printf.h"
#include "src_lst/lst.h"
#include <stdlib.h>
#include <limits.h>

int	dup_err(t_list *stack, char *nb);
int	nnb_err(char *nb);
int	lim_err(char *nb);

void	ft_ra(t_list *a, int i);


#endif
