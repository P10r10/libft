# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alsantia <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/25 13:46:29 by alsantia          #+#    #+#              #
#    Updated: 2021/02/17 16:07:01 by alsantia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES = ft_atoi ft_bzero ft_calloc ft_isalnum ft_isalpha ft_isascii\
ft_isdigit ft_isprint ft_memccpy ft_memchr ft_memcmp ft_memcpy ft_memmove\
ft_memset ft_strchr ft_strdup ft_strlcat ft_strlcpy ft_strlen ft_strncmp\
ft_strnstr ft_strrchr ft_tolower ft_toupper ft_itoa ft_putchar_fd\
ft_putendl_fd ft_putnbr_fd ft_putstr_fd ft_split ft_strjoin ft_strmapi\
ft_strtrim ft_substr

BONUS = ft_lstadd_back ft_lstadd_front ft_lstclear ft_lstdelone ft_lstiter\
ft_lstlast ft_lstmap ft_lstnew ft_lstsize
 
CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

.PHONY: all clean fclean re bonus

all: $(NAME)

$(NAME): $(SOURCES:=.o) libft.h
	ar -src $@ $?

clean:
	rm -f $(wildcard *.o)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(SOURCES:=.o) $(BONUS:=.o) libft.h
	ar -src $(NAME) $?
