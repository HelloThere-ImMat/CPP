#								################
#								### MAKEFILE ###
#								################

SRCS_PATH = srcs/

SRCS += main.cpp
SRCS += AMateria.cpp
SRCS += Character.cpp
SRCS += Cure.cpp
SRCS +=	Ice.cpp
SRCS += MateriaSource.cpp

vpath %.cpp $(SRCS_PATH)

DEPS_PATH = deps/

DEPS += AMateria.hpp
DEPS += Character.hpp
DEPS += Cure.hpp
DEPS += Ice.hpp
DEPS += ICharacter.hpp
DEPS += IMateriaSource.hpp
DEPS += MateriaSource.hpp

vpath %.hpp $(DEPS_PATH)

CC			=	c++

FLAGS		+=	-Wall
FLAGS		+=	-Wextra
FLAGS		+=	-Werror
FLAGS		+=	-std=c++98
FLAGS		+= -g3

NAME		=	Materia

PATH_OBJS	+= objs
OBJS		+= $(patsubst %.cpp, $(PATH_OBJS)/%.o, $(SRCS))

all		: $(NAME)

$(NAME)	: $(OBJS)
	$(CC) $(FLAGS) $^ -o $@

$(OBJS)	: $(PATH_OBJS)/%.o : %.cpp Makefile
	mkdir -p $(PATH_OBJS)
	$(CC) $(FLAGS) -c $< -o $@ -I $(DEPS_PATH)

clean	:
	rm -rf $(PATH_OBJS)

fclean	:	clean
	rm -f $(NAME)

re		:	fclean all

.PHONY	: all clean fclean re
