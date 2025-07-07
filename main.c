#include <stdio.h>

int Date() {
    int j, m, a;
    printf("saisir le jour, le mois et l'année :");
    scanf("%d %d %d", &j, &m, &a);

    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
        if (j < 31 && m != 12) {
            j = j + 1;
            m = m;
            a = a;
        } else if (m == 12 && j == 31){
            j = 1;
            m = 1;
            a = a + 1;
        } else if ( j== 31 && m != 12) {
            j = 1;
            m = m + 1;
            a =a;
        } else if (j < 31 && m == 12) {
            j = j + 1;
            m = m;
            a = a;
        } else {
            printf("Erreur : jour invalide pour le mois %d\n", m);
            return -1;
        }

        }
        
    else if( m == 4 || m == 6 || m == 9 || m == 11) {
        if ( j < 30) {
            j = j + 1;
            m = m;
            a = a;
        } else if(j == 30) {
            j = 1;
            m = m + 1;
            a = a;
        } else {
            printf("Erreur : jour invalide pour le mois %d\n", m);
            return -1;
        }

    }
    else if ( m == 2) {
        if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0) { // Année bissextile
            if (j < 29) {
                j = j + 1;
                m = m;
                a = a;
            } else if (j == 29) {
                j = 1;
                m = m + 1;
                a = a;
            } else {
                printf("Erreur : jour invalide pour le mois %d\n", m);
                return -1;
            }
        } else { // Année non bissextile
            if (j < 28) {
                j = j + 1;
                m = m;
                a = a;
            } else if (j == 28) {
                j = 1;
                m = m + 1;
                a = a;
            } else {
                printf("Erreur : jour invalide pour le mois %d\n", m);
                return -1;
            }
        }
    } else {
        printf("Erreur : mois invalide\n");
        return -1;
    }

    printf("le lendemain est : %d/%d/%d\n", j, m, a);
    return 0;
}

int main() {
    Date();
    return 0;
}