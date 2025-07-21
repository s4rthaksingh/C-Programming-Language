#include <stdio.h>

void main(){
	long nl = 0;
	int c = 0;
	while((c = getchar()) != EOF)
		if(c=='\n')
			++nl;
		printf("%ld\n",nl);
	
}
