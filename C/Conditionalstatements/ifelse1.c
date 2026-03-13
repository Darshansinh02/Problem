#include <stdio.h>
int main(){
    int a;
    printf("Enter Number: ");
    scanf("%d",&a);
    if(a%2 == 0){
        printf("\nNumber Is Even");
    }
    else{
        printf("\nNumber is Odd");
    }
    return 0;
}