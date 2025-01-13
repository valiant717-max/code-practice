#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
struct student{
	char name[20];
	int id;
	int math;
	int chinese;
	int sum;
}; 
int cmp(const void *a,const void *b){
	return (((struct student*)b)->sum-((struct student*)a)->sum);
}
int main()
{
	int n;
	scanf("%d",&n);
	struct student *stu=(struct student*)malloc(sizeof(struct student)*n);
	for(int i=0;i<n;i++){
		scanf("%s%d%d%d",stu[i].name,&stu[i].id,&stu[i].math,&stu[i].chinese);
		stu[i].sum=stu[i].math+stu[i].chinese;
	}
	qsort(stu,n,sizeof(struct student),cmp);
    for(int i=0;i<n;i++){
		printf("%s %d\n",stu[i].name, stu[i].sum);
	}
}
