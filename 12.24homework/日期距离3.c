#include <stdio.h>
int isr(int y)
{
    if((0==y%400) || (0==y%4 && 0!=y%100)) return 1;
    else return 0;
}
int is(int y,int m,int d)
{
    if((d>=1&&d<=31) && (1==m||3==m||5==m||7==m||8==m||10==m||12==m)) return 1;
    else if((d>=1&&d<=30) && (4==m||6==m||9==m||11==m)) return 1;
    else if((d>=1&&d<=28) && 2==m) return 1;
    else if(29==d && 2==m && 1==isr(y+2000)) return 1;
    else return 0;
}
int calculateDays(int year, int month, int day) {
    int days = 0;
    int i;
    for (i = 1; i < year; i++) {
        days += isr(i)? 366 : 365;
    }
    int month_days[] = {0, 31, 28 + isr(year), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for (i = 1; i < month; i++) {
        days += month_days[i];
    }
    days += day;
    return days;
}

// ¼ÆËãÌìÊý²î
int dateDifference(int year1, int month1, int day1, int month2, int day2, int year2) {
    int days1 = calculateDays(year1, month1, day1);
    int days2 = calculateDays(year2, month2, day2);
    return abs(days1 - days2);
}


int main()
{
    int r[3];
    scanf("%d/%d/%d",&r[0],&r[1],&r[2]);  
	getchar();
    int A=0; int B=0;
    if(is(r[2],r[0],r[1])) A=1;
    if(is(r[0],r[1],r[2])) B=1;
    if(!A || (r[2]==r[0] && r[0]==r[1]))
    {
        switch (r[1]) 
        {
            case 1: printf("January "); break;
            case 2: printf("February "); break;
            case 3: printf("March "); break;
            case 4: printf("April "); break;
            case 5: printf("May "); break;
            case 6: printf("June "); break;
            case 7: printf("July "); break;
            case 8: printf("August "); break;
            case 9: printf("September "); break;
            case 10: printf("October "); break;
            case 11: printf("November "); break;
            case 12: printf("December "); break;
        }
        if(r[0]>9)printf("%d, 20%d",r[2],r[0]);
        else if(0==r[0])printf("%d, 2000",r[2]);
        else printf("%d, 200%d",r[2],r[0]);
        return 0;
    } 
    if(!B)
    {
        switch (r[0]) 
        {
            case 1: printf("January "); break;
            case 2: printf("February "); break;
            case 3: printf("March "); break;
            case 4: printf("April "); break;
            case 5: printf("May "); break;
            case 6: printf("June "); break;
            case 7: printf("July "); break;
            case 8: printf("August "); break;
            case 9: printf("September "); break;
            case 10: printf("October "); break;
            case 11: printf("November "); break;
            case 12: printf("December "); break;
        }
        if(r[2]>9)printf("%d, 20%d",r[1],r[2]);
        else if(0==r[2])printf("%d, 2000",r[1]);
        else printf("%d, 200%d",r[1],r[2]);
        return 0;
    }

    printf("%d",dateDifference(r[0],r[1],r[2],r[0],r[1],r[2]));
    return 0;
}
