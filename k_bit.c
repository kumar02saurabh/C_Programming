/*Documentation:
Name Saurabh Kumar
DOC:01-11-2024
Description:Find the kth bit is set or not
Sample I/P: n=5
            k=1
Sample O/P: Yes
Sample I/P: n=8
            k=1
Sample O/P: No
*/

#include<stdio.h>
int main(){
    int n,k;
    printf("Enter the number 'n':");
    scanf("%d",&n);
    printf("Enter the kth bit value 'k':");
    scanf("%d",&k);

    if( ( n & (1<<(k-1)))!=0)
    printf("YES");
    else
    printf("NO");
}