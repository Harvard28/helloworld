#include <stdio.h>
void draw(int n, int m);
void draw(int n, int m) {
    for (int i = 0; i < n; i++) {
        printf("\n");
        for (int j = 0; j < m; j++)
            printf("*");
    }
}
int main(){
        draw(5, 6);
        }
