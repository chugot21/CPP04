NAME =	AAnimals

SRCS =	main.cpp \
		AAnimal.cpp \
		Cat.cpp \
		Dog.cpp \
		Brain.cpp \

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 -lm

OBJS = $(SRCS:.cpp=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
			$(CC)  $(FLAGS) $(OBJS) -o $(NAME)
clean:
		rm -f $(OBJS)

fclean:
		rm -f $(OBJS) $(NAME)

re:		fclean $(NAME)

.PHONY:	all clean fclean re
