#include<stdio.h>
//int hoadon(){
int main() {
    int cacdouong = 0;
    float tonggiatien = 0;
    char soluong[100];
    char luachon;
    float giatien;
    do {
        printf("Ban muon goi mon gi: ");
        scanf("%d", soluong);
        fflush(stdin);
        printf("Gia tien: ");
        scanf("%f", &giatien);
        tonggiatien += giatien;
        cacdouong++;
        printf("Ban co muon goi them do?(YorN):");
        scanf(" %c", &luachon);

    } while (luachon == 'y' || luachon == 'Y');
    if (cacdouong > 0) {
        double thanhtien = tonggiatien;
        printf("Tong gia tien phai tra: %2f\n", thanhtien);
    } else {
        printf("Khong co mon nao duoc chon.\n");
    }
}