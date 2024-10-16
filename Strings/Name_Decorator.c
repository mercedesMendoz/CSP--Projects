#include <stdio.h>

int main(void){
char name[30]; 
printf("What is your name?: \n");
scanf("%s", name);
printf("<<< %s >>>", name);
return 0;
}