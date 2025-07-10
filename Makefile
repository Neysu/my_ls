# Compiler and flags
CC      = clang
CFLAGS  = -Wall -Wextra -Werror -g #-fsanitize=address

# Project name
NAME    = my_ls

# Directories
SRCDIR  = .
OBJDIR  = obj

# Source files
SRC     = $(SRCDIR)/main.c \

# Object files (now in obj directory)
OBJ     = $(SRC:.c=.o)
OBJ_FULL = $(addprefix $(OBJDIR)/,$(notdir $(OBJ)))

# Header files
HEADERS = $(SRCDIR)/my_ls.h 

# Create object directory
$(OBJDIR):
	@mkdir -p $@

# Rules
all: $(NAME)

$(NAME): $(OBJ_FULL)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ_FULL)

# Pattern rule for object files
$(OBJDIR)/%.o: %.c $(HEADERS) | $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
