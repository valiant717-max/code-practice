#include <stdio.h>
#define MAX_NUM 100 
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;++i){
        int a[50];
        int t=0;
        while(scanf("%d",&a[t])){
            t++;
            if(getchar()=='\n'){
                break;
            }
        }
//分开奇数和偶数
int num1=0,num2=0;
int b[MAX_NUM];
int c[MAX_NUM];
for(int w=0;w<t;++w){
    if(a[w]%2!=0){
        b[num1]=a[w];
        num1++;
    }
    else if(a[w]%2==0){
        c[num2]=a[w];
        num2++;
    }
} 
//奇数的冒泡排序
for(int j=0;j<num1;++j){
    for(int k=0;k<num1-1-j;++k){
        if(b[k]>b[k+1]){
            int temp=0;
            temp=b[k+1];
            b[k+1]=b[k];
            b[k]=temp;
        }
    }
}
//偶数的冒泡排序 
for(int j=0;j<num2;++j){
    for(int k=0;k<num2-1-j;++k){
        if(c[k]>c[k+1]){
            int temp=0;
            temp=c[k+1];
            c[k+1]=c[k];
            c[k]=temp;
        }
    }
}
for(int q=0;q<num1;++q){
    printf("%d ",b[q]);
}
for(int q=0;q<num2;++q){
    printf("%d ",c[q]);
}printf("\n");
   }
return 0;
}
