#include <stdio.h>

int main() {
	// Wriae your code here
	int n, a, d;
    int c=0, rev=0;
    
    scanf("%d",&n);
    a=n;

    while(a!=0){
        a=a/10;
        c++;
    }

    a=n;

    while(a!=0){
        d=a%10;
        rev=rev+pow(d,c);
        a=a/10;
    }

    if(rev==n){
        printf("true");
    }

    else{
        prinf("false");
    }

    return 0;
}

