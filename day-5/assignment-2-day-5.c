#include <stdio.h>
int main()
{
    int n, number = 1;
    printf("Enter the length of the series: ");
    scanf("%d", &n);
    while (n > 0)
    {
       printf("%d ", number);
       number *= 2;
       n--;
    }
    return 0;
}