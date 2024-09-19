#include <stdio.h>

int main(void){
    char name[] = "Mercedes";
    char prefix[] = "Mendoza";
    strcat(prefix,name);
    printf("%s\n", prefix[4]);
    return 0;
}