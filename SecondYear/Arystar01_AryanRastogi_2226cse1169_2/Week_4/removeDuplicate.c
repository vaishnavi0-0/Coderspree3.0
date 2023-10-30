#include<stdio.h>
#include<stdlib.h>
int main(){
    int n , arr[100];
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);
     for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int count=0;
    int k=0;
     for (int i = 0; i < n; i++)
    {
        if(arr[i]==arr[i+1]){
            count++;
            arr[i]=0;
        }
        else{
            arr[k]=arr[i];
            k++;
        }
    }
     for (int j = 0; j < k; j++)
    {
        printf("%d", arr[j]);
    }
    printf("There are now %d elements in new array",k);
    return 0;
}