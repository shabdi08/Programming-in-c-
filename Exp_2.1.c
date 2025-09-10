/*Experiment 2: Operators
1. WAP a C program to calculate the area and perimeter of a rectangle based on its length and width.*/

#include <stdio.h>

int main() 
{
    printf ("Name- Shabdi Srivastava\nSAP_ID-590021135\nCourse-BCA\nBatch-6");  
    printf("\n--------------------------------------\n");  
    float l, w, area, per;
    printf("Enter length of rectangle: ");
    scanf("%f", &l);
    printf("Enter width of rectangle: ");
    scanf("%f", &w);
    area = l * w;
    per = 2 * (l + w);
    printf("Area of rectangle: %.2f\n", area);
    printf("Perimeter of rectangle: %.2f\n", per);
    return 0;
}