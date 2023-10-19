#include<stdio.h>
#include<stdbool.h>
bool isprime(int n){
    int count=0;
    if(n<=1){
        return false;
    }
    for(int i =1;i<=n;i++){
        if(n%i==0){
            count=count+1;
        }
        if(count>=3){
            return false;
        }
    }
    return true;
}
int main(){
    int n ;
    printf("Enter the number:");
    scanf("d",&n);
   bool prime = isprime(n);
   if (prime) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}
