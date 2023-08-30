SRCS += main.cpp
SRCS += ClapTrap.cpp
SRCS += ScavTrap.cpp
SRCS += FragTrap.cpp
SRCS += DiamondTrap.cpp

DEPS += ClapTrap.hpp
DEPS += ScavTrap.hpp
DEPS += FragTrap.hpp
DEPS += DiamondTrap.cpp

CC			=	c++

FLAGS		+=	-Wall
FLAGS		+=	-Wextra
FLAGS		+=	-Werror
FLAGS		+=	-std=c++98
FLAGS		+=	-Wshadow

NAME		=	fragTrap

PATH_OBJS	+= objs
OBJS		+= $(patsubst %.cpp, $(PATH_OBJS)/%.o, $(SRCS))

all		: $(NAME)

$(NAME)	: $(OBJS)
	$(CC) $(FLAGS) $^ -o $@

$(OBJS)	: $(PATH_OBJS)/%.o : %.cpp Makefile
	mkdir -p $(PATH_OBJS)
	$(CC) $(FLAGS) -c $< -o $@ -I .

clean	:
	rm -rf $(PATH_OBJS)

fclean	:	clean
	rm -f $(NAME)

re		:	fclean all

.PHONY	: all clean fclean re
