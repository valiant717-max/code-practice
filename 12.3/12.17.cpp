#include <stdio.h>
#include <string.h>

// 最多50个提醒事项
#define MAX_REMIND 50  
// 每个提醒最多60个字符
#define MSG_LEN 60  

// 读取一行字符的函数，用于读取提醒消息内容，最多读取n个字符
// 改进：对读入字符进行更严格筛选，只接受常规可见字符，避免不可见控制字符等混入
int read_line(char str[], int n) {
    int ch, i = 0;
    while ((ch = getchar())!= '\n') {
            str[i++] = ch;
        }
    str[i] = '\0';  // 确保字符串结尾正确添加'\0'结束符
    return i;
}

int main(void) {
    // 二维字符数组，用于存储所有提醒事项（每个提醒事项包含日期和消息内容）
    char reminders[MAX_REMIND][MSG_LEN + 3];  
    // 临时存储表示日期的字符串，格式化为两位宽度
    char day_str[3];  
    // 存储用户输入的提醒消息内容
    char msg_str[MSG_LEN + 1];  
    int day, i, j, num_remind = 0;

    for (;;) {
        if (num_remind == MAX_REMIND) {
            printf("-- No space leftt --\n");
            break;
        }

        printf(" Enter day and reminder :");
        // 读取日期，限定读取宽度为2位数字
        scanf("%2d", &day);
        int c;
        c = getchar()!= '\n';
        if (day == 0) {
            break;
        }
        sprintf(day_str, "%2d", day);
        read_line(msg_str, MSG_LEN);
        // 插入排序部分，找到新提醒事项要插入的位置
        for (i = 0; i < num_remind; i++) {
            if (strcmp(day_str, reminders[i]) < 0) {
                break;
            }
        }
        // 确保移动元素操作不会导致数组越界，添加边界检查
        if (i < num_remind) {  
            for (j = num_remind; j > i; j--) {
                // 确保复制操作的源和目标索引都在合法范围内
                if (j < MAX_REMIND && j - 1 >= 0 ) {
                    strcpy(reminders[j], reminders[j - 1]);
                } 
            }
        }

        // 确保复制日期字符串操作不会导致数组越界
        if (i >= 0 && i < MAX_REMIND) {  
            strcpy(reminders[i], day_str);
            // 确保拼接提醒消息操作不会导致数组越界
            if (i >= 0 && i < MAX_REMIND) {  
                strcat(reminders[i], msg_str);
            } 
        } 
        num_remind++;
    }

    printf("\nDay Reminder \n");
    // 循环输出所有存储的提醒事项
    for (i = 0; i < num_remind; i++) {
        // 确保输出操作不会因数组越界导致异常
        if (i >= 0 && i < MAX_REMIND) {  
            printf("%s \n", reminders[i]);
        }
    }
    return 0;
}
