#include <stdio.h>
char xeploai();
int mark;
int main(){
    printf("Enter mark: ");
    scanf("%d", &mark);
    xeploai(mark);

}
char xeploai(int mark1){
    if(mark1 >= 90){
        printf("Grade: A\n");
        return 'A';
    } else if(mark1 >= 80 && mark1 < 90){
        printf("Grade: B\n");
        return 'B';
            }
    else if(mark1 >= 70 && mark1 < 80){
        printf("Grade: C\n");
        return 'C';
    }
    else if(mark1 >= 60 && mark1 < 70){
        printf("Grade: D\n");
        return 'D';
    }
    else if(mark1 < 60){
        printf("Grade: F\n");
        return 'F';
    }
}