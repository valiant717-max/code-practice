#include <stdio.h>
#include <string.h>

// ���50����������
#define MAX_REMIND 50  
// ÿ���������60���ַ�
#define MSG_LEN 60  

// ��ȡһ���ַ��ĺ��������ڶ�ȡ������Ϣ���ݣ�����ȡn���ַ�
// �Ľ����Զ����ַ����и��ϸ�ɸѡ��ֻ���ܳ���ɼ��ַ������ⲻ�ɼ������ַ��Ȼ���
int read_line(char str[], int n) {
    int ch, i = 0;
    while ((ch = getchar())!= '\n') {
            str[i++] = ch;
        }
    str[i] = '\0';  // ȷ���ַ�����β��ȷ���'\0'������
    return i;
}

int main(void) {
    // ��ά�ַ����飬���ڴ洢�����������ÿ����������������ں���Ϣ���ݣ�
    char reminders[MAX_REMIND][MSG_LEN + 3];  
    // ��ʱ�洢��ʾ���ڵ��ַ�������ʽ��Ϊ��λ���
    char day_str[3];  
    // �洢�û������������Ϣ����
    char msg_str[MSG_LEN + 1];  
    int day, i, j, num_remind = 0;

    for (;;) {
        if (num_remind == MAX_REMIND) {
            printf("-- No space leftt --\n");
            break;
        }

        printf(" Enter day and reminder :");
        // ��ȡ���ڣ��޶���ȡ���Ϊ2λ����
        scanf("%2d", &day);
        int c;
        c = getchar()!= '\n';
        if (day == 0) {
            break;
        }
        sprintf(day_str, "%2d", day);
        read_line(msg_str, MSG_LEN);
        // �������򲿷֣��ҵ�����������Ҫ�����λ��
        for (i = 0; i < num_remind; i++) {
            if (strcmp(day_str, reminders[i]) < 0) {
                break;
            }
        }
        // ȷ���ƶ�Ԫ�ز������ᵼ������Խ�磬��ӱ߽���
        if (i < num_remind) {  
            for (j = num_remind; j > i; j--) {
                // ȷ�����Ʋ�����Դ��Ŀ���������ںϷ���Χ��
                if (j < MAX_REMIND && j - 1 >= 0 ) {
                    strcpy(reminders[j], reminders[j - 1]);
                } 
            }
        }

        // ȷ�����������ַ����������ᵼ������Խ��
        if (i >= 0 && i < MAX_REMIND) {  
            strcpy(reminders[i], day_str);
            // ȷ��ƴ��������Ϣ�������ᵼ������Խ��
            if (i >= 0 && i < MAX_REMIND) {  
                strcat(reminders[i], msg_str);
            } 
        } 
        num_remind++;
    }

    printf("\nDay Reminder \n");
    // ѭ��������д洢����������
    for (i = 0; i < num_remind; i++) {
        // ȷ�������������������Խ�絼���쳣
        if (i >= 0 && i < MAX_REMIND) {  
            printf("%s \n", reminders[i]);
        }
    }
    return 0;
}
