// Experiment 4: LOOPS
#include <stdio.h>
int main() 
{
    printf("Name - Shabdi Srivastava \nSAP ID - 590021135 \nCourse - BCA \nBatch - B6"); 
    printf("\n----------------------------------------------------------------\n"); 
    int i, j;
    for(i = 5; i >= 1; i--) 
    {
        for(j = i; j >= 1; j--) 
        {
            printf("%d", j);
        }
        printf("\n"); 
    }
    return 0;
}