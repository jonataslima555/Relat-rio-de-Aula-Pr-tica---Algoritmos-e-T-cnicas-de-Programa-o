#include <stdio.h>

int main() {
    int i, max, min;
    int potencia[20];

    printf("Digite 20 valores de potencia:\n");
    for(i = 0; i < 20; i++) {
        scanf("%d", &potencia[i]);
    }

    max = min = potencia[0];
    for(i = 1; i < 20; i++) {
        if(potencia[i] > max) {
            max = potencia[i];
        }
        if(potencia[i] < min) {
            min = potencia[i];
        }
    }

    printf("O valor máximo atingido foi: %d\n", max);
    printf("O valor mínimo atingido foi: %d\n", min);

    return 0;
}
