#include<stdio.h>
//int vidu111(){
int main()
{
    int num[5];
    int i;
    num[0]=10;
    num[1]=70;
    num[2]=60;
    num[3]=40;
    num[4]=50;
    for (i=0; i<5; i++)
        printf("\n Number at [%d] is %d", i, num[i]);
    int max= num[0];
    for(i=1;i<5;i++) {
        if (max < num[i])
            max = num[i];
    }
    printf("\n Gia tri lon nhat %d",max);
    int min= num[0];
    for(i=1;i<5;i++) {
        if (min > num[i])
            min = num[i];
    }
    printf("\n Gia tri nho nhat %d",min);
}
