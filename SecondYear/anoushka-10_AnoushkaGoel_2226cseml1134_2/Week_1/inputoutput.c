#include<stdio.h>


int main() {
	// Write your code here
	char a;
	scanf("%c",&a);
	if(a>='a' && a<='z'){
		printf("0");
	}
	if(a>='A' && a<='Z'){
		printf("1");
	}
	else{
		printf("-1");
	}
	return 0;
}
