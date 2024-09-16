#include <stdio.h>

int main() {
    int age;  // Variable to store the user's age

    // Prompt the user to enter their age
    printf("Please enter your age: ");
    scanf("%d", &age);

    // Calculate the number of years until the user turns 100
    int years_until_100 = 100 - age;

    // Print a message with the result
    printf("You have %d years until you turn 100!\n", years_until_100);

    return 0;
}
