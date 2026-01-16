#include "my_string.h"
#include <stdio.h>
#include <stdlib.h>

int main(void){
	char buff[100];
	char str[]="Hello word";
	printf("my_strlen: %ld\n",my_strlen(str));

	my_strcpy(buff,str);
	printf("my_strcpy: %s\n",buff);
	
	char *dup =my_strdup(str);
	printf("my_strdup: %s\n",dup);
	free(dup);

	printf("strcmp: %d\n",my_strcmp("abc","bcd"));

	char text[] ="one,two,three";
	char *tok =my_strtok(text,",");

	while(tok){
		printf("token: %s\n",tok);
		tok =my_strtok(NULL,",");
	}
	printf("strstr: %s\n",my_strstr("hello world","world"));

	return 0;
}
