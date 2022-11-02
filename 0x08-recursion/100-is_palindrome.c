#include "main.h"

/**
 * _strlen_recursion - counts length of string
 * @s: the string
 * Return: the length
 */
int _strlen_recursion(char *s)
{
	int count = 0;
	if (*s)
	{
		count += _strlen_recursion(s + 1);
		count ++;
	}
	return (count);
}
/**
 * pal - helper function
 * @s: the string
 * @a: start of s
 * @b: end of s
 * Return: same as other function
 */
int pal(char *s, int a, int b)
{
	if (a == b)
		return (1);
	if (s[a] != s[b])
		return (0);
	if (a < b + 1)
		return pal(s, a + 1, b - 1); 
	return (1);
}
/**
 * is_palindrome - tells if string is a palindrome
 * @s: the string
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int count;

	if (*s == '\0')
		return (1);
	count = _strlen_recursion(s);
	return (pal(s, 0, count - 1));

}
