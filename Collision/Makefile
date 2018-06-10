COMPILER = g++

all: test.o math_mucl.o vec.o line.o
	$(COMPILER) test.o math_mucl.o vec.o line.o -o test
test.o: test.cpp
	$(COMPILER) -c test.cpp
math_mucl.o: math_mucl.hpp math_mucl.cpp
	$(COMPILER) -c math_mucl.cpp
vec.o: vec.hpp vec.cpp
	$(COMPILER) -c vec.cpp
line.o: line.hpp line.cpp
	$(COMPILER) -c line.cpp
clean:
	rm *.o test