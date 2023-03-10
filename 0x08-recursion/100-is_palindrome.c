#include "main.h"
/**
 * get_length - returns the length of a string
 * @string: the string
 * @size: index to transverse the string
 * Return: length of string
 */
int get_length(char *string, int size)
{
	if (!(string[size]))
		return (0);
	else
		return (1 + get_length(string, size + 1));
}
/**
 * check_palindrome - checks whether a word is a palindrome or not
 * @string: string containing the word
 * @size: size of the string
 * @index: fot transversing string
 * Return: 1 if the string is a palindrome, else 0
 */
int check_palindrome(char *string, int size, int index)
{
	if (size - 1 == 1)
		return (1);
	else if (string[index] == string[size - 1])
		return (check_palindrome(string, size - 1, index + 1));
	else
		return (0);
}
/**
 * is_palindrome -  returns 1 if a string is a palindrome and 0 if not.
 * @s: the string
 * Return: 1 if palindrome, else 0
 */

int is_palindrome(char *s)
{
	int length = 0;
	int i = 0;

	length = get_length(s, length);
	if (length <= 1)
		return (1);
	else
		return (check_palindrome(s, length, i));
}

