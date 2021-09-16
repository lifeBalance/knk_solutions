/*
**	Exercise #15
*/

#include <stdio.h>

#define ENGLISH
// #define FRENCH
// #define SPANISH

#ifdef ENGLISH
# define INSERT_DISK "Insert Disk"
#elif defined(FRENCH)
# define INSERT_DISK "Inserez Le Disque 1"
#elif defined(SPANISH)
# define INSERT_DISK "Inserte El Disco 1"
#endif

int main(void)
{
	printf("%s\n", INSERT_DISK);
	return 0;
}
