SRCS    =	push_swap.c check.c

OBJS    =    $(SRCS:.c=.o)
#BONUS    =
# BOBJS    =    $(BONUS:.c=.o)
HEADER    =    push_swap.h
NAME	=	push_swap
CC        =    cc
RM        =    rm -f
CFLAGS    =    -Wall -Wextra -Werror
LIB = libft/libft.a
# ----------------------------------------------------------------------------

all : $(NAME)

%.o : %.c $(HEADER)
		$(CC) $(CFLAGS) -c $<

$(NAME) : $(LIB) $(OBJS)
		$(CC) $(OBJS) $(LIB) -o $(NAME)

$(LIB) :
		make -C libft

# bonus:		$(LIB) $(OBJS)
# 			$(CC) $(OBJS) $(LIB) -o $(NAME)

clean:
		$(RM) $(OBJS) $(BOBJS)
		make clean -C libft

fclean : clean
		$(RM) $(NAME)
		make fclean -C libft

re : fclean all

.PHONY : all clean fclean re bonus
