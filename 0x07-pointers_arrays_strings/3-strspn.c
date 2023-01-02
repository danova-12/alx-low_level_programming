#include "main.h"
/**
* _strspn - return length of string that matches
* @s: string to search
* @accept: target matches
* Return: bytes
*/

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;
	int mat = 0;

	while (s[i] != '\0') /*iterate through string*/
	{

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				mat++;
				break;
			}

			if (accept[j + 1] == '\0' && s[i] != accept[j])

			return (mat);
		}

		i++;
	}

	return (matches);

}
