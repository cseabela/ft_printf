/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_combination_print.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 15:47:16 by cseabela          #+#    #+#             */
/*   Updated: 2018/08/11 15:47:21 by cseabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_combination_print(char *str, int c)
{
	if (str[0] != '-')
		if (c == 2 || c == 3)
			ft_putchar('+');
	ft_putstr(str);
}
