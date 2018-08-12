# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile2                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cseabela <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/11 12:53:48 by cseabela          #+#    #+#              #
#    Updated: 2018/08/11 14:28:37 by cseabela         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME            := libftprintf.a
CC              := gcc
CFLAGS          += -Wall -Wextra
CFLAGS          += -Werror
CFLAGS          += -I includes/
LIBFTPRINTF     := -L. -lftprintf
    
SRC_FILES       :=	ft_printf.c \
					ft_check_flags.c \
					ft_check_length.c \
					ft_check_prec.c \
					ft_check_width.c \
					ft_number_len.c \
					ft_print_hash.c \
					ft_printf_struct.c \
					ft_put_hex.c \
					ft_put_oct.c \
					ft_run_printf.c \
					padding.c
                
LIBFT_FILES     :=	ft_bzero.c \
					ft_strlen.c \
					ft_strcpy.c \
					ft_strncpy.c \
					ft_strcmp.c \
					ft_strncmp.c \
					ft_strdup.c \
					ft_atoi.c \
					ft_isdigit.c \
					ft_isascii.c \
					ft_isprint.c \
					ft_isalpha.c \
					ft_isalnum.c \
					ft_toupper.c \
					ft_tolower.c \
					ft_isspace.c \
					ft_strstr.c \
					ft_strnstr.c \
					ft_strcat.c \
					ft_strncat.c \
					ft_strlcat.c \
					ft_memset.c \
					ft_memcpy.c \
					ft_memccpy.c \
					ft_memcmp.c \
					ft_memmove.c \
					ft_memchr.c \
					ft_strchr.c \
					ft_strrchr.c \
					ft_putchar.c \
					ft_putchar_fd.c \
					ft_putstr.c \
					ft_putstr_fd.c \
					ft_putnbr.c \
					ft_putnbr_fd.c \
					ft_putendl.c \
					ft_putendl_fd.c \
					ft_strclr.c \
					ft_memdel.c \
					ft_strdel.c \
					ft_strnew.c \
					ft_memalloc.c \
					ft_strtrim.c \
					ft_strequ.c \
					ft_strnequ.c \
					ft_striter.c \
					ft_striteri.c \
					ft_strmap.c \
					ft_strmapi.c \
					ft_strsub.c \
					ft_strjoin.c \
					ft_islower.c \
					ft_isupper.c \
					ft_strndup.c \
					ft_strnlen.c \
					ft_revstr.c \
					ft_itoa.c \
					ft_strsplit.c \
					ft_wordcount.c \
					ft_wordlen.c \
					            
SRC         := $(addprefix src/, $(SRC_FILES))
LIBFT           := $(addprefix libft/, $(LIBFT_FILES))
OBJ         := $(SRC:.c=.o)
OBJLIBFT        := $(LIBFT:.c=.o)
OBJTEST         := $(TEST:.c=.o)

.PHONY = all clean fclean clean re

all: $(NAME)
	@make all -C ./libft

$(OBJ): %.o: %.c
	@$(CC) -c $(CFLAGS) $< -o $@

$(OBJLIBFT): %.o: %.c
	@$(CC) -c $(CFLAGS) $< -o $@

$(NAME): $(OBJLIBFT) $(OBJ)
	@ar rcs $(NAME) $(OBJ) $(OBJLIBFT)

clean:
	@rm -rf $(OBJ) $(OBJLIBFT) $(OBJTEST)

fclean: clean
	@make fclean -C ./libft
	@rm -rf $(NAME)

re: fclean all
