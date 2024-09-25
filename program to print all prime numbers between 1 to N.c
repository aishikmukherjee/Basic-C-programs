#include<stdio.h>  // Standard input-output header
#include<conio.h>   // Console input-output header (optional for modern compilers)

void prime(int num);  // Function declaration to check if a number is prime

int main()
{
    int n;  // Variable to store the upper limit
    printf("\nEnter N to print prime numbers in the range of 1 to N: ");
    scanf("%d", &n);  // Taking user input for the upper limit

    printf("\nPrime numbers from 1 to %d are:\n", n);
    // Loop through numbers from 2 to N and check for primes
    for(int i = 2; i <= n; i++)
    {
        prime(i);  // Call the prime function for each number in the range
    }
    return 0;
}

// Function to check if the given number is prime
void prime(int num)
{
    int flag = 0;  // Flag to count the number of divisors
    // Loop to check how many divisors the number has
    for(int i = 1; i <= num/2; i++)
    {
        if(num % i == 0)  // If divisible, increment the flag
        {
            flag++;
        }
    }

    // A prime number should have exactly one divisor (which is 1)
    if(flag == 1)  // Prime numbers have only 1 divisor (other than themselves)
    {
        printf("  %d\n", num);  // Print the prime number
    }
}
