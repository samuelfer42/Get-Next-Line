# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sfernand <sfernand@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/08 11:58:37 by sfernand          #+#    #+#              #
#    Updated: 2018/11/28 16:04:26 by sfernand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = srcs/ft_atoi.c \
srcs/ft_bzero.c \
srcs/ft_isascii.c \
srcs/ft_isalpha.c \
srcs/ft_isalnum.c \
srcs/ft_itoa.c \
srcs/ft_isprint.c \
srcs/ft_isdigit.c \
srcs/ft_memalloc.c \
srcs/ft_memccpy.c \
srcs/ft_memchr.c \
srcs/ft_memcmp.c \
srcs/ft_memdel.c \
srcs/ft_memcpy.c \
srcs/ft_putchar.c \
srcs/ft_putchar_fd.c \
srcs/ft_memmove.c \
srcs/ft_memset.c \
srcs/ft_putnbr.c \
srcs/ft_putnbr_fd.c \
srcs/ft_putendl_fd.c \
srcs/ft_putendl.c \
srcs/ft_putstr.c \
srcs/ft_putstr_fd.c \
srcs/ft_strclr.c \
srcs/ft_strcat.c \
srcs/ft_strchr.c \
srcs/ft_strdel.c \
srcs/ft_strcpy.c \
srcs/ft_strcmp.c \
srcs/ft_striter.c \
srcs/ft_strdup.c \
srcs/ft_striteri.c \
srcs/ft_strlcat.c \
srcs/ft_strlen.c \
srcs/ft_strequ.c \
srcs/ft_strmap.c \
srcs/ft_strmapi.c \
srcs/ft_strncat.c \
srcs/ft_strjoin.c \
srcs/ft_strncmp.c \
srcs/ft_strnew.c \
srcs/ft_strncpy.c \
srcs/ft_strnequ.c \
srcs/ft_strsplit.c \
srcs/ft_strrchr.c \
srcs/ft_strsub.c \
srcs/ft_tolower.c \
srcs/ft_strnstr.c \
srcs/ft_strstr.c \
srcs/ft_strtrim.c \
srcs/ft_toupper.c \
srcs/ft_sqrt.c \
srcs/ft_is_prime.c \
srcs/ft_strndup.c\
srcs/ft_countwords.c \
srcs/ft_swap.c \
srcs/ft_lstnew.c \
srcs/ft_lstdelone.c \
srcs/ft_lstdel.c \
srcs/ft_lstadd.c \
srcs/ft_lstiter.c \
srcs/ft_lstmap.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "OK $@"
%.o: %.c
	@$(CC) $(CFLAGS) -o $@ -c $<  -I includes/

clean:
	@rm -f $(OBJ)
	@echo "Cleaning $(OBJ)"
fclean: clean
	@rm -f $(NAME)
	@echo " Cleaning $(NAME)."
re: fclean all

.PHONY: clean fclean all re
