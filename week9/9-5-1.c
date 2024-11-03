#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <stdio.h>

int all_files;    

extern void sub(void);    

int main(void) {
    all_files = 3;    
    sub();            
    printf("main.c: all_files = %d\n", all_files);    
    return 0;
}


#include <stdio.h>

extern int all_files;    

void sub(void) {
    all_files = 10;    
}
