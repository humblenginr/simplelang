#ifndef COMMON_H
#define COMMON_H

#define da_append() 
#define da_appen_many() 


// this needs to be a dynamic array
typedef struct {
	char*	items;
	int	capacity;
	int	count;
} StringBuffer;

// appends a cstring to string buffer
void sb_append_cstr(StringBuffer*, char*);

#endif // COMMON_H
