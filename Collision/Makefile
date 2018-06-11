COMPILER = g++
FRAMEWORKS = -framework OpenGL -framework GLUT
O_FLAG = -c
EXEC_FLAG = -o
CPP_11 = -Wc++11-extensions

all: test.o math_mucl.o vec.o line.o body.o body_def.o
	$(COMPILER) test.o math_mucl.o vec.o line.o body.o body_def.o $(FRAMEWORKS) $(EXEC_FLAG) test
test.o: test.cpp
	$(COMPILER) $(O_FLAG) test.cpp
math_mucl.o: math_mucl.hpp math_mucl.cpp
	$(COMPILER) $(O_FLAG) math_mucl.cpp
vec.o: vec.hpp vec.cpp
	$(COMPILER) $(O_FLAG) vec.cpp
line.o: line.hpp line.cpp
	$(COMPILER) $(O_FLAG) line.cpp
body.o: body.hpp body.cpp
	$(COMPILER) $(CPP_11) $(O_FLAG) body.cpp
body_def.o: body_def.hpp body_def.cpp
	$(COMPILER) $(O_FLAG) body_def.cpp
clean:
	rm *.o test