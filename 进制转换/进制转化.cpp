#include <iostream>
#include <string>
using namespace std; 
string str="0123456789ABCDEF";
void print(int num,int m){
	if(num>m)
		print(num/m,m);
	cout<<str[num%m];
}
int main(int argc, char** argv) {
	int n=0;
	string s;
	int m=0;
	cin>>n;
	cin>>s;
	cin>>m;
	int num=stoi(s,NULL,n);
	print(num,m);
	return 0;
}
