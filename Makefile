# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vkuusela <vkuusela@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/05 15:04:16 by vkuusela          #+#    #+#              #
#    Updated: 2024/11/05 15:33:25 by vkuusela         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

RM = rm -f

AR = ar -rcs

SOURCES = ft_isdigit.c ft_memset.c ft_strdup.c ft_strncmp.c \
		  ft_atoi.c ft_isprint.c ft_putchar_fd.c ft_striteri.c \
		  ft_strnstr.c ft_bzero.c ft_itoa.c ft_putendl_fd.c ft_strjoin.c \
		  ft_strrchr.c ft_calloc.c ft_memchr.c ft_putnbr_fd.c ft_strlcat.c \
		  ft_strtrim.c ft_isalnum.c ft_memcmp.c ft_putstr_fd.c ft_strlcpy.c \
		  ft_substr.c ft_isalpha.c ft_memcpy.c ft_split.c ft_strlen.c ft_tolower.c \
		  ft_isascii.c ft_memmove.c ft_strchr.c ft_strmapi.c ft_toupper.c

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstadd_back.c ft_lstdelone.c \
		ft_lstclear.c ft_lstiter.c ft_lstmap.c ft_lstlast.c

OBJECTS = $(SOURCES:.c=.o)

BONUS_OBJECTS = $(BONUS:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJECTS) $(INCLUDE)
	$(AR) $(NAME) $(OBJECTS)

.c.o:	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

clean:
	$(RM) $(OBJECTS)

fclean:	clean
	$(RM) $(NAME)

re: 	fclean all

bonus:	$(OBJECTS) $(BONUS_OBJECTS)
	$(AR) $(NAME) $(BONUS_OBJECTS)

.PHONY: all clean fclean re bonus
