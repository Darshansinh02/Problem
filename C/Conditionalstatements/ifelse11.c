#include <stdio.h>
int main(){
    int amt,hun=0,fif=0,ten=0;
    printf("\nenter Amount To Withdraw: ");
    scanf("%d",&amt);
    if(amt>=100){
        hun = amt/100;
        amt = amt%100;
    }
    if(amt>=50){
        fif = amt/50;
        amt = amt%50;
    }
    if(amt>=10){
        ten = amt/10;
        amt = amt%10;
    }
    printf("\n100Rs Notes:%d",hun);
    printf("\n50Rs Notes: %d",fif);
    printf("\n10Rs Notes: %d",ten);
    return 0;
}