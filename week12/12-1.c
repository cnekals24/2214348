#include <stdio.h>
#include <stdlib.h>



struct student {
    int studentId;
    char name[50];
    float gpa;
};

int main(void) {
    struct student s1;
    
    
    printf("�й��� �Է��ϼ���: ");
    scanf("%d", &s1.studentId);
    printf("�̸��� �Է��ϼ���: ");
    scanf("%s", s1.name);
    printf("������ �Է��ϼ���: ");
    scanf("%f", &s1.gpa);
    
   
    printf("\n�л� ����\n");
    printf("�й�: %d\n", s1.studentId);
    printf("�̸�: %s\n", s1.name);
    printf("����: %.2f\n", s1.gpa);
    
    return 0;
}
