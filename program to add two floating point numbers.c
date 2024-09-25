#include<stdio.h>  // Standard input-output header
#include<conio.h>  // Console input-output header (optional for modern compilers)

int main()
{
    float a = 2.3, b = 3.2;  // Initialize two float variables, a and b

    // Print the result of multiplying a and b with three decimal places
    printf("%.3f X %.3f = %.3f", a, b, (a * b));

    return 0;  // Indicate successful program termination
}
