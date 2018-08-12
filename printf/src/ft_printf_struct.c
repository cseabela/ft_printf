/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_struct.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 13:10:41 by cseabela          #+#    #+#             */
/*   Updated: 2018/08/11 15:54:03 by cseabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdarg.h>

t_print			gather_values(const char *str, int *k)
{
	t_print		args;
	int			i;

	i = 0;
	while (str[i])
	{
		if (ft_isspace(str[i]))
			break ;
		if (str[i] == '+')
			args.pls++;
		if (str[i] == '-')
			args.mns++;
		if (str[i] == '0')
			args.zer++;
		if (str[i] == '#')
			args.hash++;
		if (ft_isdigit(str[i]))
			args.nbr = ft_atoi(&str[i]);
		if (ft_isalpha(str[i]))
			args.lttr = str[i];
		i++;
	}
	*k = *k + i;
	return (args);
}

t_print			zer_args(void)
{
	t_print	args;

	args.pls = 0;
	args.mns = 0;
	args.zer = 0;
	args.nbr = 0;
	args.hash = 0;
	return (args);
}
