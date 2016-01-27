CC=g++
CPPFLAGS = -std=c++11 -Wall -O3

ep003: ep003.cpp tests.o lpf.o
	$(CC) $(CPPFLAGS) -o $@ $^

tests.o: tests.cpp ep003.h
	$(CC) $(CPPFLAGS) -c $<

lpf.o: lpf.cpp ep003.h
	$(CC) $(CPPFLAGS) -c $<

clean:
	rm -rf *.o ep003
