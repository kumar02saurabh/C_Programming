/*Documentation
Name: Saurabh Kumar
DOC:26-10-2024
Decription: WAP to print pattern
*
**
***
****  */
#include<stdio.h>
int main(){

    int n,row,col;
    printf("Enter the no of rows:");
    scanf("%d",&n);
    

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("*",n);
            
        }
        printf("\n");
    }
    return 0;
}



/*Documentation
Name: Saurabh Kumar
DOC:26-10-2024
Decription: WAP to print pattern
*****
****
***
**
*
 */

#include<stdio.h>
int main(){
    int n,row, col;
    printf("Enter the no of rows:");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n+1-row;col++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}



/*Documentation
Name: Saurabh Kumar
DOC:26-10-2024
Decription: WAP to print pattern
      *
     **
    ***
   ****
  *****   
 ******
*******
 */

#include<stdio.h>
int main(){
    int row,space,j,n;

    printf("Enter the rows");
    scanf("%d",&n);

    for(row=1;row<n;row++)
    {
        // For printing space
        for(j=1;j<=n;j++)
        {
            if (j>=n+1-row)
            printf("*");
            else
            {
                printf(" ");
            }

        }
        printf("\n");
    }
}
