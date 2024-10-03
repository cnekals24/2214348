#include <stdio.h>

int main(int argc,char *agrv[]){
	int a;
	
	printf("Input the year: ");
	scanf("%i",&a);
	
	printf("Is the year (%i) the leap year?%i",a,(a % 4 ==0 && a % 100 != 0)||(a % 400 == 0));
	return 0;
} 
