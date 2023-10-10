#include<iostream>
using namespace std;

int main() {
	// Write your code here
	char c;
	int ans;
    cin>>c;
	if(c>='a'&&c<='z'){
		ans=0;
	}else if(c>='A'&&c<='Z'){
		ans=1;
	}else{
		ans=-1;
	}
	cout<<ans;
}
