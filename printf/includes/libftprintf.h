/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 17:15:06 by cseabela          #+#    #+#             */
/*   Updated: 2018/08/11 15:33:32 by cseabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include "libft.h"
# define LEFT 1
# define RIGHT 2

typedef struct	s_my_print
{
	int			pls;
	int			mns;
	int			zer;
	int			nbr;
	int			hash;
	char		lttr;
	int			prec;
	char		length;
	int			width;
}				t_print;

void			ft_check_flags(t_print *vars, char **f);
void			ft_check_length(t_print *vars, char **f);
void			ft_check_prec(t_print *vars, char **f);
void			ft_check_width(t_print *vars, char **f);
void			string_padding(char *str, int spaces, int side);
void			run_printf(t_print args, va_list first, const char *str);
int				ft_printf(const char *str, ...);
void			print_struct(t_print args);
void			zero_padding(char *str, int spaces, int sides);
void			print_loop(char c, int val, int combo, char first_char);
void			combination_print(char *str, int c);
void			plus_minus_padding(char *str, int spaces, int combination);
void			string_padding(char *str, int spaces, int side);
void			print_hash(char *str, int type, int cap_x);
char			*put_hex(size_t num, int caps);
char			*put_oct(size_t num);
int				number_len(size_t num, int base);
t_print			gather_values(const char *str, int *k);

#endif
