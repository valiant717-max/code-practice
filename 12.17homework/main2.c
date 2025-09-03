#include <stdio.h>
#include <stdlib.h>
int leap_Year(int n){
	if(n%400==0||(n%4==0&&n%100!=0))
	return 1;
	else return 0;
}
int calculateDays(int year, int month, int day) {
    int days = 0;
    int i;
    for (i = 1; i < year; i++) {
        days += leap_Year(i)? 366 : 365;
    }
    int month_days[] = {0, 31, 28 + leap_Year(year), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
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

int main(int argc, char *argv[]) {
	int a,b,c;
	scanf("%d/%d/%d",&a,&b,&c);
	if(a>12)
	{
    switch (b) {
    case 1: {
        printf("January");
        break;
    }
    case 2: {
        printf("February");
        break;
    }
    case 3: {
        printf("March");
        break;
    }
    case 4: {
        printf("April");
        break;
    }
    case 5: {
        printf("May");
        break;
    }
    case 6: {
        printf("June");
        break;
    }
    case 7: {
        printf("July");
        break;
    }
    case 8: {
        printf("August");
        break;
    }
    case 9: {
        printf("September");
        break;
    }
    case 10: {
        printf("October");
        break;
    }
    case 11: {
        printf("November");
        break;
    }
    case 12: {
        printf("December");
        break;
    }
    }
    if(a>9)
    printf(" %d,20%d",c,a);
    else 
	printf(" %d,200%d",c,a);
}
else if((b>12)||((leap_Year(a)&&b==2)&&c>29)
	||((leap_Year(a)&&b==2)&&c>28)||((b==1||b==3||b==5||b==7||b==8||b==10||b==12)
&&c>31)||((b==4||b==6||b==9||b==11)&&c>30)){
	switch (a) {
    case 1: {
        printf("January");
        break;
    }
    case 2: {
        printf("February");
        break;
    }
    case 3: {
        printf("March");
        break;
    }
    case 4: {
        printf("April");
        break;
    }
    case 5: {
        printf("May");
        break;
    }
    case 6: {
        printf("June\n");
        break;
    }
    case 7: {
        printf("July");
        break;
    }
    case 8: {
        printf("August");
        break;
    }
    case 9: {
        printf("September");
        break;
    }
    case 10: {
        printf("October");
        break;
    }
    case 11: {
        printf("November");
        break;
    }
    case 12: {
        printf("December");
        break;
    }
    }
    if(c>9)
    printf(" %d,20%d",b,c);
    else printf(" %d,200%d",b,c);
}
else {
	printf("%d",dateDifference(c,a,b,b,c,a));
}
	return 0;
}
