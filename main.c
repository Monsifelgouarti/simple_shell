#include "main.h"
/**
 * main - main to the program simple shell
 * @argc: number of arguments passed to the program
 * @argv: list of arguments passed to the program
 * Return: nothing
 */
int main(int argc, char **argv)
{
	char *data = NULL, **cmds = NULL;
	int cond = 1, count = 0;
	size_t len;

	if (argc != 1 || argv[1] != NULL)
		return (0);
	while (cond)
	{
		count++;
		cmds = malloc(sizeof(char *));
		*cmds = malloc(sizeof(char) * 1024);
		if (isatty(STDIN_FILENO))
			printf("$ ");
		getline(cmds, &len, STDIN_FILENO);
		if (strcmp(cmds[0], "\0") == 0)
			continue;
		/**cmds = strtok(data, " ");*/
		if (strcmp(cmds[0], "exit") == 0)
		{
			free(cmds);
			exit(-1);
		}
		else
			exe_cmd(cmds, data, argv);
	free(cmds);
	}
	return (1);
}
