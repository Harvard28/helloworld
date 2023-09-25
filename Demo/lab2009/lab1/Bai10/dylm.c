#include <stdio.h>
void main()
{
    char i;
       do{
        printf("\nDo you love me?\n Yes/No: ");
        scanf("%c", &i);
        getchar();
        }while (i != 'y' && i != 'Y');
          }