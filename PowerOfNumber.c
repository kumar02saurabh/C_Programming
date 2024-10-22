#include<stdio.h>
int main(){
    int x,i,y,product=1;

    printf("Enter a base:");
    scanf("%d",&x);

    printf("Enter a power:");
    scanf("%d",&y);

    for (i=1;i<=y;i++)
    
        product =product*x;{
        printf("The answer is %d",product);
    }

    return 0;



}