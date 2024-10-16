#include <stdio.h>
#include <string.h>
int i;
int usr;
char one[50];
char two[50];
char three[49];
int main(){
    printf("Give me a number\n");
    scanf("%d", &usr);
    printf("Give me a short word\n");
    scanf("%s", one);
    printf("Give me a another short word\n");
    scanf("%s", two);
    strcat(three, one);
    strcat(three, two);
    //loop that counts to 50
    for(i=1;i<=usr;i++){
        //replace #'s divisible by 3 and 5 with "FizzBuzz"
        if(i%3==0 && i%5==0){
            
            printf("%s\n", three);
        }else if(i%3==0){
            //replace #'s divisible by 3 with "Fizz"
            printf("%s\n", one);
        }else if (i%5==0){
            //replace #'s divisible bt 5 with "Buzz"
            printf("%s\n", two);
        }else {
            printf("%d\n", i);//print the number
            }
    }
    return 0;
}
