#include <stdio.h>

void main(){
	long nc = 0;
	while(getchar() != EOF)
		++nc;
	printf("%ld\n",nc);
	
}
