// Experiment 4: LOOPS
#include <stdio.h>
int main() 
{
    printf("Name - Shabdi Srivastava \nSAP ID - 590021135 \nCourse - BCA \nBatch - B6"); 
    printf("\n----------------------------------------------------------------\n");
     int n = 5;
    int i, j, s;
    for (i = 1; i <= n; i++) 
    {
        for (s = 0; s < n - i; s++) 
        {
            printf("  ");
        }
        for (j = n; j > n - i; j--) 
        {
            printf("%d ", j);
        }
        for (j = n - i + 2; j <= n; j++) 
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--) 
    {
        for (s = 0; s < n - i; s++) 
        {
            printf("  ");
        }
        for (j = n; j > n - i; j--) 
        {
            printf("%d ", j);
        }
        for (j = n - i + 2; j <= n; j++) 
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}