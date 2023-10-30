#include <stdio.h>
void leftRotate(int arr[], int n, int k)
{
    int mod = k % n;
    for (int i = 0; i < n; i++)
        printf("%d ", arr[(mod + i) % n]);
    printf("\n");
}
int main()
{
    int m;
    printf("enter no. of elements in an array:");
    scanf("%d", &m);
    int arr[m];
    printf("enter array elements:");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr[i]);
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 1;
    leftRotate(arr, n, k);
    return 0;
}