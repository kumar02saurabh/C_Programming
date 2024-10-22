/*Input:153
  Output: The given No is Armstrong.
  Input:165033
  Output: The given No is Armstrong
  Input:150
  Output: The given No. NOT Armstrong
*/ 

#include<stdio.h>
int main(){
    int last,i,n,b,a,digit,sum,prod,count;
    printf("Enter a Number:");
    scanf("%d",&n);

    b=a=n;  //for loop1 (n==0) and loop2 (a==0) thats why we store in b.
    count =0;

    //To count the no. of digit
    while(n>0)
    {
        n=n/10;
        count++;
    }

// To get the last digit
    sum=0;
    while(a>0)
    {
        digit=a%10;  // to get last digit
        a = a/10;   //to decrease a digit
        prod =1;

        for (i=1;i<=count;i++)
              prod=prod*digit;   // to calculate power of a number

        sum = sum+prod;     // for storing product of number and than sum. eg d1^2+d2^2
        }

        //  Conditions to check Armstrong or not.
    if (sum==b)
    {
        printf("The given No %d is Armstrong",b);
    }
    else
    printf("The given No %d is  NOT Armstrong",b);

    return 0;

}
