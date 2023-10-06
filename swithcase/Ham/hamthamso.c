#include <stdio.h>
int tong(int a, int b);
int main(){
            int tong1 = tong(2,3);
            printf("Tong la : %d\n", tong1);
    int m, n;
    printf("Nhap hai so: ");
    scanf("%d %d", &m, &n);
        int tong2 = tong(m,n);
    printf("Tong la: %d", tong2);
    return 0;

}
int tong(int a, int b){
    printf("So thu nhat la : %d\n", a);
    printf("So thu hai la : %d\n", b);
    return a + b;

}