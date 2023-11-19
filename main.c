#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
	int i = 4;
	char c = 'A';
	
	int *pi = &i;
	char *pc = &c;
	
	printf("%i, %i, %c, %c\n", i, *pi, c, *pc);

	return 0;
}
