/*Documentation
Name : Saurabh Kumar 
DOC: 24-10-2024
Description: Find HCF and LCM of Given Numbers.*/

#include<stdio.h>
int main(){
    int a,b,min,i,HCF,LCM;
    printf("Enter Two numbers:");
    scanf("%d%d",&a,&b);

    min=a<b?a:b;  // To get Min of two number

    for (i=1;i<=min;i++)
      {
        if(a%i==0 && b%i==0)
        HCF=i;  // To find HCF 
        LCM=(a*b)/HCF;  // To find LCM
        
      }
    printf("HCF of %d and %d is: %d\n",a,b,HCF);
   
     printf("LCM of %d is: %d\n",LCM);


    return 0;
}