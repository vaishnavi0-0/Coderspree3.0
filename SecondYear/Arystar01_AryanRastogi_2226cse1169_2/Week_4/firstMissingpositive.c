#include<string.h>
#include<stdio.h>
#include<stdlib.h>
void bubbleSort(int arr[],int n){
    int temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main(){
   int arr[100];
    int n;
    printf("Enter the number of terms in the array:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    bubbleSort(arr,n);
    
    int j=1;
     for (int i = 0; i < n; i++)
    {
        if(arr[i]>0 ) {
            if(arr[i]==j){
                j++;
            }
            else{
                printf("The missing term is: %d",j);
                break;
               
            }
        }
    }
    return 0 ;
}