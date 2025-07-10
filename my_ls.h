#include <stdio.h>
#include <unistd.h>
#include <dirent.h>
#include <string.h>
#include <stdlib.h>

#ifndef MY_LS_H
#define MY_LS_H

typedef struct	s_data {
	char	*args;
	char	**folder;
	DIR		*dr;

}	t_data;

#endif
