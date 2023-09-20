#include <stdio.h>
//int 75() {
 //void main (){
    char c;
    printf("Please enter a character: ");
    scanf("%c", &c);

    if (c >= 'A' && c <= 'Z')
        printf("Lowercase charcacter = %c", c + 'a' - 'A');
    else
        printf("Character Entered is = %c", c);
}
