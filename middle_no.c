/*Documentation
Name: Saurabh Kumar
DOC: 11-11-2024
Description:WAP to read three intege from userand finf middle number 
Sample I/P: Enter the Three numbwers: 10 20 30
Sample O/P: The Middle number is 20*/

#include<stdio.h>
int main(){
    int num1,num2,num3;
    
    printf("Enter the Three numbers:");
    scanf("%d%d%d",&num1,&num2,&num3);
    
    if((num1>num2&&num1<num3)||(num1>num3&&num1<num2))
    {
        printf("The middle number is %d",num1);
    }
    else if((num2>num1&&num2<num3)||(num2>num3&&num2<num1))
    {
        printf("The middle number is %d",num2);
    }
     else
     {
         printf("The middle number is %d",num3);
     }
     
     return 0;
}
