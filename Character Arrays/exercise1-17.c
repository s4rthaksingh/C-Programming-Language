#include <stdio.h>

void main(){
	int c;
	char s[1000];
	int i = 0;
	while((c = getchar()) != EOF){
		if(c != '\n')
			s[i++] = c;
		else{
			s[i] = '\0';
			if(i>80)
				printf("%s\n",s);
			i = 0;
		}
	}
}
