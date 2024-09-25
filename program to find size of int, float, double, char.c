#include<stdio.h>  // Standard input-output header
#include<conio.h>  // Console input-output header (optional for modern compilers)

int main()
{
    // Print the sizes of various data types in bytes
    printf("  SIZE OF ==>");
    printf("\n    int = %d" , sizeof(int));       // Print size of int data type
    printf("\n    float = %d" , sizeof(float));   // Print size of float data type
    printf("\n    double = %d" , sizeof(double)); // Print size of double data type
    printf("\n    char = %d" , sizeof(char));     // Print size of char data type
    return 0;  // Indicate successful program termination
}
