#include <stdio.h>
#include <stdlib.h>
long long huiwen(long long M,int N){
	long long out =0;
	while(m!=0){
	if(N<11){
		out=out*10+M%10;
		m/=10;
	}
	else if(N<16){
		out=out*16+M%16;
		m/=16;
	}
}
}
long long sum(long long M,long long huiwen_M,int N){
	int num,jin,i=0;
	long long out=0;
	while(M!=0){
	if(N<11){
		num=M%10+huiwen_M%10+jin;
		out=out+num%N*pow(10,i);
		jin=num/N;
		M/=10;huiwen_M/=10;
		i++;
	}
	else{
		num=M%16+huiwen_M%16+jin;
		out=out+num%N*pow(16,i);
		jin=num/N;
		M/=16;huiwen_M/=16;
		i++;
	}
	}
	if(N<11)out=out+jin*pow(10,i);
	else out=out+jin*pow(16,i);
	return out;
}
int main(int argc, char *argv[]) {
	int N,step=0,jud=1;
	long long M;
	scanf("%d",&N);
	if(N<11)scanf("%lld",&M);
	else scanf("%x",&M);
	while(M!=huiwen(M,N)){
		if(step>30){
			jud=0;
			break;
		}
		M=sum(M,huiwen(M,N),N);
		step++;
	}
	if(jud==1)printf("STEP=%d",step);
	else printf("impossible!");
	return 0;
}
