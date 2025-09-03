# include<stdio.h>
int main(){	
	int n;
	scanf("%d", &n);
	for(int num=1;num<=n;num++){
	int i, res=0, m1=1, m2=2;		
	scanf("%d", &i);		
	if(i<3)			
	printf("%d\n", i);		
	else{			
	for(int j=3;j<=i;j++){
	res = m1+m2;				
	m1=m2;				
	m2=res;			
	}			
	printf("%d\n", res);		
	}	
	}	
	return 0;
	}

