NAME	=	phonebook

SRCS	=	PhoneBook.cpp Contact.cpp main.cpp

OBJS	= 	${SRCS:%.cpp=%.o}

HEADER	=	Contact.hpp PhoneBook.hpp

CC		= c++

CFLAGS	= -Wall -Wextra -Werror -std=c++98 -I.

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

