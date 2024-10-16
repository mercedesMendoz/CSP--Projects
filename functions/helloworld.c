#include <stdio.h>

void name(char name[]){
    printf("hello %s\n", name);
}

int main(void){
    name("Juliete");
    name("Jude");
    name("Jack");
    name("Julie");
    name("Jermey");
    return 0;
}