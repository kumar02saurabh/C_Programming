/*Documentation:
Name: Saurabh Kumar 
DOC: 11-11-2024
Description: WAP to find largest of 3 number using Ternary Operator 
Sample I/P: Enter three numbers : 5 10 15
Sample O/P: Largest is 15
*/
#include<stdio.h>
int main(){
    
    int a,b,max,c;
    
    printf("Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    
    max=a>b?a:b>c?b:c;  // check condition which is largest 
    printf("Lagerst is %d",max);
    
    
    return 0;
}
