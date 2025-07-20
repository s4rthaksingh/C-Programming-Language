#include <stdio.h>

void main(){
	printf("Fahrenheit to Celsius\n");
	for(float fahrenheit=300.0;fahrenheit>=0.0;fahrenheit-=20){
		float celsius = (fahrenheit-32.0)*5.0/9.0;
		printf("%3.0f\t%6.1f\n",fahrenheit,celsius);
}
}
