/*Experiment 2: Operators
2. ⁠WAP a C program to Convert temperature from Celsius to Fahrenheit using the formula: F = (C * 9/5) + 32.*/

#include <stdio.h>
int main() 
{
    printf ("Name- Shabdi Srivastava\nSAP_ID-590021135\nCourse-BCA\nBatch-6");  
    printf("\n--------------------------------------\n");
    float c, f;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);
    f = (c * 9/5) + 32;
    printf("Temperature in Fahrenheit: %.2f\n", f);
    return 0;
}
