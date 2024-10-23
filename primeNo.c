#include<stdio.h>
int main(){

    int i,flag,n;

    printf("Enter a Number:");
    scanf("%d",&n);

    flag=0;
    for(i=2;i<=n-1;i++)
       {
        if(n%i==0)
        {
            flag =1;
            printf("%d is not prime Number",n);
            break;
        }

       }
    if(flag==0)
    printf("\n %d is Prime number",n);
    return 0;
}