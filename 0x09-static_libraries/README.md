## 0x09-static_libraries

### Description
In the C programming language, a static library is a compiled object file containing all symbols required by the main program to operate (functions, variables etc.) as opposed to having to pull in separate entities. Static libraries aren't loaded by the compile at run-time; only the executable file need be loaded.

## Here I learned;
* What is a static library, how does it work, how to create one, and how to use it
* Basic usage of ar, ranlib, nm

#### create_static_lib.sh
This is a script that creates a static library called liball.a from all the .c files that are in the current directory.


