/* Asks user to guess a hidden number */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUMBER 100

/* Prototypes */
void	initialize_number_generator(void);
int		new_secret_number(void);
void	read_guesses(int secret_number);

int 	main(void)
{
	char	command;
	int		secret_number;

	printf("Guess the secret number (it's between 1 and %d): ", MAX_NUMBER);
	initialize_number_generator();
	do
	{
		secret_number = new_secret_number();
		printf("A new number has been chosen.\n");
		read_guesses(secret_number);
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
void	initialize_number_generator(void)
{
	srand((unsigned)time(NULL));
}

/*
**	choose_new_secret_number:
**	Randomly generates a number between 1 and MAX_NUMBER.
*/
int		new_secret_number(void)
{
	return(rand() % MAX_NUMBER + 1);
}

/*
**	read_guesses:
**	Repeatedly reads user guesses while informing her whether each guess is
**	too low, too high or correct. When the guess is correct, prints the total
**	number of guesses and returns.
*/
void	read_guesses(int secret_number)
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
