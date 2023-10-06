#include <stdio.h>
int tinh(int a, int b, char opertator);
int main(){
    int m, n;
    char kitu;
    int Result;

    printf("Enter first number: ");
    scanf("%d", &m);
    printf("Enter an operator (+ - * /) : ");
    scanf(" %c", &kitu);
    printf("Enter second number: ");
    scanf("%d", &n);
    Result = tinh(m, n, kitu);
    printf("Resulf : %d", Result );
    return 0;


}

int tinh(int a, int b, char operator){
    int result1;
    switch(operator){
        case '+':
            result1 = a + b;
            break;
        case '-':
            result1 = a - b;
            break;
        case '*':
            result1 = a * b;
            break;
        case '/':
            result1 = a / b;
            break;
        default:
            printf("Khong co du lieu");
            return result1;
    }
}
