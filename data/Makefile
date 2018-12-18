OS := $(shell uname)

ifeq ($(OS), Darwin)
    CC := g++ -g -pedantic -Wall -Wextra
else
    ifeq ($(OS), Linux)
    	CC := gccx
    endif
endif

all: gendata

bayes: gendata.cpp
	$(CC) -lm -o gendata gendata.cpp

clean:
	rm -rf *.o gendata *.dSYM
