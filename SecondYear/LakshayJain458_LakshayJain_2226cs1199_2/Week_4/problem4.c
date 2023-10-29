#include <stdio.h>
int maxTraffic(int vehicle[], int n, int m)
{
    int maxJamLength = 0;
    int JamLength = 0;
    int flipzero = 0;
    for (int i = 0; i < n; i++)
    {
        if (vehicle[i] == 1)
        {
            JamLength++;
        }
        else
        {
            if (flipzero < m)
            {
                JamLength++;
                flipzero++;
            }
            else
            {
                JamLength = 0;
            }
        }
        if (JamLength > maxJamLength)
        {
            maxJamLength = JamLength;
        }
    }
    return maxJamLength;
}
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int vehicle[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vehicle[i]);
    }
    int maxJamLength = maxTraffic(vehicle, n, m);
    printf("%d\n", maxJamLength);
    return 0;
}