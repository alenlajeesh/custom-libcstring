#include "my_string.h"
#include "stdlib.h"

char *my_strdup(const char *s){

	size_t len =my_strlen(s)+1;
	char *copy =malloc(len);

	if(!copy){
		return NULL;
	}
	my_strcpy(copy,s);
	return copy;
}
