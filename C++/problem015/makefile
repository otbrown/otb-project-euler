CC=g++
CPPFLAGS = -std=c++11 -Wall -O3

#ep015: ep015.cpp 
#	$(CC) $(CPPFLAGS) -o $@ $^

test: utilTest.cpp utils.o
	$(CC) $(CPPFLAGS) -o $@ $^

utils.o: utils.cpp ep015.h
	$(CC) $(CPPFLAGS) -c $<

clean:
	rm -rf *.o ep015 test
