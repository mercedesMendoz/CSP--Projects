#include <stdio.h>

int main(void){
    char name[20], place[20], verb[20], noun[20], scentence[500];
    printf("Type a name: ");
    scanf("%s", name);
    printf("Type a place: ");
    scanf("%s",place);
    printf("Type a verb: ");
    scanf("%s",verb);
    printf("Type a noun: ");
    scanf("%s",noun);
    strcat(scentence, name);
    strcat(scentence, " went to the ");
    strcat(scentence, place);
    strcat(scentence, " where they ");
    strcat(scentence, verb);
    strcat(scentence, " and bought a ");
    strcat(scentence, noun);
    strcat(scentence, ".\n");
    printf("%s",scentence);
    return 0;
}