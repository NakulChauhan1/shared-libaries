# generate object file (.o) for each source file, and link all them to generate final executable to run on target

executbale.out : main.o helper.o
		gcc main.o helper.o -o executbale.out

main.o : main.c library/include/helper.h
		gcc -c main.c -I library/include/

helper.o : library/src/helper.c library/include/helper.h
		gcc -c library/src/helper.c -I library/include/

build_static : static_lib
		gcc -L . -l static -o executable.out

static_lib : main.o helper.o
		ar -r libstatic.a main.o helper.o

clean	: 
		rm *.o *.out *.a