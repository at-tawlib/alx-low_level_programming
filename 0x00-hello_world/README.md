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
> $ export CFILE=main.c <br>
> $ ./0-preprocessor <br>
> $ tail c <br>

### 1.Compiler


**0-preprocessor** - runs a C file through the preprocessor and save the result into another file

**1-compiler** : :compiles a C file but does not link.

**100-intel** : generates the assembly code (Intel syntax) of a C code and save it in an output file

**101-quote.c** : C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error

**2-assembler** : :generates the assembly code of a C code and save it in an output file

**3-name** : compiles a C file and creates an executable named cisfun

**4-puts.c** : C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line

**5-printf.c** : C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line

**6-size.c** : C program that prints the size of various types on the computer it is compiled and run on
