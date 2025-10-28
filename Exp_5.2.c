/*Experiment 5: Variable and scope of variable*/
#include <stdio.h>
int a =19;
int main()
{
    printf("Name - Shabdi Srivastava\nSAP ID - 590021135\nCourse - BCA\nBatch - B6");
    printf("\n-------------------------------------\n");
    printf("func 0 - %d\n" ,a);
    func1();
    func2();
    return 0;
}
void func1()
{
    int b =1;
    a=a+1;
    printf("func 1 - %d\n" ,a);
}
void func2()
{
    a =a+2;
    printf("func 2 - %d\n" ,a);
    printf("Trying to print func 1 local variable here %d" ,b); 
}
