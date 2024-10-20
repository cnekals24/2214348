#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int num;
	printf("enter an integer: ");
	scanf("%i",&num);
	
	if (num > 0) {
		printf("%i is positive\n",num);
	} else if(num == 0) {
		printf("%i is 0 \n",num);
	} else {
		printf("%i is negative\n",num);
	}
	
	return 0;
}
