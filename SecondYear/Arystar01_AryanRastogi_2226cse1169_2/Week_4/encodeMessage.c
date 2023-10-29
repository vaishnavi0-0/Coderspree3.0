#include<stdio.h>
#include<string.h>
#include<stdlib.h>


char* encode( char* message) {
   
    char* encoded = (char*)malloc(2 * strlen(message) + 1);  
    if (encoded == NULL) {
        return NULL; 
    }

    int i = 0, j = 0;

    while (i < strlen(message)) {
        int count = 1;

      
        int k = i + 1;
        while (k < strlen(message) && message[i] == message[k]) {
            count++;
            k++;
        }

        encoded[j++] = message[i];
        sprintf(&encoded[j], "%d", count);
        j += (int)(log10(count) + 1); 
        i = k;  
    }

    encoded[j] = '\0';
    return encoded;
}

int main() {
    const char* message[1000] ;
    fgets(message,sizeof(message),stdin);
    char* encodedMessage = encode(message);

    if (encodedMessage != NULL) {
        printf("Encoded message: %s\n", encodedMessage);
        free(encodedMessage); 
    } else {
        printf("Memory allocation failed\n");
    }

    return 0;
}

