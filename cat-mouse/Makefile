CC=g++
DEBUG_FLAGS=
SRCS := $(shell find . -name "*.cpp")
OBJS := $(SRCS:%.cpp=%.o)
EXECUTABLES=cat_mouse

all:
	make $(EXECUTABLES)

$(EXECUTABLES): $(OBJS)
	$(CC) $(DEBUG_FLAGS) -o $@ $^

%.o: %.cpp
	$(CC) -c $(DEBUG_FLAGS) -o $@ $^

clean:
	rm -f *.o *~ $(EXECUTABLES)
