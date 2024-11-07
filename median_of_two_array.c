#include <stdio.h>

int main() {
    int A, B, i, j, k, temp,a,b;
    float sum;

    // Ask user for array size
    printf("Enter the 'n' value for Array A: ");
    scanf("%d", &A);
    
    printf("Enter the 'n' value for Array B: ");
    scanf("%d", &B);
    
    int arrA[A];
    int arrB[B];
    
    // Ask user for array elements
    printf("Enter the elements one by one for Array A:\n");
    for (i = 0; i < A; i++) 
    {
        scanf("%d", &arrA[i]);
    }
    // Ask user for array elements
    printf("Enter the elements one by one for Array B:\n");
    for (j = 0; j < B; j++) 
    {
        scanf("%d", &arrB[j]);
    }
    
    
    // Sort Array A using Bubble Sort
    for (i = 0; i < A - 1; i++) {
        for (j = 0; j < A - i - 1; j++) 
        {
            if (arrA[j] > arrA[j + 1]) 
            {
                // Swap arrA[j] and arrA[j + 1]
                temp = arrA[j];
                arrA[j] = arrA[j + 1];
                arrA[j + 1] = temp;
            }
        }
    }
    
    
    
    // Print sorted Array A
    printf("Sorted Array A: ");
    for (i = 0; i < A; i++) {
        printf("%d ", arrA[i]);
    }
    
    // Sort Array B using Bubble Sort
    for (i = 0; i < B - 1; i++) {
        for (j = 0; j < B - i - 1; j++) 
        {
            if (arrB[j] > arrB[j + 1]) 
            {
                // Swap arrB[j] and arrB[j + 1]
                temp = arrB[j];
                arrB[j] = arrB[j + 1];
                arrB[j + 1] = temp;
            }
        }
    }
    
     // Print sorted Array B
    printf("Sorted Array B: ");
    for (i = 0; i < B; i++) {
        printf("%d ", arrB[i]);
    }
    
    printf("\n");

    
    
// Find the median A
       float medianA;
       if (A % 2 == 1) {
      // If A is odd, the median is the middle element
       medianA = arrA[A / 2];
       } 
       else {
         // If A is even, the median is the average of the two middle elements
             medianA = (arrA[(A - 1) / 2] + arrA[A / 2]) / 2.0;
            }

        // Print the median
            printf("Median of array1: %.2f\n", medianA);
            a=medianA;
    
    

// Find the median B
       float medianB;
       if (B % 2 == 1) 
       {
      // If A is odd, the median is the middle element
       medianB = arrB[B / 2];
       } 
       else {
         // If B is even, the median is the average of the two middle elements
             medianB = (arrB[(B - 1) / 2] + arrB[B / 2]) / 2.0;
            }

        // Print the median
            printf("Median of array2: %.2f\n", medianB);
            
            b=medianB;
            
            sum=(a+b)/2;
            printf("Median of both arrays:%.2f",sum);
            
    
   

    return 0;
}






  
