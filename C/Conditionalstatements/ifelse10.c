#include<stdio.h>
int main(){
    float salary,tax;
    printf("\nEnter Salary: ");
    scanf("%f",&salary);
    if(salary<=50000){
        tax = 0;
    }
    else if(salary >50000 && salary<=90000){
        tax= salary * 20/100;
    }
    else if(salary >90000 && salary<=15000){
        tax = salary * 30/100;
    }else{
        tax = salary * 35/100;
    }
    printf("\nTax = %2f",tax);
    return 0;
}