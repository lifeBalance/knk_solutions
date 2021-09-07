/*
**	Exercise #12
*/

#include <stdio.h>
#include <string.h>

void		get_extension(const char *file_name, char *extension);

int		main(void)
{
	char ext[4];

	get_extension("notes.txt", ext);
	if (strcmp(ext, "") != 0)
		printf("%s, extension: %s\n", "notes.txt", ext);
	else
		printf("%s has no extension!\n", "notes.txt");

	get_extension("holidays.jpg", ext);
	if (strcmp(ext, "") != 0)
		printf("%s, extension: %s\n", "holidays.jpg", ext);
	else
		printf("%s has no extension!\n", "holidays.jpg");

	get_extension("a_file_with_no_extension", ext);
	if (strcmp(ext, "") != 0)
		printf("%s, extension: %s\n", "a_file_with_no_extension", ext);
	else
		printf("%s has no extension!\n", "a_file_with_no_extension");
	return (0);
}

void		get_extension(const char *file_name, char *extension)
{
	int i = 0;
	while (file_name[i])
	{
		if (file_name[i] == '.')
			break;
		i++;
	}
	if (file_name[i] == '.')
		strcpy(extension, file_name + i + 1);
	else
		strcpy(extension, "");
}
