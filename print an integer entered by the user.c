#include<stdio.h>  // Standard input-output header
#include<conio.h>  // Console input-output header (optional for modern compilers)

int main()
{
    int input;  // Variable to store the user input integer
    printf("Enter any integer to print: ");  // Prompt the user for input
    scanf("%d", &input);  // Read the integer input from the user and store it in 'input'

    // Print the entered integer
    printf("\nYou have entered %d.\n", input);

    return 0;  // Indicate successful program termination
}
