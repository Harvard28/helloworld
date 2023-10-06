#include <stdio.h>
int chanle(int a);
int main(){
    int n, i;
    int A[n];
    printf("Nhap so phan tu trong mang : ");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        printf("Nhap cac phan tu trong mang :");
        scanf("%d", &A[i]);
            }
    for(i = 0; i < n; i++){
        chanle(A[i]);
    }

}
int chanle(int a){
    if(a % 2 == 0){
        printf("So chan la : %d\n", a);
    }

        }