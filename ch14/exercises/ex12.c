/*
**	Exercise #10
*/

#include <stdio.h>

#define M 10

int main(void)
{
	#if M
		printf("(a) Success!\n");
	#else
		printf("(a) Fail!\n");
	#endif

	#ifdef M
		printf("(b) Success!\n");
	#else
		printf("(b) Fail!\n");
	#endif

	#ifndef M
		printf("(c) Success!\n");
	#else
		printf("(c) Fail!\n");
	#endif

	#if defined(M)
		printf("(d) Success!\n");
	#else
		printf("(d) Fail!\n");
	#endif

	#if !defined(M)
		printf("(d) Success!\n");
	#else
		printf("(d) Fail!\n");
	#endif
	return (0);
}
