/* Asks user to guess a hidden number */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUMBER 100

/* Global Variable */
int secret_number;

/* Prototypes */
void initialize_number_generator(void);
void choose_new_secret_number(void);
void read_guesses(void);

int main(void)
{
	char command;

	printf("Guess the secret number (it's between 1 and %d): ", MAX_NUMBER);
	initialize_number_generator();
	do
	{
		choose_new_secret_number();
		printf("A new number has been chosen.\n");
		read_guesses();
		printf("Play Again? (y/n) ");
		scanf(" %c", &command);
		printf("\n");
	} while (command == 'Y' || command == 'y');
	return (0);
}

/*
**	initialize_number_generator:
**	Initialize the random number generator based on the time of the day.
*/
void initialize_number_generator(void)
{
	srand((unsigned)time(NULL));
}

/*
**	choose_new_secret_number:
**	Randomly generates a number between 1 and MAX_NUMBER.
*/
void choose_new_secret_number(void)
{
	secret_number = rand() % MAX_NUMBER + 1;
}

/*
**	read_guesses:
**	Repeatedly reads user guesses while informing her whether each guess is
**	too low, too high or correct. When the guess is correct, prints the total
**	number of guesses and returns.
*/
void read_guesses(void)
{
	int guess;
	int num_guesses;

	num_guesses = 0;
	while (1)
	{
		num_guesses++;
		printf("Enter guess: ");
		scanf("%d", &guess);
		if (guess == secret_number)
		{
			printf("You won!\n");
			return;
		} else if (guess < secret_number)
			printf("Too low try again!\n");
		else
			printf("Too high try again!\n");
	}
}
