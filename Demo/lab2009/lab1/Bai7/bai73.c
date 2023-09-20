#include <stdio.h>
int 73(){
//int main (){
    int year;
    printf("\nPlease enter a year:");
    scanf("%d", &year);

    if(year % 4 == 0 && year % 100 !=0 || year % 400 == 0)
        printf("\n%d í a leap year!", year);
}
