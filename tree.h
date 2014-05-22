#ifndef TREE_H
#include <stdlib.h>
#include "Lex_gen.h"
#define TREE_H
typedef struct tBranch Branch;
Branch * create_tree(Lex * plex); /*returns poiter to the root of the created tree of Lexems*/
#undef TREE_H
#endif