#include <stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP 20



void main(){
	printf("Fahrenheit to Celsius\n");
	for(float fahrenheit=UPPER;fahrenheit>=LOWER;fahrenheit-=STEP){
		float celsius = (fahrenheit-32.0)*5.0/9.0;
		printf("%3.0f\t%6.1f\n",fahrenheit,celsius);
}
}
