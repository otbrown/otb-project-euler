CC=g++
CPPFLAGS = -std=c++11 -Wall -O3

ep015: ep015.cpp count_paths.o utils.o 
	$(CC) $(CPPFLAGS) -o $@ $^

test: utilTest.cpp utils.o
	$(CC) $(CPPFLAGS) -o $@ $^

count_paths.o: count_paths.cpp ep015.h
	$(CC) $(CPPFLAGS) -c $<

utils.o: utils.cpp ep015.h
	$(CC) $(CPPFLAGS) -c $<

clean:
	rm -rf *.o ep015 test
