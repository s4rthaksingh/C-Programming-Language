#include <stdio.h>

void main(){
	int c = 0;
	while((c=getchar()) != EOF){
		if(c == '\n' || c == '\t' || c == ' ') putchar('\n');
		else putchar(c);
	}
	putchar('\n');
}
