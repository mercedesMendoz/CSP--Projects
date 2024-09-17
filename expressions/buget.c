#include <stdio.h>>

int main(void){
    float income,rent,utilities,groceries,transportation,expenses,savings
    float ,Pincome,prent,putilities,pgroceries,ptranspertation,pexpenses,psavings
    printf("This is going to calculate your buget for one month");
    printf("how much you make a month\n");
    scanf("%f" ,&income)
    printf("Your income is : $%.2f\n", income);
    printf("How much do you pay for rent");
    scanf("%f",&rent);
    printf("How much do you pay for utilites");
    scanf("%f",&utilities);
    printf("How much do you pay for groceries");
    scanf("%f",&groceries);
    printf("How much do you pay for transportation");
    scanf("%f" ,&transportation)
    savings = income * .2;
    expenses = rent + utilities + groceries + transportation;
    spend = income - expenses - savings;
    printf ("You make $%.2f\n", expenses);
    printf ("Your savings are $%.2f\n," savings);
    printf ("The amount of money you have left is $%.2f\n", spend);
    prent = rent/income *100;
    putilities = utilities/income *100;
    pgroceries = groceries/income *100;
    ptransportation = transportation/income *100;
    psavings = savings/income *100;
    pexpenses = expenses/income *100;
    printf("Your rent is %d%% of your income \n", (int) prent);
    printf (" Your utilities is %d%% of your income \n", (int) putilities);
    printf ("Your groceries is %d%% of your income \n", (int) pgroceries);
    printf ("Your transportation is %d%% of your income \n", (int) ptransportation);
    printf("Your savings is %d%% of your income \n", (int) psavings);
    printf("Your expenses is %d%% of your income \n", (int) pexpenses);  
    return 0;

}