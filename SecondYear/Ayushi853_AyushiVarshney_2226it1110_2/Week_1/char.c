#include<stdio.h>

int main(){

    // Write your code here.
    char a;
    scanf("%c",&a);
    if(a>='A'&& a<='Z'){
        printf("1");
    }
    else if(a>='a'&&a<='z'){
        printf("0");
    }
    else{
        printf("-1");
    }

    
}