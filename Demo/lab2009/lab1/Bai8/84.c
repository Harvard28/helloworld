#include <stdio.h>
#include <conio.h>
 //void main()
 {
    float com = 0, sale_amt;
    char grade;
     printf("\n Enter the Grade: ");
     scanf("%c", &grade);
    printf("\n Enter the Sales Amount: ");
    scanf("%f", &sale_amt);
    if (sale_amt > 10000)
         if (grade == 'A')
         com = sale_amt * 0.1;
     else
             com = sale_amt * 0.08;
     else
        com = sale_amt * 0.05;
     printf("\n Commission = %f ", com);
 }
