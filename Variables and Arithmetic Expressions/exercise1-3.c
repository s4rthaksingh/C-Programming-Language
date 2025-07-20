#include <stdio.h>

void main(){
	printf("Fahrenheit to Celsius\n");
	float fahrenheit = 0.0;
	while(fahrenheit<=300.0){
		float celsius = (fahrenheit-32.0)*5.0/9.0;
		printf("%3.0f\t%6.1f\n",fahrenheit,celsius);
		fahrenheit+=20;
}
}
