# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/02 13:02:53 by ssalor            #+#    #+#              #
#    Updated: 2024/07/04 11:19:27 by ssalor           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

_RED		=	\033[01;31m
_GREEN		=	\033[01;32m
_PURPLE		=	\033[01;35m
_BOLD		=	\033[1m
_END		=	\033[00m


NAME	=	unnecessary_violence

SOURCES	=	main.cpp\
			HumanA.cpp\
			HumanB.cpp\
			Weapon.cpp

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