DEBUG=no
CC=g++
EXEC=laby
ifeq (${DEBUG},yes)
	#debug
	CFLAGS=-W -Wall -Wextra -pedantic -O0 -g --std=c++11
	LDFLAGS=
else
	#release
	CFLAGS=-O2 -s -std=c++11
	LDFLAGS=
endif

SRC= $(wildcard *.cpp)
OBJ= $(SRC:.cpp=.o)

all: $(EXEC)
ifeq ($(DEBUG),no)
	@echo "Clean project"
	@rm -rf *.o
endif

$(EXEC): $(OBJ)
	@echo "$@"
	@$(CC) -o $@ $^ $(LDFLAGS)

%.o: %.cpp
	@echo "-o $@ -c $<"
	@$(CC) -o $@ -c $< $(CFLAGS)

.PHONY: clean mrproper

clean:
	@echo "Clean object file"
	@rm -rf *.o

mrproper: clean
	@echo "Delete Binary
	@rm -rf $(EXEC)

