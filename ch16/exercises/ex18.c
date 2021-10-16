/*
** Exercise #18
*/
#include <stdio.h>

int					main(void)
{
	typedef enum {EMPTY, PAWN, KNIGHT, BISHOP, ROOK, QUEEN, KING} Piece;
	typedef enum {BLACK, WHITE} Color;
	typedef struct {
		Piece p;
		Color c;
	} Square;

	Square board[8][8] = {
		[0][0] = {ROOK, WHITE},
		[0][1] = {KNIGHT, WHITE},
		[0][2] = {BISHOP, WHITE},
		[0][3] = {QUEEN, WHITE},
		[0][4] = {KING, WHITE},
		[0][5] = {BISHOP, WHITE},
		[0][6] = {KNIGHT, WHITE},
		[0][7] = {ROOK, WHITE},
		[1][0] = {PAWN, WHITE},
		[1][1] = {PAWN, WHITE},
		[1][2] = {PAWN, WHITE},
		[1][3] = {PAWN, WHITE},
		[1][4] = {PAWN, WHITE},
		[1][5] = {PAWN, WHITE},
		[1][6] = {PAWN, WHITE},
		[1][7] = {PAWN, WHITE},
		[6][0] = {PAWN, BLACK},
		[6][1] = {PAWN, BLACK},
		[6][2] = {PAWN, BLACK},
		[6][3] = {PAWN, BLACK},
		[6][4] = {PAWN, BLACK},
		[6][5] = {PAWN, BLACK},
		[6][6] = {PAWN, BLACK},
		[6][7] = {PAWN, BLACK},
		[7][0] = {ROOK, WHITE},
		[7][1] = {KNIGHT, WHITE},
		[7][2] = {BISHOP, WHITE},
		[7][3] = {KING, WHITE},
		[7][4] = {QUEEN, WHITE},
		[7][5] = {BISHOP, WHITE},
		[7][6] = {KNIGHT, WHITE},
		[7][7] = {ROOK, WHITE},
	};
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (board[i][j].p == EMPTY)
				printf("*");
			else
				printf("%d", board[i][j].p);
		}
		putchar('\n');
	}
	return (0);
}
