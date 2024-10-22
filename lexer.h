#include "common.h"

#ifndef LEXER_H
#define LEXER_H

typedef struct {
	StringBuffer str_buf;
	// I think I need an index pointer to where in the buffer I am right now
	int	index;

} Lexer;

#endif // LEXER_H
