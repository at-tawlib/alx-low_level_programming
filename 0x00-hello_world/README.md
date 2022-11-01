# 0x00-hello_world

## Requirements

### C

-   Allowed editors:  `vi`,  `vim`,  `emacs`
-   All your files will be compiled on Ubuntu 20.04 LTS using  `gcc`, using the options  `-Wall -Werror -Wextra -pedantic -std=gnu89`
-   All your files should end with a new line
-   A  `README.md`  file at the root of the repo, containing a description of the repository
-   A  `README.md`  file, at the root of the folder of  _this_  project, containing a description of the project
-   There should be no errors and no warnings during compilation
-   You are not allowed to use  `system`
-   Your code should use the  `Betty`  style. It will be checked using  [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl "betty-style.pl")  and  [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl "betty-doc.pl")

### Shell Scripts

-   Allowed editors:  `vi`,  `vim`,  `emacs`
-   All your scripts will be tested on Ubuntu 20.04 LTS
-   All your scripts should be exactly two lines long (`$ wc -l file`  should print 2)
-   All your files should end with a new line
-   The first line of all your files should be exactly  `#!/bin/bash`

## Tasks
### O.Preprocessor

Write a script that runs a C file through the preprocessor and save the result into another file.

-   The C file name will be saved in the variable  `$CFILE`
-   The output should be saved in the file  `c`
-  Run:
> $ export CFILE=main.c <br>
> $ ./0-preprocessor <br>
> $ tail c <br>

### 1.Compiler
Write a script that compiles a C file but does not link.

-   The C file name will be saved in the variable  `$CFILE`
-   The output file should be named the same as the C file, but with the extension  `.o`  instead of  `.c`.
    -   Example: if the C file is  `main.c`, the output file should be  `main.o`
-  Run:
>$ ./1-compiler <br>
>$ cat -v main.o | head

## 2. Assembler
Write a script that generates the assembly code of a C code and save it in an output file.

-   The C file name will be saved in the variable  `$CFILE`
-   The output file should be named the same as the C file, but with the extension  `.s`  instead of  `.c`.
    -   Example: if the C file is  `main.c`, the output file should be  `main.s`
- Run:
> $ ./2-assembler <br>
> $ cat main.s

### 3. Name
Write a script that compiles a C file and creates an executable named  `cisfun`.

-   The C file name will be saved in the variable  `$CFILE`
-   run:
> $  ./3-name

### 4. Hello, puts
Write a C program that prints exactly  `"Programming is like building a multilingual puzzle`, followed by a new line.

-   Use the function  `puts`
-   You are not allowed to use  `printf`
-   Your program should end with the value  `0`
-  run:
> $  gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-puts.c && ./a.out

### 5. Hello, printf
Write a C program that prints exactly  `with proper grammar, but the outcome is a piece of art,`, followed by a new line.

-   Use the function  `printf`
-   You are not allowed to use the function  `puts`
-   Your program should return  `0`
-   Your program should compile without warning when using the  `-Wall`  `gcc`  option
-  run:
- ```
> $ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 5-printf.c <br>
> $ ./a.out 

### 6. Size is not grandeur, and territory does not make a nation
Write a C program that prints the size of various types on the computer it is compiled and run on.

-   You should produce the exact same output as in the example
-   Warnings are allowed
-   Your program should return  `0`
-   You might have to install the package  `libc6-dev-i386`  on your Linux to test the  `-m32`  `gcc`  option
- run:
> $ gcc 6-size.c -m32 -o size32 2> /tmp/32 <br>
> $ gcc 6-size.c -m64 -o size64 2> /tmp/64 <br>
> $ ./size32
> $ ./size64


## Advance

### 7. Intel (100-intel)
Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.

-   The C file name will be saved in the variable  `$CFILE`.
-   The output file should be named the same as the C file, but with the extension  `.s`  instead of  `.c`.
    -   Example: if the C file is  `main.c`, the output file should be  `main.s`

> $ export CFILE=main.c <br>
> $ ./100-intel

### 8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity
-   File:  `101-quote.c`
Write a C program that prints exactly  `and that piece of art is useful" - Dora Korpar, 2015-10-19`, followed by a new line, to the standard error.

-   You are not allowed to use any functions listed in the NAME section of the man (3)  `printf`  or man (3)  `puts`
-   Your program should return 1
-   Your program should compile without any warnings when using the  `-Wall`  `gcc`  option

> $ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -o quote 101-quote.c <br>
> $  ./quote
