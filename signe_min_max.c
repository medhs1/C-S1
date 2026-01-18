#include <stdio.h>
#include <stdlib.h>

void signe(float a, float b) {
    if ((a > 0 && b > 0) || (a < 0 && b < 0))
        printf("Les deux variables sont de meme signe. \n");
    else
        printf("Les deux variables ne sont pas de meme signe. \n");
}

float minimum(float a, float b){
    float min;
    if (a>b){
        min = b;
    } else {
        min = a;
}
    return min;
}
float maximum(float a, float b){
    float max;
    if (a<b){
        max = b;
    } else {
        max = a;
    }
    return max;
}

int main()
{
    float A,B,min,max;


    printf("Veullier entrer la valeur de A:\n");
    scanf("%f", &A);
    printf("Veullier entrer la valeur de B:\n");
    scanf("%f", &B);

    signe(A,B);
    min = minimum(A,B);
    max = maximum(A,B);

    printf("Le minimum est: %.2f \n", min);
    printf("Le maximum est: %.2f \n", max);

    return 0;
}
