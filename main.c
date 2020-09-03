
#include <stdio.h>
#include <stdlib.h>


// Print the largest value of these integers to the console
void compare_values(int x, int y)
{
    if(x < y) {
        printf("%d", y);
    }

    else if(x > y) {
        printf("%d", x);
    }
    printf("\n");
    printf("\n");
}

// Print a triangle with the size of numlines
void triangle(int numlines)
{
    for(int i = 1; i <= numlines; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("X");
        }
        printf("\n");
    }
    printf("\n");
}

// Determine whether the input number have a given prime factor.
int my_prime_factor(int number, int prime_factor)
{
    int result; 
    result = number % prime_factor; {
        
        if (result == 0) {

            return 1;
        }

        else if (result != 0) {

            return 0;
        }
    }
}

// Write a C function that prints numbers in a given range, 
// along with an indication of whether the number is odd or even and whether 5 is a prime factor in the numbers
void prime_factor_range(int start, int end)
{
    for(start; start <= end; start++) 
    {
        int OddEven = my_prime_factor(start, 2);
        
        if(OddEven == 0) {
            printf("%d is odd, ", start);
        }

        else printf("%d is even, ", start);

        int IsPrime = my_prime_factor(start, 5);

        if (IsPrime == 1) {
            printf("and is a prime factor of 5\n");
        }

        else printf("and is not a prime factor of 5\n");
    }
    printf("\n");
}

// Calculates log2 of an unsigned integer n using the following approach: 
// Find the most significant set bit in n and return the position of this bit. 
// For example, if n is 17 (0b10001), the function should return 4. 
void my_log2(unsigned int num)
{
       int Bitposition = -1;

    while (num > 0)
    {
        num = num >> 1;

        Bitposition ++;
    }
    printf("The most significant bit is in position %d", Bitposition);
}


int main()
{
    // Try changing these values
    compare_values(69, 88);
    triangle(5);
    my_prime_factor(24, 2);
    prime_factor_range(23, 29);
    my_log2(17);

    return EXIT_SUCCESS;
}