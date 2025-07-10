#include "my_ls.h"

int	main(int argc, char *argv[]) {
	struct	dirent *de;
	char	*dir;

	if (argc < 2)
		dir = strdup(".");
	else
		dir = strdup(argv[1]);
	DIR *dr = opendir(dir);
	if (!dr) {
		dprintf(STDERR_FILENO, "ERROR could not open %s \n", argv[1]);
		return (1);	
	}

	de = readdir(dr);
	if (!de) {
		dprintf(STDERR_FILENO, "ERROR While reading folder\n");
		return (1);
	}
	while (de != NULL) {
		dprintf(STDOUT_FILENO, "%s ", de->d_name);
		de = readdir(dr);
	}
	dprintf(STDOUT_FILENO, "\n");

	closedir(dr);
	free(dir);
	return (0);
}
