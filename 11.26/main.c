#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void getName(char name[][10], int stu_number) {
    printf("please enter the student's name:");
    int i = 0;
    char c;
    scanf("%c",&c);
    scanf("%c",&c);
    while (c!='\n') {
        name[stu_number][i] = c;
        scanf("%c",&c);
        i++;
    }
}

// 打印单个学生的姓名
void printStudentname(char name[][10], int stu_number) {
    int i = 0;
    while (name[stu_number][i]!='\0') {
        printf("%c", name[stu_number][i]);
        i++;
    }
    printf("\n");
}

// 获取学生成绩
void getScore(float score[][3], int stu_number) {
    for (int i = 0; i < 3; i++) {
        printf("please enter the %dth score of student %d:", i + 1, stu_number);
        scanf("%f", &score[stu_number][i]);
    }
}

// 打印所有学生信息
void printAllStudent(char name[][10], float score[][3], int stu_number) {
    for (int i = 0; i < stu_number; ++i) {
        printStudentname(name, i);
        printf("\t%f\t%f\t%f\n", score[i][0], score[i][1], score[i][2]);
    }
}

//查找学生信息 
int searchByName(char name[][10],int stu_number)
{
	char str[10];
	char c;
	int index=0;
	scanf("%c",&c);
	printf("please enter the name you want to search:");
	scanf("%c",&c);
	while(c!='\n')
	{
		str[index]=c;
		scanf("%c",&c);
		index++;
	}
	int flag=0;
	for(int i=0;i<=stu_number;i++)
	{
		flag=0;
		for(int j=0;j<10;j++)
		{
			if(str[j]!=name[i][j]){
				flag=1;
			}
		}
		if(flag==0)
		return i;
	}
	return -1;
}

//修改学生成绩
void modify(score[][3],int stu_number){
	printf("please enter the student's number:");
	int number;
	scanf("%d",&number);
	getScore(score,number);
} 

void modifyScore(char name[][10],float score[][3],int stu_number){
	int number;
	number=searchByname(name,stu_number);
	if(number!=-1)
	{
		if(number!=-1){
			getScore(score,number);
		}
	}
}

void deleteByname(char name[][10],float score[][3],int stu_number){
	int number;
	number=search;
	number=searchByname(name,stu_number);
	if(number!=-1)
	for(int i=number;i<stu_number;++i)
	{
		score[i][0]=score[i+1][0];
		score[i][1]=score[i+1][1];
		score[i][2]=score[i+1][2];
	}
} 
int main(int argc, char *argv[]) {
    char name[100][10] = {0};
    float score[100][3] = {0.0};
    int stu_number = -1;
    int choice = -1;
    while (choice!= 0) {
        printf("1- add a student\n");
        printf("2-print all student' information\n");
        printf("3-search by name");
        printf("4-modify by number");
        printf("5-modify by name");
        printf("6-delete bt name");
        printf("0-exit");
        printf("please enter your choice:");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                stu_number++;
                getName(name, stu_number);
                printStudentname(name, stu_number);
                getScore(score, stu_number);
                printAllStudent(name, score, stu_number);
                break;
            case 2:
                printAllStudent(name, score, stu_number);
                break;
            case 3:
            	if(searchByName(name,stu_number)==-1)
				printf("cannot find the student\n");
				else{
               	printf("\t%f\t%f\t%f\n", score[number][0], score[number][1], score[number][2]);
				}
				break;
			case 4:
			case 5:
			case 6:
			stu_number=deleteByname(name[][10],score[][3],stu_number)
            default:
                printf("Invalid choice!\n");
                break;
        }
    }
    return 0;
}
