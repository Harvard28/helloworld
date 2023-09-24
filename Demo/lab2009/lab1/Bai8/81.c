#include <stdio.h>
//#include <conio.h>
//void main ()
{
    float com = 0, sale_amt;
    printf("Enter the Sale Amoun: ");
    scanf("%f", &sale_amt);
    if (sale_amt >= 10000)
        com = (float)sale_amt * 0.1;
    printf("\n Commission = %f", com);
}
