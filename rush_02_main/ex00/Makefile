SRCS	=	srcs/ft_fct.c srcs/ft_read_dict.c srcs/main.c srcs/ft_atoi.c

OBJS	=	${SRCS:.c=.o}

DEPS	=	-I./includes/

GCC		=	gcc
RM		=	rm -f

FLAGS	=	-Wall -Wextra -Werror 

NAME	=	rush-02

.c.o:
	${GCC} ${FLAGS} -c $< ${DEPS} -o ${<:.c=.o}

${NAME}:	${OBJS}
			${GCC} ${FLAGS} ${OBJS} -o ${NAME}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
