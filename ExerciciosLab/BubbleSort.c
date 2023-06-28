#include <stdio.h>

int main(){
    int v[5];
    int aux = 0;
    
    for (int i = 0; i < 5; i++) {
        printf("\nDigite o %i° número: ", i+1);
        scanf("%i", &v[i]);
    }

    printf("\nO vetor sem ordenação é:");
    for (int i = 0; i < 5; i++) {
    printf(" %i", v[i]);
    }
    
    for (int i = 0; i < 5 - 1; i++) {
        for (int j = 0; j < 5 - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                int aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }
    
    printf("\nO vetor ordenado é:");
    for (int i = 0; i < 5; i++) {
        printf(" %i", v[i]);
    }
    
    return 0;
}
