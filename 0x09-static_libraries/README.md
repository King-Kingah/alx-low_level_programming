# C - Static libraries

# General
- What is a static library, how does it work, how to create one, and how to use it
- Basic usage of ar, ranlib, nm

# Basics:

- Library -  a collection of items that you can call from your program.
- Static Library - a file containing a collection of object files (*.o) that are linked into the program during the linking phase of compilation and are not relevant during runtime.

# How to create static libraries?
 - gcc 
 -To create a static library using GCC we need to compile our library code into an object file so we tell GCC to do this using -c

- ar -
 - The archiver, also known simply as ar, is a Unix utility that maintains groups of files as a single archive file.

- ranlib -
 - ranlib makes a header in the library with the symbols of the object file contents.This helps the compiler to quickly reference symbols.