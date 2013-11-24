DEBUG=yes
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

$(EXEC): $(OBJ)
	@echo "$@"
	@$(CC) -o $@ $^ $(LDFLAGS)

%.o: %.cpp
	@echo "-o $@ -c $<"
	@$(CC) -o $@ -c $< $(CFLAGS)

.PHONY: clean mrproper

clean:
	@rm -rf *.o

mrproper: clean
	@rm -rf $(EXEC)

