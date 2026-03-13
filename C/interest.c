#include <stdio.h>
int main(){
    float princ,rate,time,interest;
    printf("\nENTER PRINCIPAL: ");
    scanf("%f",&princ);
    printf("\nENTER Rate: ");
    scanf("%f",&rate);
    printf("\nENTER Time: ");
    scanf("%f",&time);
    interest = (princ * rate * time)/100;
    printf("\nInterest : %f",interest);
    return 0;
}