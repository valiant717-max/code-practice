#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n=0;
	cin>>n;
	double e=1;
	for(int i=1;i<=n;i++){
		long long fac=1;
		for(int j=1;j<=i;j++){
			fac*=j;
		}
		e+=1.0/fac;
	}
	printf("%.10lf\n",e);
	return 0;
}
