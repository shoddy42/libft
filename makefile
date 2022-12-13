# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: wkonings <wkonings@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/10/29 16:21:56 by wkonings      #+#    #+#                  #
#    Updated: 2022/12/13 23:02:00 by wkonings      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

# ----------------------------------------- #
# --------------- VARIABLES --------------- #
# ----------------------------------------- #

NAME = libft.a
FLAGS = -Wall -Wextra -Werror
DEBUG = -g #-fsanitize=address

# ---------------------------------------- #
# --------------- DIRECTORIES ------------ #d
# ---------------------------------------- #

#src and its subdirectories.
SRC_DIR		:= src
S_STR		:= str
S_IS_X		:= is_x
S_PRINT		:= print
S_LIST		:= list
S_MEM		:= mem
S_NUM		:= num

OBJ_DIR		:=	obj
OBJ_BAD		:=	env executor builtins tokens parser
OBJ_SUB		:=	$(addprefix $(OBJ_DIR)/, $(OBJ_BAD))

INCLUDE_DIR	:= include

INCLUDES	:= libft/libft.a
HEADERS_DIR	:= include
INC			:= -I include

# ----------------------------------------- #
# --------------- FILES ------------------- #
# ----------------------------------------- #

HEADER_FILES:= libft.h
HEADERS		:=	$(addprefix $(INCLUDE_DIR)/, $(HEADER_FILES))

# MAIN_FILES	:= 

# MAIN_FILES = tolower toupper isprint isascii isalnum isdigit isalpha atoi \
# 		strncmp strnstr strrchr strchr strlcat strlcpy strlen memcmp \
# 		memchr memmove memccpy memcpy bzero memset calloc strdup \
# 		substr strjoin strtrim split itoa strmapi putchar_fd \
# 		putstr_fd putendl_fd putnbr_fd lstnew lstadd_front lstsize \
# 		lstlast lstadd_back lstdelone lstclear lstiter lstmap strcmp \
# 		charinstr strexpand strisnum strchr_num strclean isspace \
# 		strcontains
		
STR_FILES := charinstr split strchr strchr_num strclean strcmp strcontains\
			 strdup strisnum strjoin strlcat strlcpy strlen strmapi strncmp\
			 strnstr strrchr substr tolower toupper atoi

NUM_FILES := itoa

MEM_FILES := memcmp memchr memmove memccpy memcpy bzero memset calloc

IS_FILES  := isprint isascii isalnum isdigit isalpha isspace

PRINT_FILES := putstr_fd putendl_fd putnbr_fd

FILES	:=	$(addprefix $(S_STR)/, $(STR_FILES:%=ft_%.c)) \
			$(addprefix $(S_MEM)/, $(MEM_FILES:%=ft_%.c)) \
			$(addprefix $(S_PRINT)/, $(PRINT_FILES:%=ft_%.c)) \
			$(addprefix $(S_IS_X)/, $(IS_FILES:%=ft_%.c)) \
			$(addprefix $(S_NUM)/, $(NUM_FILES:%=ft_%.c))

SRCS	:=	$(addprefix $(SRC_DIR)/, $(FILES))
OBJS	:=	$(addprefix $(OBJ_DIR)/, $(FILES:%.c=%.o))

# ----------------------------------------- #
# --------- COLOURS / FORMATTING ---------- #
# ----------------------------------------- #

