#include <stdio.h>
int tong();
int hieu();
int tich();
float thuong();

//int main() {
    int a, b;
    int luaChon;


    do {
        printf("1. Input Number\n");
        printf("2. Calculate Sum\n");
        printf("3. Calculate Substraction\n");
        printf("4. Calculate Multiplication\n");
        printf("5. Calculate Division\n");
        printf("6. Exit\n");
        printf("Select an option from (1-6): ");
        scanf("%d", &luaChon);

        switch (luaChon) {
            case 1:
                printf("Input Number 1: ");
                scanf("%d", &a);
                printf("Input Number 2: ");
                scanf("%d", &b);
                break;
            case 2:
                tong(a, b);
                printf("Calculate Sum : %d\n", a + b);
                break;
            case 3:
                hieu(a, b);
                printf("Calculate Substraction : %d\n", a - b);
                break;
            case 4:
                tich(a, b);
                printf("Calculate Multiplication : %dn", a * b);
                break;
            case 5:
                thuong(a, b);
                printf("Calculate Division : %d\n", (float) a / b);
                break;
            case 6:
                break;
            default:
                printf("Invalid selection");
                printf("\n");
        }

    } while (luaChon != 6);
}




    int tong(int a, int b) {
        return a + b;
    }
    int hieu(int a, int b) {
        return a - b;
    }
    int tich(int a, int b) {
        return a * b;
            }
    float thuong(int a, int b) {
        return a / b;
    }
