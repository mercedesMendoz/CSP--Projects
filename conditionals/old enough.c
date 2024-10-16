#include <stdio.h>

int age = 17;

int main(void){
    if (age >=18){
        printf("You are old enough to vote!\n");
    }else if (age >= 16){
        printf("You are old enought to drive!\n");

    }else if (age == 15){
        printf("You are old enough to get your learners permit!\n");

    }else if (age >= 5){
        printf("You are old enough to go to school!\n");
    }else{
        printf("I'm sorry, you are too young to go to school.\n");
    };
    return 0;
    }
