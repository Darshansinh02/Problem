#include<stdio.h>
int main(){
    float a,b,result;
    int n;
    printf("\nENTER 1 FOR ADDITION");
    printf("\nENTER 2 FOR SUBSTRACTION");
    printf("\nENTER 3 FOR MULTIPLICATION");
    printf("\nENTER 4 FOR DIVIDE");
    printf("\nENTER NUMBER: ");
    scanf("%d",&n);
    switch(n){
        case 1:
        printf("\nENTER TWO NUMBERS: ");
        scanf("%f %f",&a,&b);
        result = a+b;
        break;
        case 2:
        printf("\nENTER TWO NUMBERS: ");
        scanf("%f %f",&a,&b);
        result = a-b;
        break;
        case 3:
        printf("\nENTER TWO NUMBERS: ");
        scanf("%f %f",&a,&b);
        result = a*b;
        break;
        case 4:
        printf("\nENTER TWO NUMBERS: ");
        scanf("%f %f",&a,&b);
        result = a/b;
        break;
        default :
        printf("\nENTERED NUMBER IS INVALID");

    }
    printf("\nRESULT = %f",result);
    return 0;


}