#Formatting
RESET	:= \1\33[0m\2
END		:= \1\33[0m\2\3
BANNER	:= libft_banner

#Colours
YELLOW	:= \1\33[38;5;220m\2
BLACK	:= \1\33[38;5;232m\2
ORANGE	:= \1\33[38;5;202m\2
RED		:= \1\33[38;5;196m\2
PINK	:= \1\33[38;5;198m\2
GREEN	:= \1\33[38;5;28m\2
BLUE	:= \1\33[38;5;33m\2
L_BLUE	:= \1\33[38;5;69m\2
D_BLUE	:= \1\33[38;5;21m\2
GREY	:= \1\33[38;5;242m\2
PURPLE	:= \1\33[38;5;92m\2
VIOLET	:= \1\33[38;5;183m\2
# ----------------------------------------- #
# --------------- RECIPES ----------------- #
# ----------------------------------------- #


$(NAME): $(BANNER) $(OBJS) $(HEADERS) | $(BIN_DIR) 
	@printf "\n$(BLUE)Compiling $(YELLOW)$(NAME).\n$(END)"
	@ar rcs $(NAME) $(OBJS)
	@make pog
	@printf "$(PINK)Compilation of $(YELLOW)$(NAME) successful.\n$(END)"

all: $(NAME)

$(OBJ_DIR)/%.o:$(SRC_DIR)/%.c | $(HEADERS)
	@mkdir -p $(dir $@)
	@printf "$(BLUE)Compiling $(D_BLUE)$(notdir $@) $(RESET)from $(PURPLE)$<$(END)\n"
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@printf "$(YELLOW)Cleaning up!\n$(END)"
	/bin/rm -rf $(OBJ_DIR)

fclean:	clean
	/bin/rm -f $(NAME)
	@printf "$(L_BLUE)Fully clean\n$(END)"

re: fclean all

test: $(NAME)
	@./$(NAME)

pog:
	@printf "$(PURPLE)"
	@printf "⣿⣿⣿⣿⡿⠟⠛⠛⠛⠛⠉⠉⠙⠛⠛⠿⢿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠿⠟\n"
	@printf "⣿⣿⣯⣥⣤⣶⣶⣶⣶⣿⣿⣿⣿⣿⣿⣷⣾⣿⣿⣿⣿⣿⣿⣿⣏⣀⣀⣀⡀\n"
	@printf "⣿⣿⣿⣿⣿⣿⣿⡿⠿⠛⠛⠻⠿⠟⠉⠉⠉⢻⣿⣿⣿⡿⠟⠋⣡⣼⣿⣿⣿⡄\n"
	@printf "⣿⣿⣿⣟⣭⣤⣶⣶⣿⣿⠃⠀⠀⢀⣀⣤⣶⣿⣿⣿⣿⡅⡀⢀⣩⣤⣤\n"
	@printf "⣿⣿⣿⣿⣿⣿⣛⡛⠛⠛⠛⢋⣩⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣛⠛⠛⠓⠠\n"
	@printf "⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣦⣤⣤⣤⣦\n"
	@printf "⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇\n"
	@printf "⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠿⠿⠿⠿⢿⡿⢿⣿⣿⣿⠃\n"
	@printf "⠿⠿⠿⠿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣥⣄⣀⣀⠀⠀⠀⠀⠀⢰⣾⣿⣿⠏\n"
	@printf "⠀⠀⠀⠀⠀⠀⠉⣩⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣤⣜⡻⠋\n"
	@printf "⣰⣾⣷⣶⣿⣾⣖⣻⣿⣿⡿⣿⣿⣿⣿⠿⠿⠟⠛⠛⠛⠋⠉⠉⢉⡽⠃\n"
	@printf "⣿⣿⣿⣿⣿⣿⡉⠉⠉⠛⠛⠛⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⡤⠚⠉\n"
	@printf "⠛⠛⣿⣿⣿⣿⣿⣿⣿⠉⠛⢶⣶⣄⠀⠀⠀⠀⠀⠀⠀⠀⡇\n"
	@printf "⠠⣾⣿⣿⣿⣿⣿⠿⠟⠃⠀⠀⠀⠈⠲⣴⣦⣤⣤⣤⣶⡾⠁\n"
	@printf "⠄⠈⠉⠻⢿⣿⣿⡀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠛⠛⠛⠉\n"
	@printf "$(END)"

libft_banner:
	@printf "$(YELLOW)"
	@printf "██╗░░░░░██╗██████╗░███████╗████████╗\n"
	@printf "██║░░░░░██║██╔══██╗██╔════╝╚══██╔══╝\n"
	@printf "██║░░░░░██║██████╦╝█████╗░░░░░██║░░░\n"
	@printf "██║░░░░░██║██╔══██╗██╔══╝░░░░░██║░░░\n"
	@printf "███████╗██║██████╦╝██║░░░░░░░░██║░░░\n"
	@printf "╚══════╝╚═╝╚═════╝░╚═╝░░░░░░░░╚═╝░░░\n"
	@printf "$(END)"

.PHONY: all clean fclean re test