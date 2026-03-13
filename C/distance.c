#include <stdio.h>
int main(){
    float m,cm,inch,km;
    printf("\nENTER DISTANCE IN KM: ");
    scanf("%f",&km);
    m = km *1000;
    cm = m * 100;
    inch = cm/2.54;
    printf("\n Meters=%2f, Centimeters=%2f, inches=%2f",m,cm,inch);
    return 0;
}