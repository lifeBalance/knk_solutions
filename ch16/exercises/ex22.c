/*
** Exercise #22
*/
#include <stdio.h>

int					main(void)
{
	enum chess_pieces {KING, QUEEN, ROOK, BISHOP, KNIGHT, PAWN};
	const int piece_value[6] = {200, 9, 5, 3, 3, 1};
	const int piece_value2[6] = {
		[KING] = 200,
		[QUEEN] = 9,
		[ROOK] = 5,
		[BISHOP] = 3,
		[KNIGHT] = 3,
		[PAWN] = 1
	};
	printf("%8s: %d\n", "KING", piece_value[KING]);
	printf("%8s: %d\n", "QUEEN", piece_value[QUEEN]);
	printf("%8s: %d\n", "ROOK", piece_value[ROOK]);
	printf("%8s: %d\n", "BISHOP", piece_value[BISHOP]);
	printf("%8s: %d\n", "KNIGHT", piece_value[KNIGHT]);
	printf("%8s: %d\n", "PAWN", piece_value[PAWN]);

	printf("\n%-8s: %3d\n", "KING", piece_value2[0]);
	printf("%-8s: %3d\n", "QUEEN", piece_value2[1]);
	printf("%-8s: %3d\n", "ROOK", piece_value2[2]);
	printf("%-8s: %3d\n", "BISHOP", piece_value2[3]);
	printf("%-8s: %3d\n", "KNIGHT", piece_value2[4]);
	printf("%-8s: %3d\n", "PAWN", piece_value2[5]);
	return (0);
}
