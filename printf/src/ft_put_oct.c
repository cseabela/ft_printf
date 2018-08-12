/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_oct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 12:41:34 by cseabela          #+#    #+#             */
/*   Updated: 2018/08/11 15:55:16 by cseabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char		*put_oct(size_t num)
{
	char	*octstring;
	int		size;

	octstring = (char*)malloc(sizeof(char) * number_len(num, 8) + 1);
	size = number_len(num, 8) - 1;
	octstring[size] = '\0';
	while (num > 0)
	{
		octstring[size] = (num % 8) + '0';
		num /= 8;
		size--;
	}
	return (octstring);
}
