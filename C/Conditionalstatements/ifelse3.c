#include <stdio.h>
int main(){
    int a,b;
    printf("\nENTER No a: ");
    scanf("%d",&a);
    printf("\nEnter No b: ");
    scanf("%d",&b);

    if(a == b){
        printf("\nBoth are Equal");
    }
    else if(a > b){
        printf("\nA is greater than B");
    }else {
        printf("\nB is greater than A");
    }
    return 0;
}
