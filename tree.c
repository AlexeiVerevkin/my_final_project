#include "tree.h"
#include <stdio.h>

struct tBranch {
	Branch ** child;
	int mean;
};

Branch * create_tree (Lex * plex)
{
	if (plex == NULL)
	{
		printf("Invalid pointer.\n");
		return NULL;
	}
}