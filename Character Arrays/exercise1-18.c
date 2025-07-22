/* Write a program to remove trailing blanks and tabs from each line of input,
and to delete entirely blank lines. */


#include <stdio.h>

void main(){
	int c;
	int i = 0;
	char s[1000];
	while((c = getchar()) != EOF){
		if(c != '\n')
			s[i++] = c;
		else{

			while (i > 0 && (s[i-1] == ' ' || s[i-1] == '\t')) i--;
			s[i] = '\0';
			if(i>0)
				printf("%s\n",s);
			i = 0;
		}
	}	
}
