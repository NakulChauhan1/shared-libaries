
Compiling multiple source files and generating final executable:
gcc main.c <2nd source file> <3rd source file>
gcc main.c <2nd source file> <3rd source file> -o <name of executable to be generated>

Compiling and Linking with header file present in some other location:
gcc main.c <2nd source file> <3rd source file> -I <path of header files> -o <name of executable to be generated>

Compiling and generating object file for each source and then linking all of them to form final executable:
gcc -c main.c -I library/include/ 
gcc -c library/src/helper.c -I library/include/
gcc main.o helper.o -o executable.out


gcc option flags:
-o writes the build output to an output file.
-I adds the subdirectory ./includes (which can be specified as a relative or absolute path) to the search path of standard headers.
-c compiles source files without linking (creates .o for each .c).
-l option tells GCC to link in the specified library
-L looks in directory for library files

Creating static library:
ar -r libname.a objectfile1.o objectfile2.o objectfile3.o ...


References:
https://www.geeksforgeeks.org/multiple-source-files-in-c/
https://gist.github.com/jakelevi1996/ce46a808fe3b5ef06ece63aea0bd2fed
