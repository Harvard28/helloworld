#include <stdio.h>
int boiso(int num1, int num2);
int main(){
    int a, b;
    printf("Nhap gia tri num1: ");
    scanf("%d", &a);
    printf("Nhap gia tri num2: ");
    scanf("%d", &b);
    boiso(a,b);
}
int boiso(int num1, int num2) {
    int i;
    if (num1 < num2) {
        for (i = num1; i <= num2; i++) {
            if(i % 50 == 0)
            printf("Cac so chia he cho 50 tu %d den %d la: %d \n", num1, num2, i);

        }
    } else (num1 > num2);
    {
        for (i = num2; i <= num1; i++) {
            if(i % 50 == 0)
            printf("Cac so chia he cho 50 tu %d den %d la: %d \n", num2, num1, i);
        }
    } 

