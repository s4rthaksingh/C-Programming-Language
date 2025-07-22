#include <stdio.h>

void main(){
	int i = -1;
	int c;
	char s[1000];

	while((c=getchar()) != EOF){
		if(c!='\n')
			s[++i] = c;	
		else{
			for(;i>=0;i--)		
				putchar(s[i]);
			putchar('\n');
		}
	}
}
