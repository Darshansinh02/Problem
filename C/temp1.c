#include <stdio.h>
int main(){
    float cel,feh;
    printf("\nENTER TEMPRATURE IN CELSIUS: ");
    scanf("%f",&cel);
    feh = (9*cel)/5 + 32;
    printf("TEMPRATURE IN FEHRANHIT: %f",feh);
    return 0;
}