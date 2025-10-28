/*Experiment 5: Variable and scope of variable*/
#include <stdio.h>
int main()
{
    printf("Name - Shabdi Srivastava\nSAP ID - 590021135\nCourse - BCA\nBatch - B6");
    printf("\n-------------------------------------\n");
    int a =2;
    {
        int d =2;
    }
    {
    int b=1;
    printf("tring to print variable of global code bloack %d\n" ,a); // would
    printf("tring to print variable of primary code bloack %d\n" ,d);//wont should be in same code bloack or be a gloabal variable or be outside the code blocks
    printf("tring to print variable of secondary code bloack %d\n" ,b);// would
    printf("tring to print variable of teritery code bloack %d\n" ,c);//wont should be in same code bloack or be a gloabal variable or be outside the code blocks
    }
    {
        int c =2;

    }
}