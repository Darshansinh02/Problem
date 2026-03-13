#include <stdio.h>
int main() {
    float pi=3.14;
    float r,h,vol;
    printf("\nENTER Radius: ");
    scanf("%f",&r);
    printf("\nENTER Height: ");
    scanf("%f",&h);
    vol = pi*r*r*h;
    printf("\nVolume of Cylinder is %f",vol);
    return 0;
}