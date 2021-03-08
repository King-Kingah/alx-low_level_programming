# 0x0E. C - Structures, typedef

# General
- What are structures, when, why and how to use them
- How to use typedef

A structure is a user defined data type available
in C that allows to combine data items of
different kinds.

The general syntax for a struct declaration in C is:

struct tag_name {
   type member1;
   type member2;
   /* declare as many members as desired, but the entire structure size must be known to the compiler. */
};