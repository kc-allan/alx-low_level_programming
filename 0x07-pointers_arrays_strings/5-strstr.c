#include "main.h"
/**
 * _strstr - locates a substring
 * @needle: substring
 * @haystack: initial string
 * Return: pointer to substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i, k;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (k = 0; needle[k] != '\0' && (haystack[i] == needle[k]);)
		{
			if (haystack[i] == needle[k])
			{
				needle = &haystack[i];
				return (needle);
			}
			k++;
		}
	}
	return (0);
}
