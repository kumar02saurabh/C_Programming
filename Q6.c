/*Documentation:
Name : Saurabh Kumar
DOC:01-11-2024
Description: WAP for printing number in inc. format 

Sample I/P:5
Sample O/P:
*******
*     *
*     *
*     *
*     *
*     *
*******

*/

#include<stdio.h>
int main(){
    int row,col,n,space;
    printf("Enter the number of rows:");
    scanf("%d",&n);


    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n;col++)
        {
            if(row==1||row==n||col==1||col==n)
           {
            printf("*");
           
           } 
            else {
                printf(" ");
            }
        }printf("\n");
            
            
    } 
    

}