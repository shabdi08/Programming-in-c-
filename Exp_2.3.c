/*Experiment 2: Operators
3. ⁠Write a program to calculate Compound Interest.*/

#include<stdio.h>
int main ()
{
printf("Name - Shabdi Shrivastava\n SAP ID - 590021135\n Course - BCA\n Batch - 06\n");
printf("--------------------------------------------------\n");
float compoundIntrest, principle, rate, time ;
printf("Principle Intrest is: ");
scanf("%f", &principle);
printf("The rate of intrest per year is: ");
scanf("%f", &rate);
printf("The time taken per year is: ");
scanf("%f", &time);
compoundIntrest = principle* pow((1+rate/100),time) - principle;
printf("The compound intrest is: %f", compoundIntrest);
return 0;
}