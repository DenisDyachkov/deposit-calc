CFLAG = -Wall -Werror -o
BIN_DIR = bin
BUILD_DIR = build/src
SRC_DIR = src

SRC = $(wildcard $(SRC_DIR)/*.c)
OBJ = $(SRC:$(SRC_DIR)/%.c=$(BUILD_DIR)/%.o)
TARGET = $(BIN_DIR)/main

BUILD_DIR_TEST = build/test
SRC_DIR_TEST = test
SRC_TEST = $(wildcard $(SRC_DIR_TEST)/*.c)
OBJ_TEST = $(SRC_TEST:$(SRC_DIR_TEST)/%.c=$(BUILD_DIR_TEST)/%.o)
TARGET_TEST = $(BIN_DIR)/deposit-calc-test

$(TARGET): $(OBJ)
	@gcc $(CFLAG) $@ $(OBJ)

$(OBJ): $(BUILD_DIR)/%.o : $(SRC_DIR)/%.c
	@gcc -c $(CFLAG) $@ $<

.PHONY: clean

clean: 
	@rm -f $(BUILD_DIR)/*.o $(BIN_DIR)/main

