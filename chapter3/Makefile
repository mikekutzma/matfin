ifeq ($(OS),Windows_NT)
	executable_ext = .exe
else
	executable_ext = .out
endif

all: main

main: main.o binmodel.o options.o
	g++ -o main$(executable_ext) main.o binmodel.o options.o

%.o: %.cpp %.h
	g++ -c $<

