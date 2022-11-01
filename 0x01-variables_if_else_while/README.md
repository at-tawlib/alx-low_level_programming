# 0x01. C - Variables, if, else, while

### General

-   Allowed editors:  `vi`,  `vim`,  `emacs`
-   All your files will be compiled on Ubuntu 20.04 LTS using  `gcc`, using the options  `-Wall -Werror -Wextra -pedantic -std=gnu89`
-   All your files should end with a new line
-   A  `README.md`  file, at the root of the folder of the project
-   There should be no errors and no warnings during compilation
-   You are not allowed to use  `system`
-   Your code should use the  `Betty`  style. It will be checked using  [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl "betty-style.pl")  and  [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl "betty-doc.pl")

### 0. Positive anything is better than negative nothing
File:  `0-positive_or_negative.c`

This program will assign a random number to the variable  `n`  each time it is executed. Complete the source code in order to print whether the number stored in the variable  `n`  is positive or negative.

-   You can find the source code  [here](https://alx-intranet.hbtn.io/rltoken/rrqNDWjrCWdARnWFLPExPw "here")
-   The variable  `n`  will store a different value every time you will run this program
-   You don’t have to understand what  `rand`,  `srand`,  `RAND_MAX`  do. Please do not touch this code
-   The output of the program should be:
    -   The number, followed by
        -   if the number is greater than 0:  `is positive`
        -   if the number is 0:  `is zero`
        -   if the number is less than 0:  `is negative`
    -   followed by a new line

### 1. The last digit
File:  `1-last_digit.c`
This program will assign a random number to the variable  `n`  each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable  `n`.

-   You can find the source code  [here](https://alx-intranet.hbtn.io/rltoken/5HWhPDsq3jq1yCRQFrLl4Q "here")
-   The variable  `n`  will store a different value every time you run this program
-   You don’t have to understand what  `rand`,  `srand`, and  `RAND_MAX`  do. Please do not touch this code
-   The output of the program should be:
    -   The string  `Last digit of`, followed by
    -   `n`, followed by
    -   the string  `is`, followed by
        -   if the last digit of  `n`  is greater than 5: the string  `and is greater than 5`
        -   if the last digit of  `n`  is 0: the string  `and is 0`
        -   if the last digit of  `n`  is less than 6 and not 0: the string  `and is less than 6 and not 0`
    -   followed by a new line
> $ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-last_digit.c -o 1-last_digit <br>
> $ 
### 2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game
File:  `2-print_alphabet.c`

Write a program that prints the alphabet in lowercase, followed by a new line.

-   You can only use the  `putchar`  function (every other function (`printf`,  `puts`, etc…) is forbidden)
-   All your code should be in the  `main`  function
-   You can only use  `putchar`  twice in your code
> $  gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-print_alphabet.c -o 2-print_alphabet <br>
> $ ./2-print_alphabet 

### 3. alphABET
File:  `3-print_alphabets.c`
Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.

-   You can only use the  `putchar`  function (every other function (`printf`,  `puts`, etc…) is forbidden)
-   All your code should be in the  `main`  function
-   You can only use  `putchar`  three times in your code
> $ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-print_alphabets.c -o 3-print_alphabets <br>
>$ ./3-print_alphabets | cat -e





**4-print_alphabt.c** : prints the alphabet in lowercase, except `q` and `e` using `putchar`

**5-print_numbers.c** : prints all single digit numbers of base 10 starting from `0`

**6-print_numberz.c** : prints all single digit numbers of base 10 starting from `0` using only `putchar` at least twice

**7-print_tebahpla.c** : prints the lowercase alphabet in reverse, using `putchar`

**8-print_base16.c** : prints all the numbers of base 16 in lowercase, using `putchar`

**9-print_comb.c** : prints all possible combinations of single-digit numbers using `putchar`

**100-print_comb3.c** : prints all possible different combinations of two digits with some rules:
-   Numbers must be separated by  `,`, followed by a space
-   The two digits must be different
-   `01`  and  `10`  are considered the same combination of the two digits  `0`  and  `1`
-   Print only the smallest combination of two digits
-   Numbers should be printed in ascending order, with two digits
-   You can only use the  `putchar`  function (every other function (`printf`,  `puts`, etc…) is forbidden)
-   You can only use  `putchar`  five times maximum in your code
-   You are not allowed to use any variable of type  `char`
-   All your code should be in the  `main`  function 

**101-print_comb4.c** : prints all possible different combinations of three digits
-   Numbers must be separated by  `,`, followed by a space
-   The three digits must be different
-   `012`,  `120`,  `102`,  `021`,  `201`,  `210`  are considered the same combination of the three digits  `0`,  `1`  and  `2`
-   Print only the smallest combination of three digits
-   Numbers should be printed in ascending order, with three digits
-   You can only use the  `putchar`  function (every other function (`printf`,  `puts`, etc…) is forbidden)
-   You can only use  `putchar`  six times maximum in your code
-   You are not allowed to use any variable of type  `char`
-   All your code should be in the  `main`  function

**102-print_comb5.c** : prints all possible combinations of two two-digit numbers.
-   The numbers should range from  `0`  to  `99`
-   The two numbers should be separated by a space
-   All numbers should be printed with two digits.  `1`  should be printed as  `01`
-   The combination of numbers must be separated by comma, followed by a space
-   The combinations of numbers should be printed in ascending order
-   `00 01`  and  `01 00`  are considered as the same combination of the numbers  `0`  and  `1`
-   You can only use the  `putchar`  function (every other function (`printf`,  `puts`, etc…) is forbidden)
-   You can only use  `putchar`  eight times maximum in your code
-   You are not allowed to use any variable of type  `char`
-   All your code should be in the  `main`  function
