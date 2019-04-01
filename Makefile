magic-trick:
	g++ magic-trick/magic-trick.cc -std=c++14 -pthread -O3 -o magic-trick/magic-trick

run-magic-trick:
	magic-trick/magic-trick < magic-trick/A-small-practice.in
