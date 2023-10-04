#include <stdio.h>
int main(){
    int i, n, tim;
    int A[n];
    printf("Nhap tong so phan tu cua mang: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        printf("Cac phan tu cua mang tai vi tri %d: ", i);
        scanf("%d", &A[i]);
    }
    printf("Nhap phan tu ban muon tim: ");
    scanf("%d", &tim);
        for(i = 0; i < n; i++){
        if(tim == A[i]){
            printf("Phan tu %d duoc tim thay tai vi tri %d\n", tim, i);
        }
    }


}