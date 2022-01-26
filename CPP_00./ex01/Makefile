MAKEFLAGS += -s

NAME := phone_book

CC := c++
CFLAGS := -Wall -Werror -Wextra

INC := $(shell find . -name '*.hpp')
INC_DIR := inc

SRC := $(shell find . -name '*.cpp')
OBJ := $(SRC:%.cpp=%.o)

RM := rm -rf

CPPLINT := cpplint *.hpp *.cpp

CPPLINT_CFG := CPPLINT.cfg
CPPLINT_CFG_DIR := ../cpplint/CPPLINT.cfg

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -I $(INC_DIR) $^ -o $@

%.o: %.c $(INC)
	$(CC) $(CFLAGS) -I $(INC_DIR) $< -c -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

cpplint:
	cp $(CPPLINT_CFG_DIR) $(CPPLINT_CFG)
	$(CPPLINT)
	$(RM) $(CPPLINT_CFG)

re: fclean all

.PHONY: all clean fclean re cpplint