CC = gcc
CPP = g++
AR = ar

CFLAGS = -Wall -Werror -Iinclude -Igen-cpp
LDFLAGS = -lthrift -L. -lmm

all: algo-cloud test

algo-cloud:
	$(CC) $(CFLAGS) -c lib/mm.c
	$(AR) crv libmm.a mm.o
	$(CPP) $(CFLAGS) -o algo-cloud gen-cpp/acb_heap_manager_server.skeleton.cpp gen-cpp/acb_heap_manager.cpp src/heap.cpp $(LDFLAGS)

test:
	$(CPP) $(CFLAGS) -o test src/test.cpp gen-cpp/acb_heap_manager.cpp -lthrift

clean:
	@rm -vf algo-cloud libmm.a mm.o test
