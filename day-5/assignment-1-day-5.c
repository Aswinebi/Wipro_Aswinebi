#include <stdio.h>

int main() 
{
    int n = 11, num;
    printf("\n ");  
    for (int i = 1; i < n; i++) 
    {
        num = i * i - 1; 
        printf("%d ", num);
    }
    printf("\n");
    return 0;
}