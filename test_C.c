#include <stdio.h>

int main(void)
{
	int i = 6;
	int* p;
	p = &i;
	printf("i = %d\n", i);
	printf("pµÄµØÖ·Îª£º%#x", p);
}