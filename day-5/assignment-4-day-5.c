#include<stdio.h>
int main()
{
    int n;
    int sum=0,i;
    printf("Enter the range of number:");
    scanf("%d",&n);
    int num=3;
    for(i=1;i<=n;i++)
    {
            sum+=num;
            num=(num*10)+3;
    }
    printf("The sum of the series = %d",sum);
}