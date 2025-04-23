# Variables
NAME = libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
SRCS = main.c utils.c # Añade aquí todos los archivos fuente obligatorios
OBJS = $(SRCS:.c=.o)
BONUS_SRCS = bonus1_bonus.c bonus2_bonus.c # Añade aquí los archivos fuente de bonus
BONUS_OBJS = $(BONUS_SRCS:.c=.o)
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

# Reglas
all: $(NAME)

$(NAME): $(OBJS)
	@$(MAKE) -C $(LIBFT_DIR)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

bonus: $(OBJS) $(BONUS_OBJS)
	@$(MAKE) -C $(LIBFT_DIR)
	$(CC) $(CFLAGS) $(OBJS) $(BONUS_OBJS) $(LIBFT) -o $(NAME)

clean:
	@$(MAKE) -C $(LIBFT_DIR) clean
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	@$(MAKE) -C $(LIBFT_DIR) fclean
	rm -f $(NAME)

re: fclean all

# Reglas adicionales
.PHONY: all clean fclean re bonus
