#include<stdio.h>  // Standard input-output header
#include<conio.h>  // Console input-output header (optional for modern compilers)

int main()
{
    int length = 20, breath = 50;  // Variables to store the dimensions of the rectangle

    // Calculate and display the area of the rectangle
    printf("\n Area      = %d sq. units", (length * breath));
    // Calculate and display the perimeter of the rectangle
    printf("\n Parameter = %d units", (2 * (length + breath)));
    return 0;  // Indicate successful program termination
}
