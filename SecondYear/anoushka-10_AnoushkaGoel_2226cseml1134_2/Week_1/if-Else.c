#include<stdio.h>

int main(){
int a,b;
scanf("%d %d",&a,&b);
if(a>b){
    printf("greater");
}
if(b>a){
    printf("smaller");
}
else{
    printf("equal");
}
return 0;
}