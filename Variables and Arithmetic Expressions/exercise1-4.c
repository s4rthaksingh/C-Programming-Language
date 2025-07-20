#include <stdio.h>

void main(){
	printf("Celsius to Fahrenheit\n");
	float celsius = 0.0;
	while(celsius<=300.0){
		float fahrenheit = (celsius*9.0/5.0)+32;
		printf("%3.0f\t%6.1f\n",celsius,fahrenheit);
		celsius+=20;
}
}
