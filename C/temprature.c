#include <stdio.h>
int main(){
    float cel,feh;
    printf("\nENTER in fehrengit: ");
    scanf("%f",&feh);
    cel = (feh-32) * 5/9;
    printf("\nTemprature in Celsius= %f",cel);
    return 0;
}