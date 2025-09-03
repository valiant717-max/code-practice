#include <iostream>
using namespace std;

string s="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"
void print(int n,int x){
	if(n>=x)
		print(n/x,x);
	cout<<s[n%x];
}
int main(int argc, char** argv) {
	int n=0;
	int x=0;
	cin>>n>>x;
	print(n,x);
	return 0;
}
