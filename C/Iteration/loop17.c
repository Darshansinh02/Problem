#include <stdio.h>
int main(){
    int lcm,a,b;
    printf("ENTER NUMBER A: ");
    scanf("%d",&a);
    printf("\nENTER NUMBER:");
    scanf("%d",&b);
    lcm = a >b ? a:b;
    while(1){
        if(lcm %a==0 && lcm%b == 0){
            printf("\nLCM = %d",lcm);
            break;
        }
        lcm++;
    }
return 0;
}