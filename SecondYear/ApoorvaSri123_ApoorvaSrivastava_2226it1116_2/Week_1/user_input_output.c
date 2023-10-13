#include <stdio.h>
#include <conio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch>='A'&& ch<='Z') {
        printf("1\n");
    } else if (ch>='a'&& ch<='z') {
        printf("0\n");
    } else{
        printf("-1\n");
    }
return 0;
    
}
