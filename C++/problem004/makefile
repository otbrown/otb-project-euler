CC=g++
CPPFLAGS = -std=c++11 -Wall -O3

test: utilTest.cpp utils.o
	$(CC) $(CPPFLAGS) -o $@ $^

utils.o: utils.cpp ep004.h
	$(CC) $(CPPFLAFS) -c $<

clean:
	rm -rf *.o ep004 test
