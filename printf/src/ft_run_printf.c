/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_run_printf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 13:11:39 by cseabela          #+#    #+#             */
/*   Updated: 2018/08/11 14:57:55 by cseabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	run_printf(t_print args, va_list first, const char *str)
{
	char			*newstr;

	newstr = (char*)str;
	if (args.lttr == 's')
	{
		newstr = ft_strdup(va_arg(first, char *));
		if (args.pls > 0)
			string_padding(newstr, args.nbr, 2);
		else if (args.mns > 0)
			string_padding(newstr, args.nbr, 1);
		else
			ft_putstr(newstr);
	}
	va_end(first);
}
