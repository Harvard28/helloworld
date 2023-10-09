#include <stdio.h>
int tongtien();
int main(){
    int soluong, dongia;
    printf("Nhap so luong : ");
    scanf("%d", &soluong);
    printf("Nhap don gia : ");
    scanf("%d", &dongia);
    tongtien(soluong, dongia);

}
int tongtien(int soluong, int dongia, int tong){
    tong = soluong * dongia;
    if(tong < 100){
        tong =tong + (tong * 10 / 100) ;
        printf("tong tien la: %d ", tong );
    } else if( tong >= 100 && tong < 200){
        tong = tong + (tong * 8 / 100) ;
        printf("tong tien la: %d ", tong );
    } else if( tong >= 200){
        tong = tong + (tong * 5 / 100) ;
        printf("tong tien la: %d ", tong );
    }
}