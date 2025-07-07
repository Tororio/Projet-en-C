#include <stdio.h>

int tableau() {
    int tab[] = {1, 3, 8, 7, 9};
    int n = 5;
    // Tri à bulles décroissant
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (tab[j] < tab[j + 1]) {
                // Échange
                int temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d = %d\n", i, tab[i]);
    }
    return 0;
}

int main() {
    int resultat = tableau();
    printf("%d", resultat);
    printf("\n");
    printf("Success\n");
    return 0;
}