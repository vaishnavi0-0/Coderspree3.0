#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int maxTrafficJam(int vehicle[], int n, int m) {
    int max = 0;
    int current = 0;
    int flips = 0;

    for (int i = 0; i < n; i++) {
        if (vehicle[i] == 1) {
            current++;
        } else {
            if (flips < m) {
                current++;
                flips++;
            } else {
                current = 0;
            }
        }

        if (current > max) {
            max = current;
        }
    }

    return max;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int vehicle[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &vehicle[i]);
    }

    int maximum = maxTrafficJam(vehicle, n, m);
    printf("%d\n", maximum);

    return 0;
}