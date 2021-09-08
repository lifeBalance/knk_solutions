/*
**	Exercise #17
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

bool test_extension(const char *file_name, const char *extension);

int main(void)
{
	if (test_extension("note.txt", "TXT"))
		printf("%s has the %s extension\n", "note.txt", "TXT");
	else
		printf("%s has not the %s extension\n", "note.txt", "TXT");
	return (0);
}

bool test_extension(const char *file_name, const char *extension)
{
	const char *ptr;

	ptr = &file_name[strlen(file_name) - 3];
	while (ptr <= file_name + strlen(file_name) - 1)
	{
		if (*ptr != tolower(*extension))
			return (false);
		ptr++;
		extension++;
	}
	return (true);
}
