#include <stdio.h>

int main() {
    int num;
        printf("writes an ASCII number between 0 and 255: ");
        scanf("%d", &num);
        printf("the symbol is = %c",
               num,(char)num);
    printf("the charcter is = %c tem o ASCII number %d\n");
}