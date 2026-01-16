CC =gcc
CFLAGS = -Wall -Wextra -Werror -Iinclude

SRC = src/my_strlen.c \
      src/my_strcpy.c \
      src/my_strdup.c \
      src/my_strcmp.c \
      src/my_strtok.c \
      src/my_strstr.c

OBJ = $(SRC:.c=.o)

all: test

test: $(OBJ) tests/test.c
	$(CC) $(CFLAGS) $^ -o test

clean:
	rm -f $(OBJ) test
	
