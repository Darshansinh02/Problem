#include <Stdio.h>
int main(){
    int min,a,b,max,c;
    printf("ENTER NUMBER A:");
    scanf("%d",&a);
    printf("\nENTER NUMBER B:");
    scanf("%d",&b);
    if(a > b){
        max = a;
        min = b;
    }else{
        max = b;
        min = a;
    }
    while(1){
        c = max%min;
        if(c == 0){
            printf("\nHCF of %d and %d is %d",a,b,min);
            break;
        }
        max= min;
        min =c;
    }
return 0;
}