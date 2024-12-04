# C - Singly linked lists

## Resources

### Read or watch:

	* Linked Lists
	* Google
	* Youtube

## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General

	* When and why using linked lists vs arrays
	* How to build and use linked lists

## Requirements

### General

	* Allowed editors: vi, vim, emacs
	* All your files will be interpreted/compiled on Ubuntu 20.04 LTS using python3 (version 3.8.5)
	* All your files should end with a new line
	* A README.md file, at the root of the folder of the project is mandatory
	* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
	* You are not allowed to use global variables
	* No more than 5 functions per file
	* The only C standard library functions allowed are malloc, free, printf and exit
	* In the following examples, the main.c files are shown as examples. You can use them to test your functions, 
	  but you don’t have to push them to your repo (if you do we won’t take them into account).
	  We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
	* The prototypes of all your functions should be included in your header file called lists.h
	* Don’t forget to push your header file
	* All your header files should be include guarded

## More Info

Please use this data structure for this project:

~~
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
~~

##Tasks

	0. Print list

	Write a function that prints all the elements of a list_t list.

		* Prototype: size_t print_list(const list_t *h);
		* Return: the number of nodes
		* Format: see example
~~
julien@ubuntu:~/Singly linked lists$ cat 0-main.c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;
    list_t *new;
    list_t hello = {"World", 5, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->str = strdup("Hello");
    new->len = 5;
    new->next = head;
    head = new;
    n = print_list(head);
    printf("-> %lu elements\n", n);

    printf("\n");
    free(new->str);
    new->str = NULL;
    n = print_list(head);
    printf("-> %lu elements\n", n);

    free(new);
    return (0);
}
julien@ubuntu:~/Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_list.c -o a
julien@ubuntu:~/Singly linked lists$ ./a 
[5] Hello
[5] World
-> 2 elements

[0] (nil)
[5] World
-> 2 elements
julien@ubuntu:~/Singly linked lists$ 
~~

####Repo:

	* GitHub repository: holbertonschool-low_level_programming
	* Directory: singly_linked_lists
	* File: 0-print_list.c

