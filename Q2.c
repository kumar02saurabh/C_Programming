/*Documentation:
Name : Saurabh Kumar
DOC:01-11-2024
Description: WAP for printing number in inc. format 

Sample I/P:5
Sample O/P: 
 1 2 3 4 5
 6 7 8 9 10
 11 12 13 14 15
 16 17 18 19 20
 21 22 23 24 25
 */


#include<stdio.h>
int main(){
    int row,col,n,count;

    printf("Enter number of rows:");
    scanf("%d",&n);

     count=0;
     
    //  To print N number of rows
    for(row=1;row<=n;row++)
    {   
       //To print N numbers of col
        for(col=1;col<=n;col++)
          {
            count+=1;// after printing inc. the count
            printf(" %d",count);
          }
           printf("\n");
    }
   
     
    return 0;
}