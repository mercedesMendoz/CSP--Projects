#include <stdio.h>>
float income,rent,utilities,groceries,transportation,expenses,savings,spend;

float input(char type[], float var){
    printf(" How much is your %s: \n", type);
    scanf("%f" , &var);
    return var;
}


void percent(char type[], int amount){
    int per = amount/income*100;
    printf("Your %s is %d%% of your income.\n" , type,per);
}


int main(void){
    printf("This is a budget calculator. \n");
    income= input("income", income);
    rent = input("rent", rent);
    utilities = input("utilites", utilities);
    groceries = input("groceries", groceries);
    transportation = input("transportation", transportation);
    savings = income * .2;
    expenses = rent + utilities + groceries + transportation;
    spend = income - expenses - savings;
    printf ("You make $%.2f\n", income);
    printf ("Your expenses are $%.2f\n", expenses);
    printf ("Your savings are $%.2f\n", savings);
    printf ("your spending money is $%.2f\n", spend);
    
    percent("rent", rent);
    percent("utilities", utilities);
    percent("groceries", groceries);
    percent("transportation", transportation);
    percent("savings", savings);
    percent("expenses", expenses);
    

    return 0;

}