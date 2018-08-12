/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 12:40:08 by cseabela          #+#    #+#             */
/*   Updated: 2018/08/11 13:23:59 by cseabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char		*put_hex(size_t num, int caps)
{
	char	*hexstring;
	int		size;
	char	c;
	char	a;

	if (num == 0)
	{
		hexstring = ft_strdup("0");
		return (hexstring);
	}
	hexstring = (char*)malloc(sizeof(char) * number_len(num, 16) + 1);
	a = caps == 1 ? 'A' : 'a';
	size = number_len(num, 16) - 1;
	hexstring[size] = '\0';
	while (num > 0)
	{
		c = num % 16;
		if (c > 9)
			hexstring[size] = c + (int)a - 10;
		else
			hexstring[size] = c + '0';
		num /= 16;
		size--;
	}
	return (hexstring);
}
