#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char str[100];
    printf("Enter the string-");
    scanf("%s",&str);
    int n=strlen(str);
    int l=n-1;
    char temp;
    for(int i=0;i<(n+1)/2;i++){
        temp=str[i];
        str[i]=str[l];
        str[l]=temp;
        l--;

    }
    printf(" The reverse string is %s",str);
    return 0;
}