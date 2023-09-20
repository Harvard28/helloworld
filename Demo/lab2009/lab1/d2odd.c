#include<stdio.h>

 int main(){
    int num ,res;
    printf("Nhap vao mot so di ban oi..");
    scanf("%d",&num);
    res = num % 2;
    if (res == 0)
         printf("so chan nha ban \n");
    else
        printf("so le luon nay \n");
    return 1;
}