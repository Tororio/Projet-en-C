#include <stdio.h>
#include <stdlib.h>

void maximum(int a, int b) {
    printf("Saisir le premier nombre :");
    scanf("%d", &a);

    printf("Saisir le deuxieme nombre : ");
    scanf("%d", &b); 

    if(a < b) 
    {
        printf("le maximum est : %d\n", b); 
    } else if (a > b) 
    {
        printf("Le maximum est %d\n", a);
    } else {
        printf("Les deux nombres sont egaux, %d = %d\n", a, b);
    }
}

int main() {
    int a, b;
    a, b = 2, 4;
    maximum(a, b);
    return 0;
}