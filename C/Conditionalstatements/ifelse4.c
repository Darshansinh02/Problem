#include <stdio.h>
int main(){
    int num;
    printf("ENTER Number: ");
    scanf("%d",&num);
    if(num == 0){
        printf("\nNUMER IS 0");
    }
    else{
        if(num > 0){
            printf("\nNumber is Positive");
        }
        else{
            printf("\nNumber is Negative");
        }
    }
    return 0;
}