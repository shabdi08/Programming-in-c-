/*Experiment 3: Conditional Statements
3.3. WAP to compute the BMI Index of the person and print the BMI values as per the following ranges. You can use the following
 formula to compute BMI= weight(kgs)/Height(Mts)*Height(Mts)*/

#include <stdio.h>
int main()
{
    printf("Name - Shabdi Srivastava\nSAP ID - 590021135\nCourse - BCA\nBatch - B6");
    printf("\n--------------------------------------------\n");
    float w, h, bmi;
    printf("Enter weight in kilograms: ");
    scanf("%f", &w);
    if (w <= 0)
    {
        printf("Invalid input for weight.\n");
        return 1;
    }
    printf("Enter height in meters: ");
    scanf("%f", &h);
    if (h <= 0)
    {
        printf("Invalid input for height.\n");
        return 1;
    }
    bmi = w / (h * h);
    printf("Your BMI is: %.2f\n", bmi);
    if (bmi < 15) {
        printf("Category: Starvation\n");
    }
    else if (bmi >= 15 && bmi <= 17.5){
        printf("Category: Anorexic\n");
    }
    else if (bmi > 17.5 && bmi <= 18.5){
        printf("Category: Underweight\n");
    }
    else if (bmi > 18.5 && bmi <= 24.9) {
        printf("Category: Ideal weight\n");
    }
    else if (bmi >= 25 && bmi <= 29.9){
        printf("Category: Overweight\n");
    }
    else if (bmi >= 30 && bmi <= 39.9) {
        printf("Category: Obese\n");
    }
    else if (bmi >= 40){
        printf("Category: Morbidly Obese\n");
    }
    return 0;
}
