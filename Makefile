OS := $(shell uname)

ifeq ($(OS), Darwin)
    CC := g++ -g -pedantic -Wall -Wextra
else
    ifeq ($(OS), Linux)
    	CC := gccx
    endif
endif

all: bayes

bayes: bayes.cpp bayes.h
	$(CC) -lm -o bayes bayes.cpp

clean:
	rm -rf *.o bayes *.dSYM
