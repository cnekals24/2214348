#include <stdio.h>
#include <stdlib.h>



struct student {
    int studentId;
    char name[50];
    float gpa;
};

int main(void) {
    struct student s1;
    
    
    printf("학번을 입력하세요: ");
    scanf("%d", &s1.studentId);
    printf("이름을 입력하세요: ");
    scanf("%s", s1.name);
    printf("학점을 입력하세요: ");
    scanf("%f", &s1.gpa);
    
   
    printf("\n학생 정보\n");
    printf("학번: %d\n", s1.studentId);
    printf("이름: %s\n", s1.name);
    printf("학점: %.2f\n", s1.gpa);
    
    return 0;
}
