#include<stdio.h>
int main(){
    int n,count,d,last;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Enter the digit:");
    scanf("%d",&d);

    count=0;
    while(n!=0)
    {
        last=n%10;
        if(last==d)
        
            count++;
        n=n/10;
    }
    printf("The frequency %d is %d",d,count);
    return 0;
}