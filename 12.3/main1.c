#include <stdio.h>
#include <string.h>
#include <math.h>

// ����ѧ���ṹ�壬�������������ſγ̳ɼ�
typedef struct Student {
    char name[10];
    float scores[3];
} Student;

// ��ȡѧ������
void getName(Student students[], int stu_number) {
    char c;
    int index = 0;
    scanf("%c", &c);  // ����ѡ���Ļس���\n 
    printf("please enter the student's name:");
    scanf("%c", &c);
    while (c!= '\n') {
        students[stu_number].name[index] = c;
        scanf("%c", &c);
        index++;
    }
    students[stu_number].name[index] = '\0'; 
}

// ��ӡ����ѧ��������
void printStudentName(Student students[], int stu_number) {
    printf("%s", students[stu_number].name);
}

// ������Ϊstu_number��ѧ��3�ſγɼ� 
void getScore(Student students[], int stu_number) {
    for (int i = 0; i < 3; ++i) {
        printf("please enter the %dth score of student %d:", i + 1, stu_number);
        scanf("%f", &students[stu_number].scores[i]);
    }
}

// �������ѧ����Ϣ 
void printAllStuInfo(Student students[], int stu_number) {
    for (int i = 0; i <= stu_number; ++i) {
        printStudentName(students, i);
        printf("\t%f\t%f\t%f\n", students[i].scores[0], students[i].scores[1], students[i].scores[2]);
    }
}

// ������������
int searchByName(Student students[], int stu_number) {
    char str[10];
    char c;
    int index = 0;
    scanf("%c", &c);  // ����ѡ���Ļس���\n 
    printf("please enter the name you want to search:");
    scanf("%c", &c);
    while (c!= '\n') {
        str[index] = c;
        scanf("%c", &c);
        index++;
    }
    str[index] = '\0';
    int flag = 0;
    for (int i = 0; i <= stu_number; ++i) {
        flag = 0;
        if (strcmp(students[i].name, str) == 0) {
            return i;
        }
    }
    return -1;
} 

// �޸�ĳ��ѧ���ĳɼ�
void modifyScore(Student students[], int stu_number) {
    printf("please enter the student's number:");
    int number;
    scanf("%d", &number);
    getScore(students, number);    
} 

// ����������ĳ��ѧ���ĳɼ�
void modifyScoreByName(Student students[], int stu_number) {
    int number;
    number = searchByName(students, stu_number);
    if (number!= -1) {
        getScore(students, number);
    }
}

// ��������ɾ��ĳ��ѧ���ĳɼ�
int deleteByName(Student students[], int stu_number) {
    int number;
    number = searchByName(students, stu_number);
    if (number!= -1) {
        for (int i = number; i < stu_number; ++i) {
            strcpy(students[i].name, students[i + 1].name);
            for (int j = 0; j < 3; ++j) {
                students[i].scores[j] = students[i + 1].scores[j];
            }
        }
        return stu_number - 1;
    }
    return stu_number;
}

int getChoice() {
    int choice = -1;
    printf("1- add a student\n");
    printf("2- print all student's infomation\n");
    printf("3- search by name\n");
    printf("4- modify by number\n");
    printf("5- modify by name\n");
    printf("6- delete by name\n");
    printf("0- Exit\n");
    printf("please enter you choice:");
    scanf("%d", &choice);
    while ( choice < 0 || choice > 6) {
        printf("Error!plesse enter again!");
        scanf("%d", &choice);
    }
    return choice;
}

int main() {
    Student students[100];
    int stu_number = -1;
    int choice = -1;
    while (choice!= 0) {
        choice = getChoice();
        switch (choice) {
            case 1:
                stu_number++;
                getName(students, stu_number);
                getScore(students, stu_number);
                break;
            case 2:
                printAllStuInfo(students, stu_number);
                break;
            case 3:
                int number;
                number = searchByName(students, stu_number);
                if (number == -1)
                    printf("cannot find the student!\n");
                else {
                    printStudentName(students, number);
                    printf("\t%f\t%f\t%f\n", students[number].scores[0], students[number].scores[1], students[number].scores[2]);
                }
                break;
            case 6:
                stu_number = deleteByName(students, stu_number);
                break;
            default:
                printf("Error!plesse enter again!");
                break;
        }
        printf("%d\n", choice);
    }
    return 0;
}

