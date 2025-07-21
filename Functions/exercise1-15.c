#include <stdio.h>

float convert(float fahrenheit);

void main(){
	for(float f = 0; f <= 300; f+=20)
		printf("%6.1f\t%6.1f\n",f,convert(f));	
}

float convert(float f){
	float c = (f-32.0)*5.0/9.0;
	return c;
}
