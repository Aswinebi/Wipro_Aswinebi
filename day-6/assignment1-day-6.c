#include <stdio.h>

void reverse(int arr[], int start, int end) 
{
    while (start < end) 
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotateKthElement(int arr[], int n, int k) 
{
    for (int i = 0; i < n; i += k) 
    {
        int left = i;
        int right = (i + k - 1 < n) ? i + k - 1 : n - 1;
        reverse(arr, left, right);
    }
}

int main() 
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;

    printf("Enter the value of k: ");
    scanf("%d", &k);

    rotateKthElement(arr, n, k);

    printf("Output: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}