    /*Documentation
Name: Saurabh Kumar
DOC:29-10-2024
Decription: WAP to print pattern
*
**
* *
*  *
*   *
*    *
*     *
********
*/

#include<stdio.h>
int main(){
    int row,space,star,n;

    printf("Enter thr no of Rows:");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        if(row==1||row==n)
        {   for(star=1;star<=row;star++)
              
                    printf("*");
                    printf("\n");
              

        }else
        {
            printf("*");
            for(space=1;space<=row-2;space++)
            printf(" ");
            printf("*");
            printf("\n");
        }
    }
}


    /*Documentation
Name: Saurabh Kumar
DOC:29-10-2024
Decription: WAP to print pattern
********
*      *
*      *
*      *
*      *
*      *
*      *
********
*/

#include<stdio.h>
int main(){
    int row,col,n;

    printf("Enter The no of Rows:");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n;col++)
        {
            if(row==1||row==n||col==1||col==n)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
}
}


    /*Documentation
Name: Saurabh Kumar
DOC:29-10-2024
Decription: WAP to print pattern
*      *
**    **
***  ***
********
*/
#include<stdio.h>
int main(){
    int row,star,space,x;

    x=6;
    for(row=1;row<=4;row++)
    {
        for(star=1;star<=row;star++)
        printf("*");
        for(space=1;space<=x;space++)
        printf(" ");
       for(star=1;star<=row;star++)
        printf("*");
        x=x-2;
        printf("\n");
    }
}

    /*Documentation
Name: Saurabh Kumar
DOC:29-10-2024
Decription: WAP to print pattern
********
***  ***
**    **
*      *

*/

#include<stdio.h>
int main(){
    int row,star,space,x;

    x=0;
    for(row=1;row<=4;row++)
    {
        for(star=1;star<=5-row;star++)
        printf("*");
        for(space=1;space<=x;space++)
        printf(" ");
       for(star=1;star<=5-row;star++)
        printf("*");
        x=x+2;
        printf("\n");
    }
}




   /*Documentation
Name: Saurabh Kumar
DOC:29-10-2024
Decription: WAP to print pattern

*      *
**    **
***  ***
********
********
***  ***
**    **
*      *  */


#include<stdio.h>
int main(){
    int row,star,space,x;

    x=6;
    for(row=1;row<=4;row++)
    {
        for(star=1;star<=row;star++)
        printf("*");
        for(space=1;space<=x;space++)
        printf(" ");
       for(star=1;star<=row;star++)
        printf("*");
        x=x-2;
        printf("\n");
    }
        x=0;
        for(row=1;row<=4;row++)
    {
        for(star=1;star<=5-row;star++)
        printf("*");
        for(space=1;space<=x;space++)
        printf(" ");
        for(star=1;star<=5-row;star++)
        printf("*");
        x=x+2;
        printf("\n");
    }
}
