#include <stdio.h>

int main()
{
    int i, sum_even = 0, sum_odd = 0;
    for (i = 1; i <= 50; i++) 
    {
        if (i % 2 == 0) 
        {
          sum_even += i;
        } 
        else 
        {
          sum_odd += i;
        }
    }
    printf("Sum of even numbers from 1 to 50: %d\n", sum_even);
    printf("Sum of odd numbers from 1 to 50: %d\n", sum_odd);

    return 0;
}