#include<stdio.h>

int main(){
    char c;
    scanf("%c",&c);
    if(c>64 && c<91){
        printf("1");
    }
    else if(c>96 && c<123){
        printf("0");
    }
    else{
        printf("-1");
    }

    // Write your code here.
}