#								################
#								### MAKEFILE ###
#								################

SRCS_PATH = srcs/

SRCS += main.cpp
SRCS += PmergeMe.cpp
SRCS += Pair.cpp

vpath %.cpp $(SRCS_PATH)

DEPS_PATH = includes/

DEPS += PmergeMe.hpp
DEPS += Pair.hpp

vpath %.hpp $(DEPS_PATH)

CC			=	c++

FLAGS		+=	-Wall
FLAGS		+=	-Wextra
FLAGS		+=	-Werror
FLAGS		+=	-std=c++98

NAME		=	rnp

PATH_OBJS	+= objs
OBJS		+= $(patsubst %.cpp, $(PATH_OBJS)/%.o, $(SRCS))

all		: $(NAME)

$(NAME)	: $(OBJS)
	$(CC) $(FLAGS) $^ -o $@

$(OBJS)	: $(PATH_OBJS)/%.o : %.cpp Makefile $(DEPS)
	mkdir -p $(PATH_OBJS)
	$(CC) $(FLAGS) -c $< -o $@ -I $(DEPS_PATH)

clean	:
	rm -rf $(PATH_OBJS)

fclean	:	clean
	rm -f $(NAME)

re		:	fclean all

.PHONY	: all clean fclean re
