#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c,l,i,j;
    printf("Entrer le nombre des lignes: ");
    scanf("%d", &l);

    printf("Entrer le nombre des colones: ");
    scanf("%d", &c);

    int tab[l][c];

    for(i = 0;i < l;i++){
        for(j = 0;j < c;j++){
            printf("Entrer la valeur de ligne %d colone %d: ", i + 1, j + 1);
            scanf("%d", &tab[i][j]);
        }
    }

    for(i = 0;i < l;i++){
        for(j = 0;j < c;j++){
            printf("%d ", tab[i][j]);
    }
        printf("\n");
        }

    int max = tab[0][0];
    int min = tab[0][0];

    for(i = 0; i < l; i++){
        for(j = 0; j < c; j++){
            if (tab[i][j] > max){
                max = tab[i][j];
            }
            if (tab[i][j] < min){
                min = tab[i][j];
            }
        }
    }

    printf("\nLe maximum est: %d\n", max);
    printf("Le minimum est: %d\n", min);

    return 0;
}
