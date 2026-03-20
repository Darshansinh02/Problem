#include<stdio.h>
int main(){
    int n,r,sum=0,c;
    printf("ENTER NUMBER:");
    scanf("%d",&n);
    c = n;
    while(n>0){
        r = n%10;
        sum = r +(sum*10);
        n = n/10;
    }
    if(c == sum){
        printf("\nPALINDROME NUMBER");
    }else {
        printf("\nNOT PALINDROME NUMBER");
    }
    
    return 0;
}