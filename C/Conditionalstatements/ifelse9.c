#include <stdio.h>
int main(){
    float s1,s2,s3,s4,s5,sum,per;
    printf("ENTER Marks Of Subject1: ");
    scanf("%f",&s1);
    printf("ENTER Marks Of Subject2: ");
    scanf("%f",&s2);
    printf("ENTER Marks Of Subject3: ");
    scanf("%f",&s3);
    printf("ENTER Marks Of Subject4: ");
    scanf("%f",&s4);
    printf("ENTER Marks Of Subject5: ");
    scanf("%f",&s5);
    sum = s1+s2+s3+s4+s5;
    per = sum/5;

    printf("\nTotal Marks:%f",sum);
    printf("\nPercentage:%f",per);
    if(per>=81 && per<=100){
        printf("\nA GRADE");
    }
    else if(per>=71 && per<=80){
        printf("\nB GRADE");
    }
    else if(per>=61 && per<=70){
        printf("\nC GRADE");
    }
    else if(per>= 40 && per<=60){
        printf("\nD GRADE");
    }
    else if(per>= 33 && per<=39){
        printf("\nE GRADE");
    }else {
        printf("\nFAIL");
    }
    return 0;
}