#include <stdio.h>
int main(){
    int age;
    printf("ENTER Age: ");
    scanf("%d",&age);
    if(age >= 18){
        printf("\nYOU ARE ELIGIBLE FOR VOTE");

    }else{
        printf("\nYOU ARE NOT ELIGIBLE FOR VOTE.");
    }
    return 0;

}