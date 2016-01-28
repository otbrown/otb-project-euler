CC=g++
CPPFLAGS = -std=c++11 -Wall -O3

ep003: ep003.cpp utils.o tests.o lpf.o
	$(CC) $(CPPFLAGS) -o $@ $^

utils.o: utils.cpp ep003.h
	$(CC) $(CPPFLAFS) -c $<

tests.o: tests.cpp ep003.h
	$(CC) $(CPPFLAGS) -c $<

lpf.o: lpf.cpp ep003.h
	$(CC) $(CPPFLAGS) -c $<

clean:
	rm -rf *.o ep003
