#include <stdio.h>

#define SIZE 5

int main(void) {
    int i;
    int sum = 0;
    int grade[SIZE];
    int average;

    
    printf("5���� ������ �Է��ϼ���.\n");
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &grade[i]);
        sum += grade[i]; 
    }

    for (i = 0; i < SIZE; i++) {
        printf("grade[%d] = %d\n", i, grade[i]);
    }

    
    average = sum / SIZE;

   
    printf("���� ��� : %d\n", average);

    return 0;
}
