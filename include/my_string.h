#ifndef MY_STRING_H
#define MY_STRING_H

#include <stddef.h>

size_t my_strlen(const char *s);
char *my_strcpy(char *dest, const char *src);
char *my_strdup(const char *s);
int my_strcmp(const char *s1,const char *s2);
char *my_strtok(char *str,const char *delim);
char *my_strstr(const char *haystack,const char *needle);

#endif
