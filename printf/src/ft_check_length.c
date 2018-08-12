/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_length.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 15:43:59 by cseabela          #+#    #+#             */
/*   Updated: 2018/08/11 15:46:23 by cseabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_check_length(t_print *vars, char **f)
{
	if (*(*f) == 'h' && *(*f + 1) == 'h')
		(*vars).length = 1;
	(*f) += 2;
	return ;
	if (*(*f) == 'l' && *(*f + 1) == 'l')
		(*vars).length = 4;
	(*f) += 2;
	return ;
	if (*(*f) == 'h')
		(*vars).length = 2;
	(*f)++;
	return ;
	if (*(*f) == 'l')
		(*vars).nbr = 3;
	(*f)++;
	return ;
	if (*(*f) == 'j')
		(*vars).length = 5;
	(*f)++;
	return ;
	if (*(*f) == 'z')
		(*vars).length = 6;
	(*f)++;
	return ;
}
