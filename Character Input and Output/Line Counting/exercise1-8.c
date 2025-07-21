#include <stdio.h>

void main(){
	int c;
	long nb = 0;
	long nt = 0;
	long nl = 0;

	while((c = getchar()) != EOF){
		if(c == ' ') ++nb;
		else if(c == '\t') ++nt;
	        else if(c == '\n') ++nl;	
	}
	printf("Number of blanks : %ld\nNumber of tabs : %ld\nNumber of new lines : %ld\n",nb,nt,nl);
}
