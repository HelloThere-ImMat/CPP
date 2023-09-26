SRCS += main.cpp
SRCS += Bureaucrat.cpp
SRCS += AForm.cpp
SRCS += ShruberryCreationForm.cpp
SRCS += RobotomyRequestForm.cpp
SRCS += PresidentialPardonForm.cpp
SRCS += Intern.cpp

DEPS +=	Bureaucrat.hpp
DEPS += AForm.hpp
DEPS += ShruberryCreationForm.hpp
DEPS += RobotomyRequestForm.hpp
DEPS += PresidentialPardonForm.hpp
DEPS += Intern.hpp

CC			=	c++

FLAGS		+=	-Wall
FLAGS		+=	-Wextra
FLAGS		+=	-Werror
FLAGS		+=	-std=c++98

NAME		=	Intern

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
