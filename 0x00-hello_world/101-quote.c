#include <stdio.h>
/**
 * main - starting point
 *
 * Return 1 always
 */
int write(int filedes, const char *buf, unsigned int nbyte);
int main(void)
{
	char *s;

	s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, s, 59);
	return (1);
}
