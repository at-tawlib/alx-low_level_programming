# 0x1A. C - Hash tables
**[hash_tables.h](hash_tables.h)** : Header files

## [0-hash_table_create.c](0-hash_table_create.c), [0-main.c](0-main.c)
has a function that creates a hash table.
```
julien@ubuntu:~/0x1A. Hash tables$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-hash_table_create.c -o a
julien@ubuntu:~/0x1A. Hash tables$ ./a 
0x238a010
julien@ubuntu:~/0x1A. Hash tables$ valgrind ./a
==7602== Memcheck, a memory error detector
==7602== Copyright (C) 2002-2013, and GNU GPL'd, by Julian Seward et al.
==7602== Using Valgrind-3.10.1 and LibVEX; rerun with -h for copyright info
==7602== Command: ./a
==7602== 
0x51fc040
==7602== 
==7602== HEAP SUMMARY:
==7602==     in use at exit: 8,208 bytes in 2 blocks
==7602==   total heap usage: 2 allocs, 0 frees, 8,208 bytes allocated
==7602== 
==7602== LEAK SUMMARY:
==7602==    definitely lost: 16 bytes in 1 blocks
==7602==    indirectly lost: 8,192 bytes in 1 blocks
==7602==      possibly lost: 0 bytes in 0 blocks
==7602==    still reachable: 0 bytes in 0 blocks
==7602==         suppressed: 0 bytes in 0 blocks
==7602== Rerun with --leak-check=full to see details of leaked memory
==7602== 
==7602== For counts of detected and suppressed errors, rerun with: -v
==7602== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/0x1A. Hash tables$
```

## [1-djb2.c](1-djb2.c), [1-main.c](1-main.c)
has a hash function implementing the [djb2 algorithm](https://intranet.alxswe.com/rltoken/3B7lCUBD4yZh66Pbl2KcEQ).

```
julien@ubuntu:~/0x1A. Hash tables$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-djb2.c -o b
julien@ubuntu:~/0x1A. Hash tables$ ./b 
6953392314605
3749890792216096085
5861846
julien@ubuntu:~/0x1A. Hash tables$ 
```


## [2-key_index.c](2-key_index.c), [2-main.c](2-main.c)
has a function that gives you the index of a key.
```
julien@ubuntu:~/0x1A. Hash tables$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 1-djb2.c 2-key_index.c -o c
julien@ubuntu:~/0x1A. Hash tables$ ./c 
6953392314605
237
3749890792216096085
341
5861846
470
julien@ubuntu:~/0x1A. Hash tables$ 
```

## [3-hash_table_set.c](3-hash_table_set.c), [3-main.c](3-main.c)
has a function that adds an element to the hash table.
```
julien@ubuntu:~/0x1A. Hash tables$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c -o d
julien@ubuntu:~/0x1A. Hash tables$
```

## [4-hash_table_get.c](4-hash_table_get.c), [4-main.c](4-main.c)
has a function that retrieves a value associated with a key.
```
julien@ubuntu:~/0x1A. Hash tables$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c 4-hash_table_get.c -o e
julien@ubuntu:~/0x1A. Hash tables$ ./e 
python:awesome
Bob:and Kris love asm
N:queens
Asterix:Obelix
Betty:Cool
98:Battery Street
c:isfun
javascript:(null)
julien@ubuntu:~/0x1A. Hash tables$ 

> Written with [StackEdit](https://stackedit.io/).
