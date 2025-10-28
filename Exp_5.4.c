/*Experiment 5: Variable and scope of variable*/
#include <stdio.h>
int funel() 
{
static int ai = 5;
ai++; 
return ai;
}
void main()
{
    printf ("Name- Shabdi Srivastava\nSAP_ID-590021135\nCourse-BCA\nBatch-6");  
    printf("\n--------------------------------------\n");
    int a=funel();
    printf("%d", a); 
    int b = funel();
    printf("%d",b);

}