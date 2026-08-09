SRCS = \

OBJS = $(SRCS:.c=.o) 

SRCSB = \

OBJSB = $(SRCSB:.c=.o)

CC = gcc -Wall -Wextra -Werror
AR = ar rc
RM = rm -f
NAME = libftprintf.a

$(NAME):
	$(CC) -c $(SRCS)
	$(AR) $(NAME) $(OBJS)
	@echo "\nsuccessful compilation"

all: $(NAME)

bonus:
	$(CC) -c $(SRCSB)
	$(AR) $(NAME) $(OBJSB)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(OBJSB)

re: fclean all

.PHONY: all clean fclean re bonus