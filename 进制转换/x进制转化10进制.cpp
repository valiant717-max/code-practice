#include <iostream>
#include <cmath> 
using namespace std;
int main(int argc, char** argv) {
	int x=0;
	string s;
	cin>>x;
	cin>>s;
	int ret =0;
	int n=s.size();
	int i=0;
	while(--n>=0){
		if(s[n]<='9')
			ret+=(s[n]-'0')*pow(x,i);
		else
			ret+=(s[n]-'A'+10)*pow(x,i);
		i++;
	}
	cout<<ret<<endl;
	return 0;
}
