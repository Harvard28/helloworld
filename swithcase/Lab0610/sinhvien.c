#include <stdio.h>
int main() {
    int n, i;
    int truot = 0;
    printf("Nhap so luong sinh vien : ");
    scanf("%d", &n);
    float A[n];
    for (i = 0; i < n; i++) {
        printf("Nhap diem cho sinh vien %d:", i + 1);
        scanf("%f", &A[i]);
        if (A[i] < 5)
            truot++;

        }
        printf("So luong sinh vien da truot mon: %d", truot);

}
