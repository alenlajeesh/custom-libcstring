#include "my_string.h"

char *my_strtok(char *str,const char *delim){
	static char *next;
	char *start;

	if(str){
		next=str;
	}
	if(!next){
		return NULL;
	}
	
	while(*next){
		const char *d=delim;
		int found=0;
		while(*d){
			if(*next==*d){
				found=1;
				break;
			}
			d++;
		}
		if(!found){
			break;
		}
		next++;
	}

	if(!*next){
		return NULL;
	}
	start=next;

	while(*next){
		const char *d=delim;
		while(*d){
			if(*next==*d){
				*next='\0';
				next++;
				return start;
			}
			d++;
		}
		next++;
	}

	return start;
}
