#include <stdio.h>
int main()
{
    int arr[100];
    int n;
    printf("Enter the number of elements in the array-");
    scanf("%d", &n);
    ;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
