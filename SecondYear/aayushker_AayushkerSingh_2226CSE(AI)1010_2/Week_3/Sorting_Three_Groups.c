#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int arr[100];
    int n, ch = 0, c = 1;
    scanf("%d\n", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int i = 0;
    while (i < n - 1)
    {
        while (arr[i + 1] >= arr[i] && i < n - 1)
        {
            c++;
            i++;
        }
        if (c < n && i != n - 1)
        {
            ch++;
        }
        i++;
    }
    printf("%d", ch);
    return 0;
}