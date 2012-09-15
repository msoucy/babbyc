Basic C
=======

---

History
=======

- Developed by Dennis Ritchie between 1969 and 1973
    1. with Brian Kernigham (K&R C) 
    1. Book: The C Programming Language 
- One of the most widely used languages of all time
- Named C becuase its features were derived from "B" 
    1. "A stripped down verison of BCPL"
- Influenced many languages, most notably c++ 
    1. C++ is an extension of C
- Heavily incorporated with Unix development
    1. Before C, Unix was written in assembly

--- 

What Is?...
===========
- C is an imperative (procedural) language 
- Design to provide low-level access to memory
- Requires minimal run-time support 
- Supersedes many applications that previously were in assembly
- Awesome for cross-platform compiling
   1. mips, ia64, x86[_64]
- Used in a wide variety of applications, including microcontrollers and supercomputers

---

Hello World!
============

Some basic C source: 

	#include <stdio.h> 
	int main(int argc, char *argv[]) 
    {
		printf("Hello World!\n"); 
		return 0;
	}

Output: 
Hello World!

Source included as hello.c

---

Line By Line
============
    #include <stdio.h> 

- Inlclude the standard IO library
- This includes the <code>printf</code> function
- Gives you a set of <i>streams</i>
    1. These streams include: 
        2. stdin    - input stream 
        2. stdout   - output stream
        2. stderr   - error stream
    1. All of these will display or receive input from the terminal 
    1. printf is a function that utilizes it. (well see its use later)

---

The Main Function
=================
    int main(int argc, char *argv[])
