#include <stdio.h>
#include <stdlib.h>
int secondLargest(int arr[], int size)
{
    int first = arr[0];
    int second = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] != first)
        {
            second = arr[i];
        }
    }
    if (second == first)
    {
        return -1;
    }
    else
    {
        return second;
    }
}
int main()
{
    int arr[100];
    int n;
    printf("Enter the number of terms in the array:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    int result;
    result = secondLargest(arr, n);
    printf("The second largest term is : %d", result);
    return 0;
}