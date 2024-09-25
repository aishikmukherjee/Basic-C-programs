#include<stdio.h>  // Standard input-output header
#include<conio.h>  // Console input-output header (optional for modern compilers)

int main()
{
    int input, flag = 0;  // Variable to store user input and a flag to count divisors
    printf("Enter any number to check for prime: ");
    scanf("%d", &input);  // Taking user input for the number to check

    // Loop to check how many divisors the input number has
    for(int i = 1; i <= input / 2; i++)
    {
        if(input % i == 0)  // If i is a divisor of input
        {
            flag++;  // Increment the divisor count
        }
    }

    // A prime number should have exactly one divisor (which is 1)
    if(flag == 1)  // Check if the count of divisors is exactly one
    {
        printf("\n%d is a prime number", input);  // Output if the number is prime
    }
    else
    {
        printf("\n%d is not a prime number", input);  // Output if the number is not prime
    }

    return 0;  // Indicate successful program termination
}
