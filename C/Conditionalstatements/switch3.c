#include<stdio.h>
int main(){
    float dollar = 74.5,rupees,d;
    int n;
    printf("\nENTER 1 for Rupees to Dollar");
    printf("\nENTER 2 for Dollar to Rupees");
    printf("\nENTER NUMBER :");
    scanf("%d",&n);
    switch(n){
        case 1:
        printf("\nENTER RUPEES:");
        scanf("%f",rupees);
        d = rupees/dollar;
        printf("\nDOLLAR =$ %f",d);
        break;
        case 2:
        printf("\nENTER Dollars:");
        scanf("%f",d);
        rupees= d* dollar;
        printf("\nRupees= %f",rupees);
        break;
        default:
        printf("\nENTERED NUMBER IS INVALID");

    }
    
    return 0;
}