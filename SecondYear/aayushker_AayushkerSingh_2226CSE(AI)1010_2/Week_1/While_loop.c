#include <stdio.h>

int main() {
	int a,i=0;
	int so=0, se=0;
	scanf("%d",&a);
	while(a!=0){
		i = a%10;
		if (i%2 == 0){
			se += i;
		}
		else{
			so += i;
		}
		a /=10;
	}
	// Write your code here
	printf("%d %d",se, so);

	
}