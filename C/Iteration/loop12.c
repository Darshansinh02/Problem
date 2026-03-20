#include <stdio.h>
int main(){
    int n,power,ans=1;
    printf("ENTER NUMBER:");
    scanf("%d",&n);
    printf("\nENTER ITS POWER:");
    scanf("%d",&power);
    for (int i=1;i<=power;i++){
        ans = ans* n;
    }
    printf("\n%d power %d = %d",n,power,ans);
    return 0;
}