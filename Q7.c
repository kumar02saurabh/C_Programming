/*Documentation:
Name : Saurabh Kumar
DOC:02-11-2024
Description: WAP for printing number in given format 

Sample I/P:Enter the number of rows: 6
Sample O/P: 
1
1 0
1 0 1
1 0 1 0
1 0 1 0 1
1 0 1 0 1 0
 */

#include<stdio.h>
int main(){
    int row,col,n;

    printf("Enter the number of rows:");
    scanf("%d",&n);
    
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            if(col%2==0) // to print 0 in even number of column;
            {
                 printf("0 ");
            }
            else
            {
            printf("1 "); // To print 1 in odd number of column
            }
           
        }
        printf("\n");
        
        
    }
}

