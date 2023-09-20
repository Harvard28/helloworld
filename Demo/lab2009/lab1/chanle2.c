#include<stdio.h>

//int d2_chanle(){}
int main() {
    int num, res;
    printf("Enter a number: ");
    scanf("%d", &num);
    res = num % 2;
    printf(res == 0 ? "the number is even.\n" : "The number is odd.\n");
    return 0;
}