ifeq ($(OS),Windows_NT)
	executable_ext = .exe
else
	executable_ext = .out
endif

all: main

main: main.o solver.h
	g++ -o main$(executable_ext) main.o

%.o: %.cpp %.h
	g++ -c $<

