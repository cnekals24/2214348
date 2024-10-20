#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



#include <stdio.h>

int sumTwo(int a, int b) {
    return a + b;
}

int square(int n) {
    return n * n;
}

int get_max(int x, int y) {
    return (x > y) ? x : y;
}

int main() {
    int num1, num2;
    
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    
    int sum_result = sumTwo(num1, num2);
    int square_result = square(num1);
    int max_result = get_max(num1, num2);
    
    printf("Result - Sum: %d , ", sum_result);
    printf(" Square: %d , ", square_result);
    printf(" Max: %d", max_result);
    
    return 0;
}
