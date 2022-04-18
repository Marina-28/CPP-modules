NAME	=	a.out

SRCS	=	main.cpp ClapTrap.cpp ScavTrap.cpp

HEADER	=	ClapTrap.hpp ScavTrap.hpp

OBJS	=	${SRCS:.cpp=.o}

CC		=	c++

FLAGS	=	-Wall -Werror -Wextra -std=c++98

RM		=	rm -rf

.PHONY	:	all clean fclean re

all		:	${NAME}

${NAME}	:	${OBJS} ${HEADER}
			${CC} ${FLAGS} ${OBJS} -o ${NAME}

clean	:
			${RM} ${OBJS}

fclean	:	clean
			${RM} ${NAME}

re		:	fclean all
