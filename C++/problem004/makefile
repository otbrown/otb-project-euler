CC=g++
CPPFLAGS = -std=c++11 -Wall -O3

ep004: ep004.cpp paliTest.o utils.o
	$(CC) $(CPPFLAGS) -o $@ $^

test: utilTest.cpp utils.o paliTest.o 
	$(CC) $(CPPFLAGS) -o $@ $^

utils.o: utils.cpp ep004.h
	$(CC) $(CPPFLAGS) -c $<

paliTest.o: paliTest.cpp utils.o ep004.h
	$(CC) $(CPPFLAGS) -c $<

clean:
	rm -rf *.o ep004 test
