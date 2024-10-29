
#include<stdio.h>
int main()
{
    int start=0,current=1,next=0,limit;
    printf("Enter a number:");
    scanf("%d",&limit);
    int i=0;
    if(limit<=0)
    {
     while(next>=limit && next<=-limit)
     {
        printf("%d ",next);
        start=current;
        current=next;
        next=start -current;//for neagtive series taking the difference
       
     }
       
    }
    else
    {
        printf("Invalid Input"); //if input is positive
    }
    return 0;                                                                                                                                                      
   
}
