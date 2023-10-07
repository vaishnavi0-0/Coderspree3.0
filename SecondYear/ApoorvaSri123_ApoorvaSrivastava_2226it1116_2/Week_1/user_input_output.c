#include <stdio.h>
#include <conio.h>

int main() {
    char input;

    printf("Enter a character: ");
    scanf(" %c", &input);

    if (input>='A'&& input<='Z') {
        printf("1\n");
    } else if (input>='a'&& input<='z') {
        printf("0\n");
    } else{
        printf("-1\n");
    }
return 0;
    
}
