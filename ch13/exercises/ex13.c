/*
**	Exercise #13
*/

#include <stdio.h>
#include <string.h>

#define MAX_LEN 80

void build_index_url(const char *domain, char *index_url);

int		main(void)
{
	char index_url[MAX_LEN];

	build_index_url("knking.com", index_url);
	printf("%s\n", index_url);
	return (0);
}

void	build_index_url(const char *domain, char *index_url)
{
	strcpy(index_url, "http://www.");
	strcat(index_url, domain);
	strcat(index_url, "/index.html");
}
