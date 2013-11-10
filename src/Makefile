DEBUG=yes
OS=linux
ifeq (${OS},windows)
	CC=i486-mingw32-g++
	EXEC=laby.exe
	CFLAGS=-I/usr/i486-mingw32/include/ -static-libgcc -static-libstdc++
	LDFLAGS= -static-libgcc -static-libstdc++
else
	CC=g++
	EXEC=laby
	ifeq (${DEBUG},yes)
		#debug
		CFLAGS=-W -Wall -Wextra -pedantic -ansi -g
		LDFLAGS=
	else
		#release
		#CFLAGS=-O2 -s
		LDFLAGS=-O2 -s
	endif
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

