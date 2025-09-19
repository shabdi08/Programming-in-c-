/*Experiment 3: Conditional Statements
3.1.⁠ ⁠Write a C program to check whether a number is Even or ODD*/

#include <stdio.h>

int main()
 {
    
    printf ("Name- Shabdi Srivastava\nSAP_ID-590021135\nCourse-BCA\nBatch-6");  
    printf("\n--------------------------------------\n");
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("%d is Even", n);
    } else {
        printf("%d is Odd", n);
    }

    return 0;
}
