/* Documentation 
Name : Saurabh Kumar 
DOC: 24-08-2024
Description : The given program checks whether the input number is a Strong Number
A Strong Number is a number whose value equals the sum of the factorials of its individual digits. For example, 145 is a Strong Number because 
1!+4!+5!=145.

*/

#include <stdio.h>

int main() {
    int a, i, n, digit, prod, sum;
    
    printf("Enter a Number: ");
    scanf("%d", &n);
    
    sum = 0;
    a = n;  // Store original number for comparison

    while (n > 0) {
        digit = n % 10;  // Extract the last digit
        n = n / 10;       // Remove the last digit

        // Calculate factorial of the digit
        prod = 1;
        for (i = 1; i <= digit; i++) {
            prod = prod * i;  // Compute factorial
        }

        // Add the factorial to the sum
        sum = sum + prod;
    }

    // Check if the number is a Strong number
    if (sum == a) {
        printf("%d is a STRONG number.\n", a);
    } else {
        printf("%d is NOT a STRONG number.\n", a);
    }

    return 0;
}



