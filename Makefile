NAME		=	libftprintf.a

FLAG		=	-Wall -Wextra -Werror

CC			=	gcc

OBJ_DIR		=	Files/obj
SRC_DIR		=	Files/src
INC_DIR		=	Files/inc/

RESET		=	\033[0m
YELL		=	\033[33m
UP			=	\033[A
CUT			=	\033[K
BLUE		=	\033[34m

SRC_FILES	=	ft_hexa.c ft_string.c ft_character.c ft_pointer.c \
		ft_printf.c ft_putnbr.c ft_unsigned.c main.c \

INC_FILE	=	ft_printf.h

OBJ			=	$(addprefix $(OBJ_DIR)/, $(SRC_FILES:.c=.o))
SRC			=	$(addprefix $(SRC_DIR)/, $(SRC_FILES))




all: mkdir obj layout

layout:
	@printf "\n"
	@echo "$(YELL)  ___ __                     __         __    ___ $(RESET)"
	@echo "$(YELL).'  _|  |_      .-----.----.|__|.-----.|  |_.'  _|$(RESET)"
	@echo "$(BLUE)|   _|   _|     |  _  |   _||  ||     ||   _|   _|$(RESET)"
	@echo "$(YELL)|__| |____|_____|   __|__|  |__||__|__||____|__|  $(RESET)"
	@echo "$(YELL)         |______|__|                              $(RESET)"
	@echo "$(YELL)													$(RESET)"
	@printf "\n"

mkdir:
	@if [ ! -f "./Files/inc/ft_printf.h" ]; then mkdir -p $(OBJ_DIR);  mkdir -p $(SRC_DIR); mkdir -p $(INC_DIR); fi;
	@if [ ! -f "./Files/inc/ft_printf.h" ]; then cp -p $(INC_FILE) $(SRC_DIR); mv $(INC_FILE) $(INC_DIR) 2>/dev/null; mv $(SRC_FILES) $(SRC_DIR) 2>/dev/null; fi;

obj: $(NAME)
$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@mv $(NAME) $(OBJ_DIR)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@printf "\n"
	@printf "$(UP)$(CUT)"
	@echo "$(YELL)Compiling [$(NAME)]...$(RESET)"
	@$(CC) $(FLAG) -c $< -o $@ -I $(INC_DIR)
	@printf "$(UP)$(CUT)"
	@echo "$(GREEN)Finished [$@]$(RESET)"
	@printf "$(UP)$(CUT)"
	



clean:
	@rm -rf *.o

fclean: clean
	@rm -rf $(NAME)
	@if [ -d "./Files/src" ]; then mv ./Files/src/*.c . 2>/dev/null; \
	mv ./Files/inc/*.h . 2>/dev/null; rm -rf Files; fi;

re: fclean all

.PHONY: all, clean, fclean, re layout mkdir obj

# FLAG = -Wall -Wextra -Werror

# NAME = libftprintf.a

# SRC = ft_hexa.c ft_string.c ft_character.c ft_pointer.c \
# 		ft_printf.c ft_putnbr.c ft_unsigned.c main.c

# OBJ = $(SRC:.c=.o)

# all: $(NAME)

# $(NAME): $(OBJ)
# 	@ar rc $(NAME) $(OBJ)
# 	@echo "$(NAME) created"
# 	@ranlib $(NAME)
# 	@echo "$(NAME) indexed"

# %.o: %.c
# 	@gcc $(FLAG) -c $< -o $@

# clean:
# 	@rm -f $(OBJ)
# 	@echo "OBJ deleted"

# fclean: clean
# 	@rm -f $(NAME)
# 	@echo "$(NAME) deleted"

# re: fclean all
