#include <stdio.h>

#define IN 1
#define OUT 0

void main(){
	int c = 0, nl = 0, nw = 0, nc = 0, state = OUT;
	while((c=getchar()) != EOF){
		++nc;
		if(c == '\n') ++nl;
		if(c == '\n' || c == '\t' || c == ' ') state = OUT;
		else if(state == OUT){
			++nw;
			state = IN;
		}
	}
	printf("%d %d %d\n",nc,nw,nl);
}
