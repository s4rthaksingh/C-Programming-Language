#include <stdio.h>

/* Will work on this one later */

void main(){
	int c = getchar();
	int gwl = 0;
	int cwl = 0;
	while(c != EOF){
		if(!(c == ' ' || c == '\t' || c == '\n')) ++cwl;	
		else cwl = 0;
		if(cwl>gwl) gwl = cwl;

}
	                        for(int i = 1; i <= gwl; i++)
                                if((gwl-i) >= cwl)
                                        putchar('\n');
                                else putchar('*');
                        cwl = 0;
