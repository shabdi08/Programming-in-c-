/*Experiment 4: Loops
4.1 WAP to enter numbers till the user wants. At the end, it should display the count of positive, negative, and Zeroes entered.*/
#include <stdio.h>
int main() 
{
     printf ("Name- Shabdi Srivastava\nSAP_ID-590021135\nCourse-BCA\nBatch-6");  
    printf("\n--------------------------------------\n");
    int num;
    char choice;
    int Pos = 0, Neg = 0, Zero = 0;
    do 
    {
        printf("Enter an integer: ");
        scanf("%d", &num);
        if (num > 0) 
        {
            Pos++;
        } else if (num < 0) 
        {
            Neg++;
        }
        else 
        {
            Zero++;
        }

        printf("Do you want to enter another? (y/n): ");
        scanf(" %c", &choice);
    }
    while (choice == 'y' || choice == 'Y');
    printf("\nResults:\n");
    printf("Positive numbers: %d\n", Pos);
    printf("Negative numbers: %d\n", Neg);
    printf("Zeroes: %d\n", Zero);
    return 0;
}