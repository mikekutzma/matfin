ifeq ($(OS),Windows_NT)
	executable_ext = .exe
else
	executable_ext = .out
endif

CFLAGS = -Wall
SRC = $(wildcard *.cpp)
DEPS = $(wildcard *.h)
OBJS = $(SRC:.cpp=.o)

all: main

main: $(OBJS)
	$(CXX) $(CFLAGS) -o $@$(executable_ext) $^

%.o: %.cpp $(DEPS)
	$(CXX) $(CFLAGS) -c -o $@ $<

.PHONY: clean
clean:
	rm -f $(OBJS) main$(executable_ext)
