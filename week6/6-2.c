#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int num;
	printf("Enter an integer: ");
	scanf("%i",&num);
	
	
	if (num < 0){
		printf("|%i| is %i\n",num,-num);
	}else {
		printf("|%i| is %i\n",num,num);
	}
	
	return 0;
	
}
