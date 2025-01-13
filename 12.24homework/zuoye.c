#include <stdio.h>
#include <time.h>
int f1(){
FILE *fp;
fopen("d:\\myDate.mytype","r");
if(fp=NULL){
	printf("ERROR\n");
	exit(0);
}
int x,y;
fscanf(fp,"%d--%d",&x,&y);
fprintf(fp,"%d--%d",10,20);//fprintf(stdout);
fclose(fp);
printf("x=%d\ny=%d\n",x,y);
return 0;
} 
int main(){
FILE *fp;
fopen("d:\\myDate.mytype","wb");
if(fp=NULL){
	printf("ERROR\n");
	exit(0);
}
int x=100,y=100;
fwrite(&x,sizeof(int),1,fp);
fwrite(&y,sizeof(int),1,fp);
int arr[10];
srand(time(NULL));
for(int i=0;i<10;i++){
	arr[i]=rand()%100;
	fwrite(&arr[i],sizeof(int),1,fp);
}

int x[12];
for(int i=0;i<12;i++){
	fread(&x,sizeof(int),1,fp);
	printf("%d data==%d\n",i,x);
}
fread(&x[0],sizeof(int),1,fp)

int y;
fseek(fp,4,SEEK_SET);
fread(&y,4,1,fp);
printf("%d\n",y);
fseek(fp,4,1,fp);
printf("%d\n",y);

while(!fof(fp)){//判断文件是否读到末尾 
	
}
fclose(fp);
return 0;
} 
