/*
**	Programming project #3
*/

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

/* Global Variables */
int		hand[NUM_CARDS][2];
bool	straight;
bool	flush;
bool	four;
bool	three;
int		pairs;

/* Prototypes */
void	read_cards(void);
void	analyze_hand(void);
void	print_result(void);
void	selection_sort(int n);
bool	duplicate_card(int rank, int suit, int cards_read);

int		main(void)
{
	while(1)
	{
		read_cards();
		analyze_hand();
		print_result();
	}
	return (0);
}

/*
**	read_cards:
**	Reads cards into the global variables (num_in_rank and num_in_suit),
**	checking for bad cards and duplicates.
*/
void	read_cards(void)
{
	bool	bad_card;
	char	rank_ch;
	char	suit_ch;
	char	ch;
	int		rank;
	int		suit;
	int		cards_read = 0;

	while (cards_read < NUM_CARDS)
	{
		bad_card = false;
		printf("Enter a card: ");
		rank_ch = getchar();
		switch (rank_ch)
		{
			case '0':
				exit(EXIT_SUCCESS);
				break;
			case '2':
				rank = 0;
				break;
			case '3':
				rank = 1;
				break;
			case '4':
				rank = 2;
				break;
			case '5':
				rank = 3;
				break;
			case '6':
				rank = 4;
				break;
			case '7':
				rank = 5;
				break;
			case '8':
				rank = 6;
				break;
			case '9':
				rank = 7;
				break;
			case 't':
			case 'T':
				rank = 8;
				break;
			case 'j':
			case 'J':
				rank = 9;
				break;
			case 'q':
			case 'Q':
				rank = 10;
				break;
			case 'k':
			case 'K':
				rank = 11;
				break;
			case 'a':
			case 'A':
				rank = 12;
				break;
			default:
				bad_card = true;
		}
		suit_ch = getchar();
		switch (suit_ch)
		{
			case 'c':
			case 'C':
				suit = 0;
				break;
			case 'd':
			case 'D':
				suit = 1;
				break;
			case 'h':
			case 'H':
				suit = 2;
				break;
			case 's':
			case 'S':
				suit = 3;
				break;
			default:
				bad_card = true;
		}
		while ((ch = getchar()) != '\n')
			if (ch != ' ')
				bad_card = true;
		if (bad_card)
			printf("Bad card; ignored.\n");
		else if (duplicate_card(rank, suit, cards_read))
			printf("Duplicate card; ignored.\n");
		else
		{
			hand[cards_read][0] = rank;
			hand[cards_read][1] = suit;
			cards_read++;
		}
	}
}

/*
**	analyze_hand:
**	Determines whether the hand contains a straight, a flush, four-of-a-kind,
**	and/or three-of-a-kind; determines the number of pairs; stores the result
**	into the external variables: straight, flush, four, three and pairs.
*/
void	analyze_hand(void)
{
	int same_rank;
	int i;
	int j;

	straight = false;
	flush = false;
	four = false;
	three = false;
	pairs = 0;

	/* Check for flush */
	for (i = 0; i < NUM_SUITS; i++)
		if (hand[0][1] != hand[i][1])
			break;
	if (i == NUM_SUITS)
		flush = true;

	/* Check for straight */
	selection_sort(NUM_CARDS);
	i = 1;
	while (i < NUM_CARDS)
	{
		if (hand[i - 1][0] != hand[i][0] - 1)
			break;
		i++;
	}
	if (i == NUM_CARDS)
		straight = true;

	/* Check for four-of-a-kind, three-of-a-kind, and pairs. */
	i = 0;
	while (i < NUM_CARDS)
	{
		same_rank = 0;
		j = i + 1;
		while (j < NUM_CARDS)
		{
			if (hand[i][0] == hand[j][0])
				same_rank++;
			j++;
		}
		if (same_rank == 1)
			pairs++;
		if (same_rank == 2)
			three = true;
		if (same_rank == 3)
			four = true;
		i++;
	}
}

/*
**	print_result:
**	Prints the classification of the hand, based on the values of the external
**	variables straight, flush, four, three, and pairs.
*/
void	print_result(void)
{
	if (straight && flush)
		printf("Straight flush");
	else if (four)
		printf("Four of a kind");
	else if (three && pairs == 1)
		printf("Full house");
	else if (flush)
		printf("Flush");
	else if (straight)
		printf("Straight");
	else if (three)
		printf("Three of a kind");
	else if (pairs == 2)
		printf("Two pairs");
	else if (pairs == 1)
		printf("Pair");
	else
		printf("High card");
	printf("\n\n");
}

void	selection_sort(int n)
{
	int i;
	int temp_rank;
	int temp_suit;

	if (n == 0)
		return;
	i = 0;
	while (i < n)
	{
		if (hand[i][0] > hand[n - 1][0])
		{
			temp_rank = hand[i][0];
			temp_suit = hand[i][1];
			hand[i][0] = hand[n - 1][0];
			hand[i][1] = hand[n - 1][1];
			hand[n - 1][0] = temp_rank;
			hand[n - 1][1] = temp_suit;
		}
		i++;
	}
	selection_sort(n - 1);
}

bool	duplicate_card(int rank, int suit, int cards_read)
{
	int i;

	i = 0;
	while (i < cards_read)
	{
		if (hand[i][0] == rank && hand[i][1] == suit)
			return (true);
		i++;
	}	
	return (false);
}
