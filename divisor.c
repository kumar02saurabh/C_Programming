/*Documentation
Name: Saurabh Kumar
DOC:02-11-2024
Descriptions: Find the total number of divior of given number 'n'
Sample I/P: 10
Sample O/P: 1 2 5 10
Sample I/P:100
Sample O/P:1 2 4 5 10 20 25 50 100
*/

#include<stdio.h>
int main(){
    int n,i;

    printf("Enter a number 'n':");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if (n%i==0)
        printf(" %d",i);
    }


}