#include <stdio.h>

int somma(int a, int b) {
    int risultato = a + b;
    return risultato;
}

int main() {
    int x = 5;
    int y = 3;
    int totale = 0;
    
    for(int i = 0; i < 3; i++) {
        totale = somma(x, y);
        printf("Iterazione %d: %d + %d = %d\n", i, x, y, totale);
        x++;
    }
    
    return 0;
}