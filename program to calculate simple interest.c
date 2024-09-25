#include<stdio.h>  // Standard input-output header
#include<conio.h>  // Console input-output header (optional for modern compilers)

int main()
{
    int principle = 100000, rate = 8, time = 4;  // Initialize variables for principal amount, interest rate, and time period

    // Calculate simple interest using the formula: Interest = (Principle * Rate * Time) / 100
    int interest = (principle * rate * time) / 100;

    // Print the total amount to be paid (principal + interest)
    printf("Total amount to be paid = Rs.%d/- \n", interest + principle);

    // Print the total interest to be paid
    printf("Total interest to be paid = Rs.%d/- ", interest);

    return 0;  // Indicate successful program termination
}
