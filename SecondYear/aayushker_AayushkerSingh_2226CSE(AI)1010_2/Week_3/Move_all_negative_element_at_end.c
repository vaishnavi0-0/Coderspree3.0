#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int a[100], change[100];
    int n, j = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 0)
        {
            change[j] = a[i];
            j++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            change[j] = a[i];
            j++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", change[i]);
    }
    return 0;
}