#include <stdio.h>
int main(){
    float amt,dis,net;
    printf("\nENTER Amount: ");
    scanf("%f",&amt);
    if(amt >=1000){
        dis = amt*15/100;
    }else{
        dis = amt*5/100;
    }
    printf("\nDIscount=%2f",dis);
    net = amt - dis;
    printf("\nNet Amount is %f",net);
    return 0;

}