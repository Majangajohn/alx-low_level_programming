#include <stdio.h>
#define MYFILE __FILE__
/**
 *main - prints the name of the file
 *
 *Return: always 0
*/

int main(void)
{
	printf("%s\n", MYFILE);
	return (0);
}
