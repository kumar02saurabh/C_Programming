/*Documentation:
Name : Saurabh Kumar
DOC:01-11-2024
Description: WAP for printing number in inc. format 

Sample I/P:5
Sample O/P:
    *
   ***
  *****
 *******
*********

*/

#include<stdio.h>
int main(){
    int row,space,star,x,n;

    printf("Enter the number of rows:");
    scanf("%d",&n);


    x=1; // Intialize to print * from 1
    for(row=1;row<=n;row++)
    {
        for(space=1;space<=n-row;space++)
        printf(" "); //For Printing Space from starting 
        for(star=1;star<=x;star++)
        
        printf("*");
        x = x + 2;    // increment of star from 1 to n 
        printf("\n");
    }
} 