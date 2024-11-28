#include <stdio.h>

int main(void) {
    FILE *fp = NULL;
    char c;
    char str[100];  
    
    fp = fopen("sample.txt", "r");
    if (fp == NULL) {
        printf("파일을 못열음\n");
        return 1;  
    }
    
    printf("=== 한 글자씩 읽기 ===\n");
    while ((c = fgetc(fp)) != EOF) {
        putchar(c);
    }
    
    rewind(fp);
    
    printf("\n=== 한 줄씩 읽기 ===\n");
    while (fgets(str, sizeof(str), fp) != NULL) {
        printf("%s", str);
    }
    
    fclose(fp);
    return 0;
}
