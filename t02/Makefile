NAME = minilibmx.a

SRC_DIR = src
OBJ_DIR = obj
INC_DIR = inc

SRC = $(SRC_DIR)/mx_atoi.c $(SRC_DIR)/mx_isdigit.c $(SRC_DIR)/mx_isspace.c \
      $(SRC_DIR)/mx_printchar.c $(SRC_DIR)/mx_printint.c $(SRC_DIR)/mx_printstr.c \
      $(SRC_DIR)/mx_strcpy.c $(SRC_DIR)/mx_strcmp.c $(SRC_DIR)/mx_strlen.c

OBJ = $(OBJ_DIR)/mx_atoi.o $(OBJ_DIR)/mx_isdigit.o $(OBJ_DIR)/mx_isspace.o \
      $(OBJ_DIR)/mx_printchar.o $(OBJ_DIR)/mx_printint.o $(OBJ_DIR)/mx_printstr.o \
      $(OBJ_DIR)/mx_strcpy.o $(OBJ_DIR)/mx_strcmp.o $(OBJ_DIR)/mx_strlen.o

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

