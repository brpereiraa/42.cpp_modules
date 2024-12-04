NAME = sed

SRCS = main.cpp

OBJS = ${SRCS:.cpp=.o}

CPPFLAGS = -Wall -Werror -Wextra -pedantic -std=c++98

$(NAME): ${OBJS}
		c++ ${CPPFLAGS} ${OBJS} -o ${NAME}
		
all: ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.SILENT: