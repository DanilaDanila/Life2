all: test.o math_mucl.o vec.o line.o
	g++ test.o math_mucl.o vec.o line.o -o test
test.o: test.cpp
	g++ -c test.cpp
math_mucl.o: math_mucl.hpp math_mucl.cpp
	g++ -c math_mucl.cpp
vec.o: vec.hpp vec.cpp
	g++ -c vec.cpp
line.o: line.hpp line.cpp
	g++ -c line.cpp
clean:
	rm *.o test