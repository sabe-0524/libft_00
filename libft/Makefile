# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sabe <sabe@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/16 13:00:17 by sabe              #+#    #+#              #
#    Updated: 2024/04/20 21:29:34 by sabe             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFRAGS = -Wall -Wextra -Werror
NAME = libft.a
SRCS = ft_memcpy.c	ft_strlcat.c ft_atoi.c	ft_memmove.c	ft_strlcpy.c ft_bzero.c	ft_memset.c	ft_strlen.c ft_calloc.c	ft_putchar_fd.c	ft_strmapi.c ft_isalnum.c	ft_putendl_fd.c	ft_strncmp.c ft_isalpha.c	ft_putnbr_fd.c	ft_strnstr.c ft_isascii.c	ft_putstr_fd.c	ft_strrchr.c ft_isdigit.c	ft_split.c	ft_strtrim.c ft_isprint.c	ft_strchr.c	ft_substr.c ft_itoa.c	ft_strdup.c	ft_tolower.c ft_memchr.c	ft_striteri.c	ft_toupper.c ft_memcmp.c	ft_strjoin.c ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBJS = $(SRCS:.c=.o)
INCLUDES = -I includes

$(NAME) :	$(OBJS)
	ar rc $@ $^

%.o:%.c
	$(CC) -c  $(CFLAGS) $^ -o $@ $(INCLUDES)

all : $(NAME)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re