
#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
*_strlen_recursion - returns
*@s: number
*Return: the natural
*/

int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + _strlen_recursion(s + 1));
}


/**
*comparator - compares
*@s: number to calculate
*@n1: iterate number
*@n2: biggest
*Return: the natural
*/


int comparator(char *s, int n1, int n2)
{
if (*(s + n1) == *(s + n2))
{
if (n1 == n2 || n1 == n2 + 1)
return (1);
return (0 + comparator(s, n1 + 1, n2 - 1));
}
return (0);
}

/**
*is_palindrome - detecs
*@s: number to calculate
*Return: the natural
*/

int is_palindrome(char *s)
{
if (*s == '\0')
return (1);
return (comparator(s, 0, _strlen_recursion(s) - 1));
}
