#include "my_string.h"

char *my_strcpy(char *dest, const char *src){
	char *start=dest;

	while((*dest++ = *src++));

	return start; 
}
