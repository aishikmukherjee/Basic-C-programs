#include<stdio.h>  // Standard input-output header
#include<conio.h>  // Console input-output header (optional for modern compilers)

int main()
{
    // Initialize variables for the real and imaginary parts of two complex numbers
    int real1 = 10, real2 = 20;
    int complex1 = 5, complex2 = 15;

    // Print the sum of two complex numbers in the format (a + bi) + (c + di) = (a + c) + (b + d)i
    printf("(%d+%di) + (%d+%di) = (%d+%di)",
           real1, complex1,  // First complex number
           real2, complex2,  // Second complex number
           (real1 + real2),  // Sum of the real parts
           (complex1 + complex2));  // Sum of the imaginary parts

    return 0;  // Indicate successful program termination
}
