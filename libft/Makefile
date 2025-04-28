# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: santmore <santmore@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/27 13:32:09 by santmore          #+#    #+#              #
#    Updated: 2025/04/27 14:16:07 by santmore         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables
NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_memchr.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	ft_strlen.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_atoi.c ft_isalpha.c \
	ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c \
	ft_tolower.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_split.c \
	ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
	ft_putendl_fd.c ft_putnbr_fd.c ft_isspace.c
OBJS = $(SRCS:.c=.o)
BONUS_SRCS = bonus1_bonus.c bonus2_bonus.c # Añade aquí los archivos fuente de bonus
BONUS_OBJS = $(BONUS_SRCS:.c=.o)
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

# Reglas
all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus: $(OBJS) $(BONUS_OBJS)
	@$(MAKE) -C $(LIBFT_DIR)
	$(CC) $(CFLAGS) $(OBJS) $(BONUS_OBJS) $(LIBFT) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(MAKE) -C $(LIBFT_DIR) clean
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

# Reglas adicionales
.PHONY: all clean fclean re bonus
