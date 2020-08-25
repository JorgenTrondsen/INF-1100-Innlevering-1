
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
}

// Print a triangle with the size of numlines
void triangle(int numlines)
{
    
}

// Determine whether the input number have a given prime factor.
int my_prime_factor(int number, int prime_factor)
{
    // TODO: Complete this
}

// Write a C function that prints numbers in a given range, 
// along with an indication of whether the number is odd or even and whether 5 is a prime factor in the numbers
void prime_factor_range(int start, int end)
{
    // TODO: Complete this
}

// Calculates log2 of an unsigned integer n using the following approach: 
// Find the most significant set bit in n and return the position of this bit. 
// For example, if n is 17 (0b10001), the function should return 4. 
void my_log2(unsigned int num)
{
    // TODO: Complete this
}


int main()
{
    // Try changing these values
    compare_values(69, 88);
    triangle(5);
    my_prime_factor(24, 3);
    prime_factor_range(23, 29);
    my_log2(10);

    return EXIT_SUCCESS;
}