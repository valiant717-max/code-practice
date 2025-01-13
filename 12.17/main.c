#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// �������ڽṹ�壬ʹ��λ������ʡ�ռ�
struct Date {
    unsigned int year : 7;
    unsigned int month : 4;
    unsigned int date : 5;
};

// ����ѧ���ṹ�壬������š����������������Լ����ųɼ���Ϣ
struct stu {
    int code;
    char name[10];
    struct Date birthday;
    float chinese;
    float math;
    float english;
};

// ����ڵ�ṹ��
struct SListNode {
    struct stu student;
    struct SListNode *next;
};

// ����Ĵ�ӡ���޸Ĳ�������ΪSListNode*����Ӧ�������ʳ�Ա��ʽ
void printStudents(struct SListNode *node) {
    while (node!= NULL) {
        printf("code:%10d\t%s\n", node->student.code, node->student.name);
        node = node->next;
    }
    printf("\n");
}

int main(int argc, char *argv[]) {
    struct SListNode *head = NULL;
    int choice = 1;
    while (choice!= 0) {
        printf("1 add a student\n");
        printf("5 print all students' information\n");
        printf("0 exit\n");
        scanf("%d", &choice);
        switch (choice) {
        case 1: {
            struct SListNode *node = (struct SListNode *)malloc(sizeof(struct SListNode)); 
            scanf("%d", &(node->student.code));
            getchar();
            fgets(node->student.name, sizeof(node->student.name), stdin);
            node->student.name[strcspn(node->student.name, "\n")] = '\0';
            if (head == NULL) {
                head = node;
            } else {
                struct SListNode *tempNode = head;
                while (tempNode->next!= NULL) {
                    tempNode = tempNode->next;
                }
                tempNode->next = node;
            }
            node->next = NULL;
            break;
        }
        case 5:
            printStudents(head);
            break;
        default:
            break;
        }
    }
    return 0;
}
