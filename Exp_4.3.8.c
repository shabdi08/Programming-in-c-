// Experiment 4: LOOPS
#include <stdio.h>
int main() 
{
    printf("Name - Shabdi Srivastava \nSAP ID - 590021135 \nCourse - BCA \nBatch - B6"); 
    printf("\n----------------------------------------------------------------\n");
    int rows = 5;
    for (int i = 1; i <= rows; i++) 
    {
        for (int space = 1; space <= rows - i; space++) 
        {
            printf("  ");
        }
        for (int num = 1; num <= i; num++) 
        {
            printf("%d ", num);
        }
        for (int num = i - 1; num >= 1; num--) 
        {
            printf("%d ", num);
        }
        printf("\n");
    }
    for (int i = rows - 1; i >= 1; i--) 
    {
        for (int space = 1; space <= rows - i; space++) 
        {
            printf("  ");
        }
        for (int num = 1; num <= i; num++) 
        {
            printf("%d ", num);
        }
        for (int num = i - 1; num >= 1; num--) 
        {
            printf("%d ", num);
        }
        printf("\n");
    }
    return 0;
}