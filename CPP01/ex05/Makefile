NAME	=	harl

SRCS	=	Harl.cpp main.cpp

OBJS	= 	${SRCS:%.cpp=%.o}

HEADER	=	Harl.hpp

CC		= c++

CFLAGS	= -Wall -Wextra -Werror -std=c++98

.PHONY	:		all clean fclean re

all		:	$(NAME)

%.o 	:		%.cpp $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME)	:	$(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	$(RM) $(OBJS)

fclean:		clean
	$(RM) $(NAME)

re:			fclean all
