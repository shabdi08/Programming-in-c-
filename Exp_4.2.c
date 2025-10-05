//Experiment 4: Loops 
//WAP to print the multiplication table of the number entered by the user. It should be in the correct formatting. Num * 1 = Num
#include <stdio.h>
int main()
{
    printf ("Name- Shabdi Srivastava\nSAP_ID-590021135\nCourse-BCA\nBatch-6");  
    printf("\n--------------------------------------\n");
    int num, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("\nMultiplication Table of %d:\n", num);
    for(i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", num, i, num * i);
    }
    return 0;
}
