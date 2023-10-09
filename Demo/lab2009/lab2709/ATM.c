#include <stdio.h>
//int main(int argc, char *argv[])
int main()
int sodu , a;
{
    printf("Ban da dang nhap thanh cong. Xin chuc mung!\n");
    printf("Ban muon su dung chuc nang nao?\n");
    printf("1. Kiem tra so du\n");
    printf("2. Rut tien\n");
    printf("3. Ket thuc\n");
    printf("Moi ban nhan cac lua chon 1-4\n");

    int choose = 0;
    scanf("%d", & choose);
    if(choose >= 1 && choose <=3){

        switch(choose) {
            case 1:
                printf("So du cua ban: 1000\n");
                break;
            case 2:
                printf("Nhap so tien ban muon rut: \n");
                scanf("%d", &a);
                sodu = sodu - a;
                scanf("Ban da rut %d VND. So du con lai: %d", &a, &sodu);
                break;
            case 3:
                printf("Cam on ban da su dung dich vu ATM. Hen gap lai!\n");
                break;
            default:
                printf("Ban chon chua chinh xac\n");
        }

    }
    else{
        printf("Lua chon cua ban khong phu hop. Moi ban nhap cac so trong pham vi tu 1 toi 3");
    }
    printf("\n");
    return 0;
}