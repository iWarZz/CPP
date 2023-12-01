# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: warzz <warzz@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/27 14:00:47 by warzz             #+#    #+#              #
#    Updated: 2023/11/30 16:13:53 by warzz            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

_RED		=	\033[01;31m
_GREEN		=	\033[01;32m
_PURPLE		=	\033[01;35m
_BOLD		=	\033[1m
_END		=	\033[00m


NAME	=	megaphone

SOURCES	=	megaphone.cpp

CC		=	g++

CFLAGS	=	-Werror -Wextra -Wall -std=c++98

RM		=	rm -rf

OBJECTS	=	${SOURCES:.cpp=.o}


%.o:	%.cpp
		@$(CC) $(FLAGS) -c $< -o $@

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