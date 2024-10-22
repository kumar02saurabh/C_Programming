#include<stdio.h>
int main(){

    int num,count;
    printf("Enter a number:");
    scanf("%d",&num);

    count=0;
    // while(num!=0) // Valid for both when no. is +ve or negative 
    while (num>0) //Only Valid for +ve number

    {
        num=num/10;
        count++;
    }
    printf("%d",count);
    return 0;

}