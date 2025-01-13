#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void getmonth(int a,char *month) {
    switch(a){
        case 1:strcpy(month, "January");break;
        case 2:strcpy(month, "February");break;
        case 3:strcpy(month, "March");break;
        case 4:strcpy(month, "April");break;
        case 5:strcpy(month, "May");break;
        case 6:strcpy(month, "June");break;
        case 7:strcpy(month, "July");break;
        case 8:strcpy(month, "August");break;
        case 9:strcpy(month, "September");break;
        case 10:strcpy(month, "October");break;
        case 11:strcpy(month, "November");break;
        case 12:strcpy(month, "December");break;
    }
}

int main(){
    int a=0,b=0,c=0;
    scanf("%d/%d/%d",&a,&b,&c);
    char month[15];
    
    if((a==b)&&(b==c)){
        getmonth(b,month);
        printf("%s %d, %d",month,c,(2000+a));
        return 0;
    }
    
    if(a>12){
        getmonth(b,month);
        printf("%s %d, %d",month,c,(2000+a));
        return 0;
    }
    
    
    else if(b>12){
        getmonth(a,month);
        printf("%s %d, %d",month,b,(c+2000));
        return 0;
    }
    
    else if(((a+2000)%4==0 &&(a+2000)%100!= 0)||(a+2000)%400==0){
        if((b==2)&&(c>29)){
            getmonth(a,month);
            printf("%s %d, %d",month,b,(2000+c));
            return 0;
        }
        if(((b==1)||(b==3)||(b==5)||(b==7)||(b==8)||(b==10)||(b==12))&&(c>31)){
            getmonth(a,month);
            printf("%s %d, %d",month,b,(2000+c));
            return 0;
        }
        if(((b==4)||(b==6)||(b==9)||(b==11))&&(c>30)){
            getmonth(a,month);
            printf("%s %d, %d",month,b,(2000+c));
            return 0;
        }
        
    }
    else if(((a+2000)%4!=0) || ((a+2000)% 100 == 0 &&(a+2000)% 400!= 0)){
        if((b==2)&&(c>28)){
            getmonth(a,month);
            printf("%s %d, %d",month,b,(2000+c));
            return 0;
        }
        if(((b==1)||(b==3)||(b==5)||(b==7)||(b==8)||(b==10)||(b==12))&&(c>31)){
            getmonth(a,month);
            printf("%s %d, %d",month,b,(2000+c));
            return 0;
        }
        if(((b==4)||(b==6)||(b==9)||(b==11))&&(c>30)){
            getmonth(a,month);
            printf("%s %d, %d",month,b,(2000+c));
            return 0;
        }
        
    }
    int cha_year=0,cha_month,cha_day;
    cha_year=abs(a-c);
    cha_month=abs(a-b);
    cha_day=abs(b-c);
    
    int numy=0,numm=0,numd=0;
    int maxy=0,miny=0;
    maxy=a>c?a:c;
    miny=a>c?c:a;
    
    int maxm=0,minm=0;
    maxm=a>b?a:b;
    minm=a>b?b:a;
    
    int maxd=0,mind=0;
    maxd=c>b?c:b;
    mind=c>b?b:c;
    
    for(int i=0;i<cha_year;i++){
        if(((miny+i)%4==0 && (miny+i)%100!= 0)||(miny+i)%400==0){
            numy=numy+366;
        }
        else{
            numy=numy+365;    
        }
    }
    
    if((maxy%4==0 && maxy%100!= 0)||maxy%400==0){
        for(int j=0;j<cha_month;j++){
                if((minm+j)==2) numm=numm+29;
                else if(((minm+j)==1)||((minm+j)==3)||((minm+j)==5)||((minm+j)==7)
                ||((minm+j)==8)||((minm+j)==10)||((minm+j)==12)) numm=numm+31;
                else if(((minm+j)==4)||((minm+j)==6)||((minm+j)==9)||((minm+j)==11)) numm=numm+30;
            }
        }
    
    else{
        for(int j=0;j<cha_month;j++){
                if((minm+j)==2) numm=numm+28;
                else if(((minm+j)==1)||((minm+j)==3)||((minm+j)==5)||((minm+j)==7)
                ||((minm+j)==8)||((minm+j)==10)||((minm+j)==12)) numm=numm+31;
                else if(((minm+j)==4)||((minm+j)==6)||((minm+j)==9)||((minm+j)==11)) numm=numm+30;
            }
        }
    
    numd=maxd-mind;
    
    int lately_year=0,lately_month=0,lately_date=0;
    int far_year=0,far_month=0,far_date=0;
    if(a>c){
        lately_year=a;lately_month=b;lately_date=c;
        far_year=c;far_month=a;far_date=b;
    }
    if(a<c){
        lately_year=c;lately_month=a;lately_date=b;
        far_year=a;far_month=b;far_date=c;
    }
    
    int all=0;
    all=all+numy;
    if(lately_month<far_month) all=all-numm;
    else all=all+numm;
    if(lately_date<far_date) all=all-numd;
    else all=all+numd;
    
    printf("%d\n",all);
    
    return 0;
}
