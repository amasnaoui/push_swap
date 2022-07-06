CC = cc

CFLAGS = -Wall -Werror -Wextra

CFILES = push_swap.c\
		check.c\
		check2.c\
		swap.c\
		stack.c\
		operations.c\
		push.c\
		rotate.c\
		reverse_rotate.c

# BFILES = push_swap_bonus.c\

OFILES = $(addprefix $(OBJ_DIR)/,$(CFILES:.c=.o))

BOFILES = $(addprefix $(OBJB_DIR)/,$(BFILES:.c=.o))

OBJ_DIR = ./OBJ

OBJB_DIR = ./OBJB

SRC_DIR = ./SRC

BON_DIR = ./BONUS

LIB = libft/libft.a

INC = SRC/push_swap.h

BINC = includes/push_swap_bonus.h

NAME = push_swap

CHECKER = checker

$(NAME) : $(LIB) $(OFILES)
	@$(CC) $(OFILES) $(LIB) -o $(NAME)
	@echo "done for push_swap"

$(LIB): force
	@make -C libft

force:

$(OBJ_DIR) :
	@mkdir OBJ

$(OFILES) : $(OBJ_DIR)/%.o : $(SRC_DIR)/%.c $(INC) | $(OBJ_DIR)
	@$(CC) -c $(CFLAGS) $< -o $@


bonus : $(CHECKER)

$(CHECKER) : $(LIB) $(BOFILES)
	@$(CC) $(BOFILES) $(LIB) -o $(CHECKER)
	@echo "done for checker"

$(OBJB_DIR) :
	@mkdir OBJB

$(BOFILES) : $(OBJB_DIR)/%.o : $(BON_DIR)/%.c $(BINC) | $(OBJB_DIR)
	@$(CC) -c $(CFLAGS) $< -o $@

clean :
	@rm -rf $(OBJ_DIR) $(OBJB_DIR)
	@make clean -C libft

fclean : clean
	@rm -rf $(NAME) $(CHECKER)
	@make fclean -C libft

re : fclean all

all : $(NAME)

.PHONY : re all clean fclean

