#include "../my_ls.h"

t_data	*parsing(char **argv) {
	t_data	*data;
	int		i;

	
	data = calloc(sizeof(t_data), 1);
	if (!data)
		return (NULL);
	i = 0;
	while (argv[i]) {
		if (argv[i][0] == '-')
	}
	return (data);
}
