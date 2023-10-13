#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int num,even=0,odd=0;
    while(n>0){
        num=n%10;
        if(num%2==0){
            even+=num;
        }
        else{
            odd+=num;
        }
        n=n/10;

    }
    printf("%d %d",even,odd);
    return 0;
}
