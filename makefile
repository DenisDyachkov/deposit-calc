CFLAG = -Wall -Werror -o
BIN_DIR = bin
BUILD_DIR = build
SRC_DIR = src

SRC = $(wildcard $(SRC_DIR)/*.c)
OBJ = $(SRC:$(SRC_DIR)/%.c=$(BUILD_DIR)/%.o)
TARGET = $(BIN_DIR)/main

$(TARGET): $(OBJ)
	@gcc $(CFLAG) $@ $(OBJ)

$(OBJ): $(BUILD_DIR)/%.o : $(SRC_DIR)/%.c
	@gcc -c $(CFLAG) $@ $<

.PHONY: clean

clean: 
	@rm -f $(BUILD_DIR)/*.o $(BIN_DIR)/main
