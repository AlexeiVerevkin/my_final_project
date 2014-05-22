#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
#include <stdio.h>
#include "Lex_gen.h"
int main()
{
	int i = 1;
	Lex * test = create_Lex("x :=23");
	Node * past = get_first(test);
	
	while (past != NULL)
	{
		printf("%d token is %d with value %s\n", i, get_token(past), get_value(past));
		past = get_next(past);
		i++;
	}
	destroy_Lex(test);
	_CrtDumpMemoryLeaks();
	return 0;
}