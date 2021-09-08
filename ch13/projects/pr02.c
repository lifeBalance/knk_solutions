/*
** Project 02
*/

#include <stdio.h>
#include <string.h>

#define MAX_REMIND	50	/* Maximum number of reminders */
#define MSG_LEN		60	/* Maximum length of reminder message */

int		read_line(char str[], int n);

int		main(void)
{
	char	reminders[MAX_REMIND][MSG_LEN + 1];
	char	date_str[6];
	char	time_str[6];
	char	msg_str[MSG_LEN + 1];
	int		num_remind;
	int		month;
	int		day;
	int		hour;
	int		min;
	int		i;
	int		j;

	num_remind = 0;
	while (1)
	{
		if (num_remind == MAX_REMIND)
		{
			printf("-- No space left --\n");
			break;
		}
		printf("Enter month/day, time (24-hour), and reminder: ");
		scanf("%2d/%2d %2d:%2d", &month, &day, &hour, &min);
		if (day == 0)
			break;
		else if (day < 0 || day > 31)
		{
			printf("Day can't be negative!");
			continue;
		}
		sprintf(date_str, "%2d/%.2d", month, day);
		sprintf(time_str, "%2d:%.2d", hour, min);
		read_line(msg_str, MSG_LEN);
		for (i = 0; i < num_remind; i++)
		{
			if (strcmp(date_str, reminders[i]) < 0)
				break;
			else if (strcmp(date_str, reminders[i]) == 0)
				if (strcmp(time_str, reminders[i] + 6) < 0)
					break;
		}
		for (j = num_remind; j > i; j--)
			strcpy(reminders[j], reminders[j - 1]);
		strcpy(reminders[i], date_str);
		strcat(reminders[i], " ");
		strcat(reminders[i], time_str);
		strcat(reminders[i], msg_str);
		num_remind++;
	}
	printf("\nDay Reminder\n");
	for (i = 0; i < num_remind; i++)
		printf("%s\n", reminders[i]);
	return (0);
}

int		read_line(char str[], int n)
{
	int ch;
	int i = 0;

	while ((ch = getchar()) != '\n')
	{
		if (i < n)
			str[i++] = ch;
	}
	str[i] = '\0';
	return (i);
}
