CC=g++
#debug
CFLAGS=-W -Wall -Wextra -pedantic -ansi -g
LDFLAGS=-W -Wall -Wextra -pedantic -ansi -g
#release
#CFLAGS=-O2 -s
#LDFLAGS=-O2 -s
EXEC=laby
SRC= $(wildcard *.cpp)
OBJ= $(SRC:.cpp=.o)

all: $(EXEC)

laby: $(OBJ)
	@echo "-o $@"
	@$(CC) -o $@ $^ $(LDFLAGS)

%.o: %.cpp
	@echo "-o $@ -c $<"
	@$(CC) -o $@ -c $< $(CFLAGS)

.PHONY: clean mrproper

clean:
	@rm -rf *.o

mrproper: clean
	@rm -rf $(EXEC)

