SRCS += megaphone.cpp

CC			=	g++

FLAGS		+=	-Wall
FLAGS		+=	-Wextra
FLAGS		+=	-Werror
FLAGS		+=	-std=c++98

NAME		=	megaphone

PATH_OBJS	+= objs/
OBJS		+= $(patsubst %.cpp, $(PATH_OBJS)/%.o, $(SRCS))

all		: $(NAME)

$(NAME)	: $(OBJS)
	$(CC) $(FLAGS) $^ -o $@

$(OBJS)	: $(PATH_OBJS)/%.o : %.cpp Makefile
	mkdir -p $(PATH_OBJS)
	$(CC) $(FLAGS) -c $< -o $@

clean	:
	rm -r $(PATH_OBJS)

fclean	:	clean
	rm -f $(NAME)

re		:	fclean all

.PHONY	: all clean fclean re


