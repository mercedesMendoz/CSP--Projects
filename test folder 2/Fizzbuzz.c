#include <stdio.h>
#include <string.h>
#include <time.h>
int i, usr;
char one[50], two[50], three[50];

void delay(int sec){
    int mili =1000*sec;

    clock_t start = clock();

    while(clock()< start+mili);
}

int main(){
    printf("Give me a number");
    scanf("%d", &usr);
    printf("Give me a word");
    scanf("%d", &one);
    printf("Give me another word");
    scanf("%d", &two);
    printf("Give me a number");
    scanf("%d", &three);
    scanf("%s", two);
    strcat(three, one);
    strcat(three, two);
    //create a loop that counts to 50
    for(i=1;i<=50;i++){
    //replace #'s divisible by bot with "FizzBuzz"
    if(i%3==0 && i%5==0){
        printf("FizzBuzz\n");
    

    // replace #s divisible by 3 with "Fizz"
    }else if (i%3==0){
        printf("Fizz\n");
    }
    
    // replace #'s divisible by 5 with "Buzz"
        

    //print all other numbers
    printf("%d\n", i);
    
    }
    return 0;
}