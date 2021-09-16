/*
**	Exercise #16
*/

#include <stdio.h>

#define IDENT(x) PRAGMA(ident #x)
#define PRAGMA(x) _Pragma(#x)

int main(void)
{
	IDENT(foo);	// #pragma ident "foo"
	return 0;
}
