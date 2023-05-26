#include "main.h"
/**
 * exe_cmd - execute commands
 * @cmds: command to execute
 * @data: input of the user
 * @argv: a list of strings
 * Return: 1 if execution success else 0
 */
int exe_cmd(char **cmds, __attribute__((unused)) char *data, char **argv)
{
	if (*cmds == NULL)
		return (-1);
	if (execve(*cmds, cmds, argv) == -1)
		return (0);
	else
		return (1);
}
