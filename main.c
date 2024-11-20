#include <stdio.h>

int area(int lato1, int lato2){
    int risultato = lato1 * lato2;
    return risultato;
}

int main() {
    int a,b;

    printf("Inserisci lato 1\n");
    scanf("%d", &a);
    printf("Inserisci lato 2\n");
    scanf("%d", &b);
    int c = area(a,b);
    printf("L'area del quadrato e': %d", c);

    return 0;
}
