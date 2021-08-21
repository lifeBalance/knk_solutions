/*
**	Programming project #8
*/

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

#define LOWER 1
#define UPPER 6

int		roll_dice(void);
bool	play_game(void);

int		main(void)
{
	int		wins;
	int		loses;
	char	again;

	wins = 0;
	loses = 0;
	srand((unsigned)time(NULL));
	do
	{
		again = 'n';
		play_game() ? wins++ : loses++;
		printf("Play again? ");
		scanf(" %c", &again);
		while (getchar() != '\n')
			continue;
		printf("\n");
	} while (tolower(again) == 'y');
	printf("Wins: %d Losses: %d\n", wins, loses);
	return (0);
}

int		roll_dice(void)
{
	int die1;
	int die2;

	die1 = (rand() % (UPPER - LOWER + 1)) + LOWER;
	die2 = (rand() % (UPPER - LOWER + 1)) + LOWER;
	// printf("die1: %d, die2: %d\n", die1, die2);
	return (die1 + die2);
}

bool	play_game(void)
{
	int		roll;
	int		point;
	bool	won;

	roll = roll_dice();
	printf("You rolled: %d\n", roll);
	if (roll == 7 || roll == 11)
		won = true;
	else if (roll == 2 || roll == 3 || roll == 12)
		won = false;
	else
	{
		point = roll;
		printf("Your point is %d\n", point);
		roll = roll_dice();
		while (roll != point && roll != 7)
		{
			printf("You rolled: %d\n", roll);
			roll = roll_dice();
			continue;
		}
		printf("You rolled: %d\n", roll);
		if (roll == point)
			won = true;
		else
			won = false;
	}
	if (won)
	{
		printf("You win!\n\n");
		return (true);
	}
	else
	{
		printf("You lose!\n\n");
		return (false);
	}
}
