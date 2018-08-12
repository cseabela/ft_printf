/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hash.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 12:39:03 by cseabela          #+#    #+#             */
/*   Updated: 2018/08/11 15:47:43 by cseabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

#define OCT 1
#define HEX 2

void	print_hash(char *str, int type, int cap_x)
{
	if (type == OCT)
		ft_putchar('0');
	else if (type == HEX)
	{
		if (cap_x == 1)
			ft_putstr("0X");
		else
			ft_putstr("0x");
	}
	ft_putstr(str);
}
