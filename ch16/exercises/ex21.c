/*
** Exercise #21
*/
#include <stdio.h>

int					main(void)
{
	enum {NUL, SOH, STX, ETX};
	enum {VT = 11, FF, CR};
	enum {SO = 14, ST, DLE, CAN = 24, EM};
	enum {ENQ = 45, ACK, BEL, LF = 37, ETB, ESC};

	printf("NUL: %d\n", NUL);
	printf("SOH: %d\n", SOH);
	printf("STX: %d\n", STX);
	printf("ETX: %d\n", ETX);

	printf("\nVT: %d\n", VT);
	printf("FF: %d\n", FF);
	printf("CR: %d\n", CR);

	printf("\nSO: %d\n", SO);
	printf("ST: %d\n", ST);
	printf("DLE: %d\n", DLE);
	printf("CAN: %d\n", CAN);
	printf("EM: %d\n", EM);

	printf("\nENQ: %d\n", ENQ);
	printf("ACK: %d\n", ACK);
	printf("BEL: %d\n", BEL);
	printf("LF: %d\n", LF);
	printf("ETB: %d\n", ETB);
	printf("ESC: %d\n", ESC);

	return (0);
}
