#include <stdio.h>
#include <string.h>

// Function to reverse a string
void reverseString(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the trailing newline character
    str[strcspn(str, "\n")] = '\0';

    int length = strlen(str);

    // Reverse the entire string
    reverseString(str, 0, length - 1);

    // Reverse individual words
    int start = 0;
    for (int i = 0; i < length; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            reverseString(str, start, i - 1);
            start = i + 1;
        }
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
