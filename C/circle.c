#include <stdio.h>
int main(){
    float pi=3.14,r,area,circ;
    printf("\nENTER Radius: ");
    scanf("%f",&r);
    area = pi *r*r;
    circ = 2*pi*r;
    printf("\nArea of circle: %f",area);
    printf("\nCircumference of Circlr is :%f",circ);
    return 0;
}