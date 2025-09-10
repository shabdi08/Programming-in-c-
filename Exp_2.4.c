/*Experiment 2: Operators
4. ⁠Write a program to find the roots of the quadratic equations.*/

#include <stdio.h>
#include <math.h>
int main() 
{
    printf ("Name- Shabdi Srivastava\nSAP_ID-590021135\nCourse-BCA\nBatch-6");  
    printf("\n--------------------------------------\n");  
    float a, b, c, t, root1, root2;
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    t = b * b - 4 * a * c;

    if (t > 0) 
    {
        root1 = (-b + sqrt(t)) / (2 * a);
        root2 = (-b - sqrt(t)) / (2 * a);
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    } 
    else if (t == 0) 
    {
        root1 = root2 = -b / (2 * a);
        printf("Root 1 = Root 2 = %.2f\n", root1);
    }
     else 
     {
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-t) / (2 * a);
        printf("Root 1 = %.2f + %.2fi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imaginaryPart);
    }

    return 0;
}
