/*Documentation
Name : Saurabh Kumar
DOC: 01-11-2024
Description: WAP for pattern printing
Sample O/P:
*
**
***
****
*****
******
*****
****
***
**
*
        */

#include<stdio.h>
int main(){
    int row,star,n;

    printf("Enter the number of rows:");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {

        //   *
        //   ***
        //   ****
        for(star=1;star<=row;star++)
        printf("*");
        printf("\n");
    }


    /*   ***
         **
         *
      */
    for(row=1;row<=n;row++)
    {
        for(star=1;star<=n-row;star++)
        printf("*");
        printf("\n");
    }
    return 0;
}