Basic C
=======

---

History
=======

- Developed by Dennis Ritchie between 1969 and 1973
    - With Brian Kernigham (K&R C)
    - Book: The C Programming Language
- One of the most widely used languages of all time
- Named C becuase its features were derived from "B"
    - "A stripped down verison of BCPL"
- Influenced many languages, most notably C++
    - C++ is an extension of C
- Heavily incorporated with Unix development
    - Before C, Unix was written in assembly

---

What Is?...
===========
- C is an imperative (procedural) language
- Design to provide low-level access to memory
- Requires minimal run-time support
- Supersedes many applications that previously were in assembly
- Awesome for cross-platform compiling
   - mips, ia64, x86[_64]
- Used in a wide variety of applications, including microcontrollers and supercomputers

---

Basic Syntax
============

- Variables are create by announcing the type, followed by the name, and ended with a semicolon
- So this would create an integer named foo:

	!cpp
    int foo;

- You can assign a value to the variable directly with

	!cpp
    int foo = 100;
    foo = 100;

- Functions are declared by specifying a return type, with arguments in paren's, and the code block in curly braces.

	!cpp
    int main(int argc, char *argv) {
        return 0;
    }

---

Hello World!
============

Some basic C source:

	!cpp
	#include <stdio.h>
	int main(int argc, char *argv[])
    {
		printf("Hello World!\n");
		return 0;
	}

Output:

> Hello World!

Source is included in this repository as hello.c

---

Line By Line
============

	!cpp
    #include <stdio.h>

- Inlclude the standard IO library
- This includes the `printf` function
- Gives you a set of *streams*
    - These streams include:
        - stdin    - input stream
        - stdout   - output stream
        - stderr   - error stream
    - All of these will display or receive input from the terminal
    - printf is a function that utilizes it. (we'll see its use later)

---

The Main Function
=================

	!cpp
    int main(int argc, char *argv[])

- The infamous *main* function
- `int` is a base C data type
    1. At least 16 bits in size, depends on architecture.
- `char` is another base type
    1. Smallest unit of the C data types
- In this case the value returned, of type int, is the exit status
- A return status of EXIT_SUCCESS == 0, is a good thing
    1. A return of > 0 is usually an error

---

Main Function Cont.
===================

	!cpp
    int main(int argc, char *argv[])

- `argc` (Argument count): A guaranteed non-zero number
    - `argv[argc]` is guaranteed to be null
- `argv` (Argument Array): An array of arguments(char arrays) that have been passed to the executable

---

Pointers
========

- See that `char *argv[]`? Think of it as a pointer to a list of arrays.
- Take a deep breath
- Remember that C can directly access values at an address
- The size, or rather the amount of things we are pointing to **doesn't matter**
- As long as you play nice, you won't get a segfault.
- Using this idea, we can point to the start of a series of `char` arrays
- In `int main(int argc, char *argv[])`, the argv is just such a thing
- By getting `argv[0]`, we are retrieving a pointer to the first argument provided to the program

---

Pointers Cont.
==============

So:

	!cpp
    int foo;
    int *bar;
    bar = &foo;

    char *str = "Hello World!";
    char baz = str[0];

- The `&` operator retrieves the address for the variable
- We can **dereference** a pointer, or retrieve it's value by putting an asterisk in front of it

---

Ouput
=====

	!cpp
    printf("Hello World!\n");

- Pretty simple
- The printf function is included in the stdio.h
- printf takes a an array of strings as the first argument

If you passed in str from the previous example, that would be fine:

	!cpp
	printf(str);

---

Returning
=========

	!cpp
    return 0;

- Returning 0 to the caller (the OS)
- By directly returning 0, we're saying it was successful

