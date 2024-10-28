/*Documentation
Name: Saurabh Kumar
DOC:28-10-2024
Decription: WAP to print pattern
     *
    ***
   *****
  *******
 *********
***********
*/

#include<stdio.h>
int main(){
    int n,row,space,x,star;


    printf("Enter The no of rows:");
    scanf("%d",&n);

    x=1;
    for(row=1;row<=n;row++)
     {  //For Space printing
        for(space=1;space<=n-row;space++)
        printf(" ");
      
      for(star=1;star<=x;star++)
        printf("*");
        x=x+2;
        printf("\n");
     }
    }



    /*Documentation
Name: Saurabh Kumar
DOC:28-10-2024
Decription: WAP to print pattern
   * 
  * *
 * * *
* * * *

*/

#include<stdio.h>
int main(){
    int row,star,space,x,n;

    printf("Enter the no of Rows:");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(space=1;space<=n-row;space++)
        
            printf(" ");
        
        for(star=1;star<=row;star++)
        
            printf("* ");
           
            printf("\n");
        
    }
}

    /*Documentation
Name: Saurabh Kumar
DOC:28-10-2024
Decription: WAP to print pattern
*******
 *****
  ***
   *
*/

 #include<stdio.h>
 int main(){
    int row,space,star,n,x;

    printf("Enter the no of rows:");
    scanf("%d",&n);

    x=2*n-1;
    for(row=1;row<=n;row++)
    {
        for(space=1;space<=row-1;space++)
            printf(" ");
        for(star=1;star<=x;star++)
        printf("*");
        x=x-2;
        printf("\n");
    }
 }
