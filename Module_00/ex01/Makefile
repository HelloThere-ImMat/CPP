SRCS += main.cpp
SRCS += Phonebook.cpp

DEPS += Phonebook.hpp

CC			=	g++

FLAGS		+=	-Wall
FLAGS		+=	-Wextra
FLAGS		+=	-Werror

NAME		=	phonebook

PATH_OBJS	+= objs/
OBJS		+= $(patsubst %.cpp, $(PATH_OBJS)/%.o, $(SRCS))

all		: $(NAME)

$(NAME)	: $(OBJS)
	$(CC) $(FLAGS) $^ -o $@

$(OBJS)	: $(PATH_OBJS)/%.o : %.cpp Makefile
	mkdir -p $(PATH_OBJS)
	$(CC) $(FLAGS) -c $< -o $@ -I $(DEPS)

clean	:
	rm -r $(PATH_OBJS)

fclean	:	clean
	rm -f $(NAME)

re		:	fclean all

.PHONY	: all clean fclean re


