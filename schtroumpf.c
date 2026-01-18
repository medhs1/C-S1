#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, i, j;
    int schtroumpf = 0;

    printf("Enter la langeur de tableau 1: ");
    scanf("%d", &n1);
    printf("Enter la langeur de tableau 2: ");
    scanf("%d", &n2);

    int tab1[n1];
    int tab2[n2];

    for(i = 0; i < n1; i++){
        printf("Entrer la valeur de tab1 de position %d: ", i);
        scanf("%d", &tab1[i]);
    }
    for(i = 0; i < n2; i++){
        printf("Entrer la valeur de tab2 de position %d: ", i);
        scanf("%d", &tab2[i]);
    }

    for(i = 0; i < n1; i++){
        for(j = 0; j < n2; j++){
        schtroumpf += tab1[i] * tab2[j];
        }
    }

    printf("Le Schtroumpf est: %d", schtroumpf);
    return 0;
}
