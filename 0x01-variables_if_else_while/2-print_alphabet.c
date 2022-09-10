#include <stdio.h>

/**
 * main - print alphabet in lower case
 * followed by a new line
 * return: always (0) success 
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
        putchar('\n');
	return (0);
}			
