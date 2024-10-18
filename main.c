#include <stdio.h>
int main() {
    int rows,i,k,j;
    char symbol = '*';
    rows =13;
    int pySym = 2*rows-1;
    int space = pySym/2;
    for(i=0;i<=rows;i++) {
        for(k=0;k<i;k++) {
            printf("%c",symbol);
        }
        printf("\n");
    }

    for(i = 0; i <= rows; i++){
        for(j=0;j<=space;j++) {
            printf(" ");
        }
        space -=1;
        for(k=0; k<i*2-1; k++) {
            printf("%c",symbol);
        }
        printf("\n");

    }
    return 0;

}
