#include "main.h"
/**
 * exe_cmd - execute commands
 * @argc: number of arguments passed to the program
 * @argv: list of arguments passed to the program
 * Return: -1 if cmd NULL, cmd executed success 1, on failure 0
 */
int exe_cmd(char ** cmds, __attribute__((unused)) char *data, char **argv)
{
	if (*cmds == NULL)
		return (-1);
	if (execve(*cmds, cmds, argv) == -1)
		return (0);
	else
		return (1);
}
