/*WAP to insert a data without using extra Array 
Data=12
index=2
Sample array I/P:{2 3 6 8 9 7}
Sample O/P:{2 3 12 8 9 7}
*/

#include<stdio.h>
int main(){
    int n,i,index,temp;

    //Enter array size
    printf("Enter the Array size:");
    scanf("%d",&n);

    // Array declaration, +
    //1 is used to increase array size to store one extra element.
    int arr[n+1];

    index=2; //Insert at index 2
    
    //Enter array elemnts 
    printf("Enter The elemnets of Array:");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {   for(i=2; i<=n; i++)
        {   

            // Swaping An array 
            temp=arr[2];
            arr[2]=arr[i+1];
            arr[i+1]=temp;
        }
        arr[2]=12; // Assign arr[2]=13; which is to insert at array[2]
    }
    for(i=0; i<=n; i++)
      printf("%d ",arr[i]);






}
