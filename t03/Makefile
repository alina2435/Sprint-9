NAME = minilibmx.a

SRC_DIR = src
OBJ_DIR = obj
INC_DIR = inc

SRC = $(wildcard $(SRC_DIR)/*.c)

OBJ = $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

CC = clang
CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic -I$(INC_DIR)

all: MINILIBMX

MINILIBMX: $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	rm -rf $(OBJ_DIR)/*.o

uninstall: clean
	rm -f $(NAME)
	rm -rf $(OBJ_DIR)

reinstall: uninstall all

