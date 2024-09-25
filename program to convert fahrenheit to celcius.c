#include<stdio.h>  // Standard input-output header
#include<conio.h>  // Console input-output header (optional for modern compilers)

int main()
{
    float F = 100, C;  // Variable to store temperature in Fahrenheit (F) and Celsius (C)

    // Convert Fahrenheit to Celsius using the formula: C = (F - 32) * 5/9
    C = ((F - 32) * 5) / 9;

    // Print the converted temperature with three decimal places
    printf("%.3f F = %.3f C", F, C);

    return 0;  // Indicate successful program termination
}
