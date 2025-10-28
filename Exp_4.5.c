/*Experiment 4:Loops
4.5. Ramanujan Number is the smallest number that can be expressed as the sum of two cubes in two different ways. 
WAP to print all such numbers up to a reasonable limit.
Example of Ramanujan number: 1729
12^3 + 1^3 and 10^3 + 9^3. for a number L=20(that is limit)*/
#include <stdio.h>
int main() 
{
    printf ("Name- Shabdi Srivastava\nSAP_ID-590021135\nCourse-BCA\nBatch-6");  
    printf("\n--------------------------------------\n");
    int a, b, c, d;
    int limit = 20;
    int cubeLim = limit * limit * limit;
    printf("Ramanujan numbers up to %d^3 (%d):\n\n", limit, cubeLim);
    for (int num = 1; num <= cubeLim; num++) 
    {
        int count = 0;
        for (a = 1; a * a * a < num; a++) 
        {
            for (b = a; a * a * a + b * b * b <= num; b++) 
            {
                if (a * a * a + b * b * b == num) 
                {
                    count++;
                    if (count == 2) 
                    {
                        printf("%d is a Ramanujan number\n", num);
                    }
                }
            }
        }
    }
    return 0;
}