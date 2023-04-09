#include "main.h"

/**
 *_strstr - locates a substring
 *@haystack: the string
 *@needle: the substring
 *
 *Return: *ptr to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *j = needle;

		while (*l == *j && *j != '\0')
		{
			l++;
			j++;
		}

		if (*j == '\0')
			return (haystack);
	}

	return (0);
}
