#include<stdio.h>
int main(){
    int a1,a2,a3,sum;
    printf("\nENTER Angle1: ");
    scanf("%d",&a1);
    printf("\nENTER ANGLE2: ");
    scanf("%d",&a2);
    printf("\nENTER Angle3: ");
    scanf("%d",&a3);
    sum= a1+a2+a3;
    if(sum == 180 && a1 != 0 && a2!=0 && a3!=0){
        printf("\nTriangle is Valid");
    }else{
        printf("\nTriangle is not valid");
    }
    return 0;
}