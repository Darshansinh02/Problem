#include <stdio.h>
int main() {
    float len,breadth,area;
    printf("\nENTER LENGTH: ");
    scanf("%f",&len);
    printf("\nENTER BREADTH: ");
    scanf("%f",&breadth);
    area = len * breadth;
    printf("\nAREA OF RECTANGLE: %f",area);
    return 0;
}