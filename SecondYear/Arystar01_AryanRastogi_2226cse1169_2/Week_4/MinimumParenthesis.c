#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char str[1000];
    fgets(str, sizeof(str), stdin);
    int open = 0;
    int count=0;
    for (int i = 0; i < strlen(str); i++)
    {
        if(str[i]==')' && open<=0){
            count++;
        }
        else if( str[i]==')' && open>0){
            open--;
        }
        else if(str[i]=='('){
            open++;
        }
    }
    printf("The number of parenthesis requiewd are : %d", count+open);
    return 0;
}