# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: santmore <santmore@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/15 18:34:47 by santmore          #+#    #+#              #
#    Updated: 2025/07/21 11:37:56 by santmore         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

INCLUDES = push_swap.h

SRCS = checks.c	filler.c finish.c ft_utils.c make_position.c move_stack.c	\
operation_r.c operations.c order.c push_swap.c utils_algoritmia.c	
		
OBJS_DIR = objects
OBJS = $(addprefix $(OBJS_DIR)/,$(SRCS:%.c=%.o))
DEPS = $(addprefix $(OBJS_DIR)/,$(SRCS:%.c=%.d))

CC = gcc
RM = /bin/rm -rf

CFLAGS = -g -Wall -Wextra -Werror

vpath %.c src
all: make_dir $(NAME)

make_dir: 
			@mkdir -p $(OBJS_DIR)

$(OBJS_DIR)/%.o: src/%.c Makefile
				@$(CC) $(CFLAGS) -I. -MMD -c $< -o $@

-include $(DEPS)
$(NAME): $(OBJS) $(INCLUDES)
		@echo "Compiling push swap..."
		@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
		@echo "DONE!!"

clean:
		@echo "Removing push swap objects..."
		@$(RM) $(OBJS_DIR)
		@echo "DONE!!"

fclean:		clean
		@echo "Removing execute push_swap..."
		@$(RM) $(NAME)
		@echo "DONE!!"

re: fclean all

.PHONY: all clean fclean re