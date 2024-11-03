/*Documentation:
Name : Saurabh Kumar
DOC:01-11-2024
Description: WAP for printing number in inc. format 

Sample I/P:5
Sample O/P:
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/

#include<stdio.h>
int main(){
    int row,col,n;
    printf("Enter the number of rows:");
    scanf("%d",&n);

    for (row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        printf("%d ",col);
        printf("\n");
    }
}




/*Documentation:
Name : Saurabh Kumar
DOC:01-11-2024
Description: WAP for printing number in inc. format 

Sample I/P:5
Sample O/P:
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/

#include<stdio.h>
int main(){
    int row,col,n;
    printf("Enter the number of rows:");
    scanf("%d",&n);

    for (row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        printf("%d ",row);
        printf("\n");
    }
}