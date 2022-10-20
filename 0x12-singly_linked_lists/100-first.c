#include <stdio.h>
/**
 * b - prints from init by the loader before main
 * **/
void b(void) __attribute__((constructor));
void b(void)
{
	printf("You are beat! and yet, you must allow, \n");
	printf("I bore my house upon my back!\n");
}
