# 0x17. C - Doubly linked lists
## `0-print_dlistint.c` , `0-main.c`
has a function that prints all the elements of a  `dlistint_t`  list.
-   Prototype:  `size_t print_dlistint(const dlistint_t *h);`
-   Return: the number of nodes
```
julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_dlistint.c -o a
julien@ubuntu:~/0x17. Doubly linked lists$ ./a 
9
8
-> 2 elements
julien@ubuntu:~/0x17. Doubly linked lists$ 
```

##  `1-dlistint_len.c` , `1-main.c`
has a function that returns the number of elements in a linked  `dlistint_t`  list.
-   Prototype:  `size_t dlistint_len(const dlistint_t *h);`
```
julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-dlistint_len.c -o b
julien@ubuntu:~/0x17. Doubly linked lists$ ./b 
-> 2 elements
julien@ubuntu:~/0x17. Doubly linked lists$ 
```
## `2-add_dnodeint.c` , `2-main.c`
has a function that adds a new node at the beginning of a  `dlistint_t`  list.
-   Prototype:  `dlistint_t *add_dnodeint(dlistint_t **head, const int n);`
-   Return: the address of the new element, or  `NULL`  if it failed
```
julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-add_dnodeint.c 0-print_dlistint.c -o c
julien@ubuntu:~/0x17. Doubly linked lists$ ./c 
1024
402
98
4
3
2
1
0
julien@ubuntu:~/0x17. Doubly linked lists$ 
```

## `3-add_dnodeint_end.c` , `3-main.c`
has a function that adds a new node at the end of a  `dlistint_t`  list.
-   Prototype:  `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);`
-   Return: the address of the new element, or  `NULL`  if it failed
```
julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-add_dnodeint_end.c 0-print_dlistint.c -o d
julien@ubuntu:~/0x17. Doubly linked lists$ ./d 
0
1
2
3
4
98
402
1024
julien@ubuntu:~/0x17. Doubly linked lists$ 
```

## `4-free_dlistint.c` , `4-main.c`
has a function that frees a  `dlistint_t`  list.
-   Prototype:  `void free_dlistint(dlistint_t *head);`
```
julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c -o e
julien@ubuntu:~/0x17. Doubly linked lists$ valgrind ./e 
==4197== Memcheck, a memory error detector
==4197== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==4197== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==4197== Command: ./e
==4197== 
0
1
2
3
4
98
402
1024
==4197== 
==4197== HEAP SUMMARY:
==4197==     in use at exit: 0 bytes in 0 blocks
==4197==   total heap usage: 9 allocs, 9 frees, 1,216 bytes allocated
==4197== 
==4197== All heap blocks were freed -- no leaks are possible
==4197== 
==4197== For counts of detected and suppressed errors, rerun with: -v
==4197== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/0x17. Doubly linked lists$ 
```
## `5-get_dnodeint.c` , `5-main.c`
has a function that returns the nth node of a  `dlistint_t`  linked list.
-   Prototype:  `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);`
-   where  `index`  is the index of the node, starting from  `0`
-   if the node does not exist, return  `NULL`
```
julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c 5-get_dnodeint.c -o h
julien@ubuntu:~/0x17. Doubly linked lists$ ./h
0
1
2
3
4
98
402
1024
98
julien@ubuntu:~/0x17. Doubly linked lists$ 
```

## `6-sum_dlistint.c` , `6-main.c`

has a function that returns the sum of all the data (n) of a  `dlistint_t`  linked list.
-   Prototype:  `int sum_dlistint(dlistint_t *head);`
-   if the list is empty, return  `0`
```
julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra 6-main.c -std=gnu89 3-add_dnodeint_end.c 4-free_dlistint.c 6-sum_dlistint.c -o i
julien@ubuntu:~/0x17. Doubly linked lists$ ./i 
sum = 1534
julien@ubuntu:~/0x17. Doubly linked lists$ 
```
## `7-insert_dnodeint.c` , `7-main.c`
has a function that inserts a new node at a given position.
-   Prototype:  `dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);`
-   where  `idx`  is the index of the list where the new node should be added. Index starts at  `0`
-   Returns: the address of the new node, or  `NULL`  if it failed
-   if it is not possible to add the new node at index  `idx`, do not add the new node and return  `NULL`
```
julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-main.c 2-add_dnodeint.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c 7-insert_dnodeint.c -o j
julien@ubuntu:~/0x17. Doubly linked lists$ ./j 
0
1
2
3
4
98
402
1024
-----------------
0
1
2
3
4
4096
98
402
1024
julien@ubuntu:~/0x17. Doubly linked lists$
```

## `8-delete_dnodeint.c` , `8-main.c`
a function that deletes the node at index  `index`  of a  `dlistint_t`  linked list.
-   Prototype:  `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);`
-   where  `index`  is the index of the node that should be deleted. Index starts at  `0`
-   Returns:  `1`  if it succeeded,  `-1`  if it failed
```
julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c 8-delete_dnodeint.c -o k
julien@ubuntu:~/0x17. Doubly linked lists$ ./k
0
1
2
3
4
98
402
1024
-----------------
0
1
2
3
4
402
1024
-----------------
1
2
3
4
402
1024
-----------------
2
3
4
402
1024
-----------------
3
4
402
1024
-----------------
4
402
1024
-----------------
402
1024
-----------------
1024
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
julien@ubuntu:~/0x17. Doubly linked lists$ 
```
> Written with [StackEdit](https://stackedit.io/).
