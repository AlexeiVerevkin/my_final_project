#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
#include <stdio.h>
#include "Lex_gen.h"
int main()
{
	Lex * test = create_Lex("x := 10 + 5 - 4;");
	Node * past = get_first(test);
	int i = 1;
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