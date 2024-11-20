#include <stdio.h>

int formulaArea(int lato1, int lato2){
    int area = lato1 * lato2;
    return area;
}

int main() {
    int inputLato1,inputLato2;

    printf("Inserisci lato 1\n");
    scanf("%d", &inputLato1);
    printf("Inserisci lato 2\n");
    scanf("%d", &inputLato2);
    int risultato = formulaArea(inputLato1,inputLato2);
    printf("L'area del quadrato e': %d", risultato);

    return 0;
}
