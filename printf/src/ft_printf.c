/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pfintf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 13:07:26 by cseabela          #+#    #+#             */
/*   Updated: 2018/08/11 15:47:59 by cseabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdarg.h>

int		ft_printf(const char *str, ...)
{
	int		i;
	t_print	args;
	va_list	first;

	i = 0;
	va_start(first, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			args = gather_values(&str[i], &i);
			run_printf(args, first, (const char *)str);
			i++;
			continue ;
		}
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}
