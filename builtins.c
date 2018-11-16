#include "sash.h"

/**
 *
 */

int run_builtin(char **tokenarr)
{
	int index = 0;
	builtin_t cmds[] = {
		{"exit", exit_sash}, {"env", _env}, {"cd", _chdir}, {NULL, NULL}
	};

	while (cmds[index].cmd)
	{
		if (str_cmp(tokenarr[0], cmds[index].cmd) == 0)
		{
			printf("%c\n", cmds[2].cmd[1]);
			if (cmds[2].cmd[1] == 'd')
				return(cmds[index].func(tokenarr));
			return(cmds[index].func());
		}
		index++;
	}
	return (-1);
}
