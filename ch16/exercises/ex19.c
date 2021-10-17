/*
** Exercise #19
*/
#include <stdio.h>

int					main(void)
{
	struct pinball_machine {
		char name[40];
		int year;
		enum {EM, SS} type;
		int players;
	};

	struct pinball_machine pb1 = {
		"Dungeons & dragons",
		1987,
		EM,
		2
	};
	printf("Name: %s\n", pb1.name);
	printf("Year: %d\n", pb1.year);
	printf("Type: %s\n", (pb1.type) ? "SS" : "EM");
	printf("Players: %d\n", pb1.players);
	return (0);
}
