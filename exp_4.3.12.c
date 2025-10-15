// Experiment 4: LOOPS
#include <stdio.h>
int main() 
{
    printf("Name - Shabdi Srivastava \nSAP ID - 590021135 \nCourse - BCA \nBatch - B6"); 
    printf("\n----------------------------------------------------------------\n");
    int n = 5; 
    for (int i = 1; i <= n; i++) 
    {
        for (int j = i; j >= 1; j--) 
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
