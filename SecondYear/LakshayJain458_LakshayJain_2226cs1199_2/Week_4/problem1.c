#include <stdio.h>
#include <stdlib.h>
#define MAX_RLEN 50
char *encode(char *src)
{
    int rLen;
    char count[MAX_RLEN];
    int len = strlen(src);
    char *dest = (char *)malloc(sizeof(char) * (len * 2 + 1));
    int i, j = 0, k;
    for (i = 0; i < len; i++)
    {
        dest[j++] = src[i];
        rLen = 1;
        while (i + 1 < len && src[i] == src[i + 1])
        {
            rLen++;
            i++;
        }
        sprintf(count, "%d", rLen);
        for (k = 0; *(count + k); k++, j++)
        {
            dest[j] = count[k];
        }
    }
    dest[j] = '\0';
    return dest;
}
int main()
{
    int t;
    char str[100];
    printf("number of test cases:");
    scanf("%d", &t);
    printf("type the word to be encode:");
    for (int i = 0; i < t; i++)
    {
        scanf("%s", &str[i]);
        char *res = encode(str);
        printf("%s", res);
    }
    getchar();
}