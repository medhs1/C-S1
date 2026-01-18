#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int A[64];
    int i,j = 0;

    printf("Entrer le nombre en decimale: ");
    scanf("%d", &n);

    while(n > 0) {
        A[i] = n % 2;
        n = n / 2;
        i++;
    }

    for(j = 0; j < i; j++) {
        printf("A[%d]: %d \n", j, A[j]);
    }

    printf("En binaire: ");
    for(j = i - 1; j >= 0; j--) {
        printf("%d", A[j]);
    }

    printf("\n");

    return 0;
}
