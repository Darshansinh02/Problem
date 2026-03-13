#include<stdio.h>
int main(){
    int d,y,m,w;
    printf("ENTER No.of Days: ");
    scanf("%d",&d);
    y = d/365;
    d = d%365;
    m = d/30;
    d = d%30;
    w = d/7;
    d = d%7;
    printf("\nYears=%d",y);
    printf("\nMonths=%d",m);
    printf("\nWeeks=%d",w);
    printf("\nDays=%d",d);
    return 0;
}