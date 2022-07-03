# SRCS    =	SRC/push_swap.c SRC/check.c

# OBJS    =    $(SRCS:.c=.o)
# #BONUS    =
# # BOBJS    =    $(BONUS:.c=.o)
# HEADER    =    SRC/push_swap.h
# NAME	=	SRC/push_swap
# CC        =    cc
# RM        =    rm -f
# CFLAGS    =    -Wall -Wextra -Werror
# LIB = libft/libft.a
# # ----------------------------------------------------------------------------

# all : $(NAME)

# SRC/%.o : SRC/%.c $(HEADER)
# 		$(CC) $(CFLAGS) -c $<

# $(NAME) : $(LIB) $(OBJS)
# 		$(CC) $(OBJS) $(LIB) -o SRC/$(NAME)

# $(LIB) :
# 		make -C libft

# # bonus:		$(LIB) $(OBJS)
# # 			$(CC) $(OBJS) $(LIB) -o $(NAME)

# clean:
# 		$(RM) SRC/$(OBJS) $(BOBJS)
# 		make clean -C libft

# fclean : clean
# 		$(RM) SRC/$(NAME)
# 		make fclean -C libft

# re : fclean all

# .PHONY : all clean fclean re bonus


CC = cc

CFLAGS = -Wall -Werror -Wextra

CFILES = push_swap.c\
		check.c

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

