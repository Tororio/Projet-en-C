#include <stdio.h>
//#include <string.h>
#include <stdlib.h>


void calculatrice(int a, int b)
{
    printf("choisir une operation :\n");

    printf("saisir le premier nombre : ");
    scanf("%d", &a);

    printf("choisir le deuxieme nombre : ");
    scanf("%d", &b);

    printf("veuillez choisir une operation :\n");
    printf("1. Additionner\n");
    printf("2. Soustractionner\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulo\n");

    int operation = 0;
    scanf("%d", &operation);

    switch(operation) {
        case 1 :
            printf("resultat : %d\n", a + b);
            break;
        case 2 :
            printf("resultat : %d\n", a - b);
            break;
        case 3 :
            printf("resultat : %d\n", a * b);
            break;;
        case 4 :
            printf("resultat : %d\n", a / b);
            break;
        case 5 :
            printf("resultat : %d\n", a % b);
            break;
        default :
            printf("operation invalides\n");
            break;
    }


}

int main() {
    int a, b;
    calculatrice(a, b);

    return 0;
} 