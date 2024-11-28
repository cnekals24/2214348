#include <stdio.h>

int main(void) {
    FILE *fp = NULL;
    char c;
    char str[100];  
    
    fp = fopen("sample.txt", "r");
    if (fp == NULL) {
        printf("������ ������\n");
        return 1;  
    }
    
    printf("=== �� ���ھ� �б� ===\n");
    while ((c = fgetc(fp)) != EOF) {
        putchar(c);
    }
    
    rewind(fp);
    
    printf("\n=== �� �پ� �б� ===\n");
    while (fgets(str, sizeof(str), fp) != NULL) {
        printf("%s", str);
    }
    
    fclose(fp);
    return 0;
}
