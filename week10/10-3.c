#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main(void) {
    int i;
    int grade[SIZE];
    int score[SIZE];
    int flag_same = 1;

   
    for (i = 0; i < SIZE; i++) {
        grade[i] = rand() % 100;  
    }

    
    for (i = 0; i < SIZE; i++) {
        score[i] = grade[i];
    }

    
    printf("�迭 score: \n");
    for (i = 0; i < SIZE; i++) {
        printf("score[%d] = %d\n", i, score[i]);
    }

    
    printf("\n���� �ٸ� ���� ���� index:\n");
    for (i = 0; i < SIZE; i++) {
        if (grade[i] != score[i]) {
            printf("���� �ٸ� ���� �ִ� index: %d\n", i);
            flag_same = 0;
        }
    }

    if (flag_same) {
        printf("�迭�� ���� ���� �����ϴ�.\n");
    }

    return 0;
}

