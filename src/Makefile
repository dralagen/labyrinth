CC=g++
CFLAGS=-W -Wall -ansi -pedantic -g
LDFLAGS=
EXEC=laby
SRC= $(wildcard *.cpp)
OBJ= $(SRC:.cpp=.o)

all: $(EXEC)

laby: $(OBJ)
	@$(CC) -o $@ $^ $(LDFLAGS)

%.o: %.c
	@$(CC) -o $@ -c $< $(CFLAGS)

.PHONY: clean delete

clean:
	@rm -rf *.o

delete: clean
	@rm -rf $(EXEC)

