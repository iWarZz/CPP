# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/04 13:06:31 by ssalor            #+#    #+#              #
#    Updated: 2024/07/04 13:07:00 by ssalor           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

_RED		=	\033[01;31m
_GREEN		=	\033[01;32m
_PURPLE		=	\033[01;35m
_BOLD		=	\033[1m
_END		=	\033[00m


NAME	=	Sed_is_for_losers

SOURCES	=	main.cpp

CC		=	c++

CFLAGS	=	-Werror -Wextra -Wall -std=c++98

RM		=	rm -rf

OBJECTS	=	${SOURCES:.cpp=.o}


%.o:	%.cpp
		@$(CC) $(CFLAGS) -c $< -o $@

all:	$(NAME)
		@echo ""
		@echo "$(_GREEN)$(_BOLD)[Makefile]$(_END) $(_BOLD) $(_PURPLE)Project $(NAME) $(_GREEN)ready$(_END)"
		@echo ""

$(NAME):	$(OBJECTS)
		@$(CC) $(CFLAGS) $^ -o $(NAME)
		@echo '$(NAME) compiled !'

fclean:	clean
		@$(RM) $(NAME)

clean:
		@$(RM) $(OBJECTS)
		@echo "$(_CYAN)$(_BOLD)[Makefile]$(_END)cleaned"

re: fclean all

.PHONY: all clean fclean re