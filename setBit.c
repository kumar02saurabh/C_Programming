/*Documentation
Name: Saurabh Kumar
DOC: 01-11-2024
Description: To brint the number of set bit.
Sample I/P: n=5
Sample O/P: 2
Sample I/P: n=14
Sample O/P: 3
*/

#include<stdio.h>
int main(){
    int n,count;
    printf("Enter the Number 'n': ");
    scanf("%d",&n);

    count=0;
    while(n>0)
    {
       if((n & 1)==1)
        count++;
        n=n/2; //we can also use n>>1 right shift 
    }
    printf("The number of set bit is: %d",count);
}