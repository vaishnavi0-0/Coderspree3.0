#include <stdio.h>
int main()
{
    int n;
    printf("enter number of elements in array:");
    scanf("%d", &n);
    int arr[n];
    printf("enter array elements:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int j, largest, second;
    if (arr[0] > arr[1])
    {
        largest = arr[0];
        second = arr[1];
    }
    else
    {
        largest = arr[1];
        second = arr[0];
    }
    for (j = 2; j < n; j++)
    {
        if (largest < arr[j])
        {
            second = largest;
            largest = arr[j];
        }
        else if (second < arr[j])
        {
            second = arr[j];
        }
    }
    printf(" Second - %d \n", second);
    return 0;
}