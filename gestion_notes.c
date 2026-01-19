#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void lecture(int r, float tab[r]) {
    int i;
    for (i = 0; i < r; i++) {
        printf("Entrer la note %d: ", i + 1);
        scanf("%f", &tab[i]);
    }
}

void affichage(int r, float tab[r]) {
    int i;
    printf("Les notes sont: ");
    for (i = 0; i < r; i++) {
        printf(" %.2f |", tab[i]);
    }
    printf("\n");
}

float moyenne(int r, float tab[r]) {
    float myn = 0.0;
    int i;
    for (i = 0; i < r; i++) {
        myn += tab[i];
    }

    if (r > 0) myn /= r;
    return myn;
}

float minimale(int r, float tab[r]) {
    float min = tab[0];
    int i;
    for (i = 1; i < r; i++) {
        if (min > tab[i]) {
            min = tab[i];
        }
    }
    return min;
}

float maximale(int r, float tab[r]) {
    float max = tab[0];
    int i;
    for (i = 1; i < r; i++) {
        if (max < tab[i]) {
            max = tab[i];
        }
    }
    return max;
}

void cherche(int r, float tab[r], float c) {
    int i;
    bool b = false;
    for (i = 0; i < r; i++) {
        if (c == tab[i]) {
            b = true;
            break;
        }
    }
    if (b == true) {
        printf("La note %.2f existe dans le tableau.\n", c);
    } else {
        printf("La note %.2f n'existe pas dans le tableau.\n", c);
    }
}

void occurence(int r, float tab[r], float y) {
    int occ = 0;
    int i;
    for (i = 0; i < r; i++) {
        if (y == tab[i]) {
            occ += 1;
        }
    }
    printf("Le nombre d'occurence de %.2f est: %d\n", y, occ);
}

int main() {
    int n;
    float h, x;

    printf("Entrer le nombre des etudiants: ");
    scanf("%d", &n);

    float notes[n];

    lecture(n, notes);
    affichage(n, notes);

    float mynf = moyenne(n, notes);
    float minf = minimale(n, notes);
    float maxf = maximale(n, notes);

    printf("\n");
    printf("La moyenne est: %.2f\n", mynf);
    printf("La note minimale est: %.2f\n", minf);
    printf("La note maximale est: %.2f\n", maxf);

    printf("Entrer la note chercher: ");
    scanf("%f", &h);
    cherche(n, notes, h);

    printf("\n");
    printf("Entrer une note pour chercher leur occurance: ");
    scanf("%f", &x);
    printf("\n");
    occurence(n, notes, x);

    return 0;
}
