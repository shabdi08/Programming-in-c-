//Experiment 4: LOOPS 
#include <stdio.h>
int main()
{ 
printf("Name - Shabdi Srivastava \nSAP ID - 590021135 \nCourse - BCA \nBatch-B6"); 
printf("\n----------------------------------------------------------------\n"); 
    int lines = 5;
    for (int i = 1; i <= lines; i++) 
    {
        for (int j = 1; j <= i; j++) 
        {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}