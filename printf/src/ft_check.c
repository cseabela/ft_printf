/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 15:45:40 by cseabela          #+#    #+#             */
/*   Updated: 2018/08/11 15:45:50 by cseabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_check(t_printf *vars, char **f)
{
	++(*f);
	check_flags(vars, f);
	check_width(vars, f);
	check_prec(vars, f);
	check_length(vars, f);
	(*vars).specifier = *(*f);
	(*f)++;
	return (0);
}
