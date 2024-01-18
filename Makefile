# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acherraq <acherraq@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/18 13:12:30 by acherraq          #+#    #+#              #
#    Updated: 2024/01/18 13:57:18 by acherraq         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar -rcs
RM = rm -rf

SRCS = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_putunbr.c ft_hexup.c ft_hexlow.c ft_ptr.c ft_format.c

# Convert source files to object files
OBJS = $(SRCS:.c=.o)

# Rule to build the library
$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

# Rule to compile each source file to object file
%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

# Default target
all: $(NAME)

# Clean object files
clean:
	$(RM) $(OBJS)

# Clean object files and the library
fclean: clean
	$(RM) $(NAME)

# Rebuild the library
re: fclean all

.PHONY: all clean fclean re