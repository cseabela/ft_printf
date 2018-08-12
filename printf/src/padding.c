/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   padding.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 17:09:19 by cseabela          #+#    #+#             */
/*   Updated: 2018/08/11 15:57:00 by cseabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void		zero_padding(char *str, int spaces, int sides)
{
	int		len;
	int		val;

	len = ft_strlen(str);
	val = spaces - len;
	if (len < spaces)
	{
		if (sides == RIGHT)
			ft_putstr(str);
		while (val > 0)
		{
			ft_putchar('0');
			val--;
		}
	}
	else
		ft_putstr(str);
}

void		print_loop(char c, int val, int combo, char first_char)
{
	if (combo == 1 && first_char != '-')
		;
	else if ((combo == 2 || combo == 3) && first_char != '-')
		val--;
	while (val > 0)
	{
		ft_putchar(c);
		val--;
	}
}

void		combination_print(char *str, int c)
{
	if (str[0] != '-')
		if (c == 2 || c == 3)
			ft_putchar('+');
	ft_putstr(str);
}

void		plus_minus_padding(char *str, int spaces, int combination)
{
	int		len;
	int		val;

	len = ft_strlen(str);
	val = spaces - len;
	if (len < spaces)
	{
		if (combination == 1 || combination == 3)
			combination_print(str, combination);
		print_loop(' ', val, combination, str[0]);
		if (combination == 2)
			combination_print(str, combination);
	}
}

void		string_padding(char *str, int spaces, int side)
{
	int		len;
	int		val;

	len = ft_strlen(str);
	val = spaces - len;
	if (len < spaces)
	{
		if (side == RIGHT)
			ft_putstr(str);
		while (val > 0)
		{
			ft_putchar(' ');
			val--;
		}
		if (side == LEFT)
			ft_putstr(str);
	}
	else
		ft_putstr(str);
}
