#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int leapyear(int n){
	if(n%400==0||(n%4==0&&n%100!=0)){
		return 1;
	}
	return 0;
}
int time(int a,int b,int c){
    int days=0;
    for(int i=0;i<a;i++){
    	if(leapyear(i+2000)){
    		days+=366;
		}
		else days+=365;
	}
		if(leapyear(a+2000)){
			switch (b)
			{
			case 1:
				days += 0;
				break;
			case 2:
				days += 31;
				break;
			case 3:
				days += 60;
				break;
			case 4:
				days += 91;
				break;
			case 5:
				days += 121;
				break;
			case 6:
				days += 152;
				break;
			case 7:
				days += 182;
				break;
			case 8:
				days += 213;
				break;
			case 9:
				days += 244;
				break;
			case 10:
				days += 274;
				break;
			case 11:
				days += 305;
				break;
			case 12:
				days += 335;
		}
	}
	else {
			switch (b)
			{
			case 1:
				days += 0;
				break;
			case 2:
				days += 31;
				break;
			case 3:
				days += 59;
				break;
			case 4:
				days += 90;
				break;
			case 5:
				days += 120;
				break;
			case 6:
				days += 151;
				break;
			case 7:
				days += 181;
				break;
			case 8:
				days += 212;
				break;
			case 9:
				days += 243;
				break;
			case 10:
				days += 273;
				break;
			case 11:
				days += 304;
				break;
			case 12:
				days += 334;
		}
}
days+=c;
return days;
}
int main() {
int a,b,c;
scanf("%d/%d/%d",&a,&b,&c);
if(a>12){
	switch(b){
		case 1:printf("January ");
		break;
		case 2:printf("February ");
		break;
		case 3:printf("March ");
		break;
		case 4:printf("April ");
		break;
		case 5:printf("May ");
		break;
		case 6:printf("June ");
		break;
		case 7:printf("July ");
		break;
		case 8:printf("August ");
		break;
		case 9:printf("September ");
		break;
		case 10:printf("October ");
		break;
		case 11:printf("November ");
		break;
		case 12:printf("December ");
		break;
	}
	printf("%d,%d",c,a+2000);
}
else if(b>12||((b==1||b==3||b==5||b==7||b==8||b==10||b==12)&&c>31)||((leapyear(a)&&b==2)&&c>29)
||((!leapyear(a+2000))&&b==2&&c>28)||((b==4||b==6||b==9||b==11)&&(c>30))){
	switch(a){
		case 1:printf("January ");
		break;
		case 2:printf("February ");
		break;
		case 3:printf("March ");
		break;
		case 4:printf("April ");
		break;
		case 5:printf("May ");
		break;
		case 6:printf("June ");
		break;
		case 7:printf("July ");
		break;
		case 8:printf("August ");
		break;
		case 9:printf("September ");
		break;
		case 10:printf("October ");
		break;
		case 11:printf("November ");
		break;
		case 12:printf("December ");
		break;
	}
	printf("%d,%d",b,c+2000);
}
else printf("%d",abs(time(a,b,c)-time(c,a,b)));
    return 0;
}
