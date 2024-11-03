/* Documentation
Name : Saurabh Kumar
DOC: 24-10-2024
Descriotion: You have to read 2 integer from user and multiply two numbers without using multiplication operator
Sample I/P : 5 and 10 
Sample O/P: 50*/


#include<stdio.h>
int main (){
    int a,b,i,sum=0;
    
    printf("Enter Two Numbers:");
    scanf("%d%d",&a,&b);
    
    for (i=1;i<=b;i++)
    {
        sum =sum+a;
    }
    printf("The Result is %d",sum);
}
