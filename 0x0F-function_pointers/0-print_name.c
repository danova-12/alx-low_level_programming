#include "function_pointers.h"
/**
 * print_name - function thats prints name
 * @name: char to display
 * @f: A pointer function
 * Return: nothing
*/

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f) /* if any is NULL */
		return;

	f(name);
}
/**
 * print - eirii
 * @namee: u3ueu3wswjsnn
 * Return: 4f4r
 */
void print(char *namee)
{
    int i=0;
    while(namee[i]!='\0')
    {
        _putchar(namee[i]);
        i++;
    }


}
