all: clean cookie-clicker

cookie-clicker: cookie-clicker.o
	g++ -o cookie-clicker cookie-clicker.o

cookie-clicker.o:
	g++ -c cookie-clicker.cc -std=c++14 -pthread -O3		

clean:
	rm -f cookie-clicker.o cookie-clicker
