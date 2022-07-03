CPP=g++
CPPFLAGS=-O2 -std=c++17 -Wall -Wshadow -Wextra

all: auto-fixer clean

%.o: %.c
	$(CPP) -c $(CPPFLAGS) $<

auto-fixer: auto-fixer.o header-fixer.o
	$(CPP) $(CPPFLAGS) -o auto-fixer auto-fixer.o header-fixer.o

clean:
	rm -vf *.o
