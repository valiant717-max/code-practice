#include<stdio.h>
#include<math.h>
void getName(char name[][10],int stu_number){	
	char c;
	int index=0;
	scanf("%c",&c); //读入选项后的回车符\n 
	printf("please enter the student's name:");
	scanf("%c",&c);
	while(c!='\n'){
		name[stu_number][index] = c;
		scanf("%c",&c);
		index++;
	}
}
void printStudentName(char name[][10],int stu_number){
	for(int i=0;i<10;++i){
		printf("%c",name[stu_number][i]);
	}
}
//输入编号为stu_number的学生3门课成绩 
void getScore(float score[][3],int stu_number){
	for(int i=0;i<3;++i){
		printf("please enter the %dth score of student %d:",i+1,stu_number);
		scanf("%f",&score[stu_number][i]);
	}
}

//输出所有学生信息 
void printAllStuInfo(char name[][10],float score[][3],int stu_number){
	for(int i=0;i<=stu_number;++i){
		printStudentName(name,i);
		printf("\t%f\t%f\t%f\n",score[i][0],score[i][1],score[i][2]);
	}
}
//根据姓名查找
int searchByName(char name[][10],int stu_number){
	char str[10];	 
	char c;
	int index=0;
	scanf("%c",&c); //读入选项后的回车符\n 
	printf("please enter the name you want to search:");
	scanf("%c",&c);
	while(c!='\n'){
		str[index] = c;
		scanf("%c",&c);
		index++;
	}
	int flag = 0;
	for(int i=0;i<= stu_number;++i){
		flag = 0;
		for(int j=0;j<10;++j){
			if(str[j] != name[i][j]){
				flag = 1;
			}
		}
		if(flag == 0)
			return i;
	}
	return -1;
} 
//修改某个学生的成绩
void modifyScore(float score[][3],int stu_number){
	printf("please enter the student's number:");
	int number;
	scanf("%d",&number);
	getScore(score,number);	
} 
//根据姓名 改某个学生的成绩
void modifyScore(char name[][10],float score[][3],int stu_number){
	int number;
	number = searchByName(name,stu_number);
	if(number != -1){
		getScore(score,number);
	}
}
//根据姓名 删除某个学生的成绩
int deleteByName(char name[][10],float score[][3],int stu_number){
	int number;
	number = searchByName(name,stu_number);
	if(number != -1){
		for(int i=number;i<stu_number;++i){
			score[i][0] = score[i+1][0];
			score[i][1] = score[i+1][1];
			score[i][2] = score[i+1][2];
			for(int j=0;j<10;++j){
				name[i][j] = name[i][j];
			}
		}
		return stu_number-1;		
	}
	return stu_number;
}
int getChoice(){
	int choice = -1;
	printf("1- add a student\n");
	printf("2- print all student's infomation\n");
	printf("3- search by name\n");
	printf("4- modify by number\n");
	printf("5- modify by name\n");
	printf("6- delete by name\n");
	printf("0- Exit\n");
	printf("please enter you choice:");
	scanf("%d",&choice);
	while( choice <0 || choice > 6){	
		printf("Error!plesse enter again!");
		scanf("%d",&choice);
	}	
	return choice;
}
int main(){
	char name[100][10]={0};
	float score[100][3]={0.0};
	int stu_number=-1;
	int choice=-1;	
	while(choice != 0){		
		choice =getChoice();
		switch(choice){
			case 1:
				stu_number++;
				getName(name,stu_number);
				getScore(score,stu_number);
				break;
			case 2:
				printAllStuInfo(name,score,stu_number);
				break;
			case 3:
				int number;
				number = searchByName(name,stu_number);
				if(number == -1)
					printf("cannot find the student!\n");
				else {
					printStudentName(name,number);
					printf("\t%f\t%f\t%f\n",score[number][0],score[number][1],score[number][2]);
				}
				break;
			case 6:
				stu_number = deleteByName(name,score,stu_number);
				break;
			default:
				printf("Error!plesse enter again!");
				break;
		}
		printf("%d\n",choice);
	}
//	printStudentName(name,stu_number);	
	return 0;	
}
