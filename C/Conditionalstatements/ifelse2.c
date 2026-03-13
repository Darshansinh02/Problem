#include<stdio.h>
int main(){
    int year;
    printf("ENTER year:");
    scanf("%d",year);
    if(year%4 == 0){
        printf("\nYEAR IS LEAP");
    }
    else{
        printf("\nNOT LEAP YEAR");
    }
    return 0;
}