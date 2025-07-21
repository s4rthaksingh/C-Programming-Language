#include <stdio.h>

void main(){
	int c;
	int prev = 0;
	while((c=getchar()) != EOF){
		if(prev != ' ' || c != ' '){
			putchar(c);
			prev = c;
		}
	}
}
