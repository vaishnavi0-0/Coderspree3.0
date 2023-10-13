#include<iostream>
using namespace std;

int main() {
    char input;
		cin>>input;
        if(input>=65&&input<=90){
            cout<<"1"<<endl;
        }
        else if(input>=97&&input<=122){
            cout<<"0"<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
}
