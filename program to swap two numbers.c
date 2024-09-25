#include<stdio.h>  // Standard input-output header
#include<conio.h>  // Console input-output header (optional for modern compilers)

int main()
{
    int a = 10, b = 20;  // Initialize two integer variables, a and b

    // Print the values of a and b before swapping
    printf("Before Swap:\n    a=%d\n    b=%d", a, b);

    // Swap the values of a and b without using a temporary variable
    a = a * b;  // Step 1: Multiply a and b and store the result in a
    b = a / b;  // Step 2: Divide the new a by b to get the original value of a
    a = a / b;  // Step 3: Divide the new a by the new b to get the original value of b

    // Print the values of a and b after swapping
    printf("\nAfter Swap:\n    a=%d\n    b=%d", a, b);

    return 0;  // Indicate successful program termination
}
