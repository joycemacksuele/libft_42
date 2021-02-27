# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/24 10:43:20 by jfreitas          #+#    #+#              #
#    Updated: 2021/02/27 02:13:56 by jfreitas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_atoi.c \
	  ft_bzero.c \
	  ft_calloc.c \
	  ft_intlen.c \
	  ft_isalnum.c \
	  ft_isalpha.c \
	  ft_isascii.c \
	  ft_isdigit.c \
	  ft_islower.c \
	  ft_isprint.c \
	  ft_isupper.c \
	  ft_itoa.c \
	  ft_memalloc.c \
	  ft_memccpy.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_memcpy.c \
	  ft_memmove.c \
	  ft_memset.c \
	  ft_putchar.c \
	  ft_putchar_fd.c \
	  ft_putendl_fd.c \
	  ft_putnbr_fd.c \
	  ft_putstr.c \
	  ft_putstr_fd.c \
	  ft_split.c \
	  ft_strcat.c \
	  ft_strchr.c \
	  ft_strcpy.c \
	  ft_strdup.c \
	  ft_strjoin.c \
	  ft_strlcat.c \
	  ft_strlcpy.c \
	  ft_strlen.c \
	  ft_strmapi.c \
	  ft_strncmp.c \
	  ft_strncpy.c \
	  ft_strnew.c \
	  ft_strnstr.c \
	  ft_strrchr.c \
	  ft_strtrim.c \
	  ft_substr.c \
	  ft_tolower.c \
	  ft_toupper.c \

SRC_BONUS = ft_lstnew_bonus.c \
      		ft_lstdelone_bonus.c \
	  		ft_lstclear_bonus.c \
	  		ft_lstadd_front_bonus.c \
	  		ft_lstiter_bonus.c \
	  		ft_lstmap_bonus.c \
	  		ft_lstadd_back_bonus.c \
	  		ft_lstsize_bonus.c \
	  		ft_lstlast_bonus.c \

OBJ = $(subst .c,.o,$(SRC))

OBJ_BONUS = $(subst .c,.o,$(SRC_BONUS))


all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)

bonus: $(OBJ_BONUS)
	@ar qc $(NAME) $(OBJ_BONUS)
	@ranlib $(NAME)

clean:
	@/bin/rm -f $(OBJ)
	@/bin/rm -f $(OBJ_BONUS)
	@/bin/rm -f a.out

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
