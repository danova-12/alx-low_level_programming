#include "main.h"
/**
 * str_concat - function concatnates two strings
 * @s1: first string pointer
 * @s2: second string pointer
 *
 * Return: pointer to new malloc
 */
char *str_concat(char *s1, char *s2)
{
	int l1 = size1(s1);
	int l2 = size2(s2);
	int total = l1 + l2 + 2;
	int i = 0, j = 0;
	char *str = malloc(sizeof(char) * total);

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		while (i < l1)
		{
			str[i] = s1[i];
			i++;
		}
		while (l1 < total && s2[j] != '\0')
		{
			str[l1] = s2[j];
			l1++;
			j++;
		}
	}
	str[total] = '\0';
	return (str);
}
/**
 * size1 - compute length of s1
 * @p1: parameter accept pointer
 *
 * Return: length of first
 */
int size1(char *p1)
{
	int i = 0;

	while (p1[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * size2 - computes length of s2
 * @p2: second pointer
 *
 * Return: length of s2
 */
int size2(char *p2)
{
	int i = 0;

	while (p2[i] != '\0')
	{
		i++;
	}
	return (i);
}










