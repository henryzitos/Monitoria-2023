#include <stdio.h>

int main(){
  mms();
  vn();
}

void mms(){
    int v[5];
    int soma = 0;
    
    for (int i = 0; i < 5; i++) {
        printf("\nDigite um número: ");
        scanf("%i", &v[i]);
    }
    
    int menor = v[0];
    for (int i = 0; i < 5; i++) { 
        if (menor == 0){
            menor = v[i];
        }
    }
    
    /* 
    menor <- v[1]
    para i de 1 até 5 passo 1 faça
        se (menor = 0) entao
          menor <- v[i]
        fimse
    fimpara
    */
    
    int maior = v[0];
    
    for (int i = 0; i < 5; i++) {
        if (v[i] % 2 == 0){
            if (v[i] > maior){
                maior = v[i];
            }
        } else
        if (v[i] % 2 != 0){
            if (v[i] < menor){
                menor = v[i];
            }
        }
    }
    
    for (int i = 0; i < 5; i++) {
        soma = soma + v[i];
    }
    
    if (maior % 2 == 0){
        printf("\nO maior número par do vetor é: %i", maior);
    } else if (maior == 0){
        printf("\nSeu maior número ímpar não existe.");
    } else {
        printf("\nNão há números pares no seu vetor.");
    } 
    
    if (menor % 2 != 0){
        printf("\nO menor número ímpar do vetor é: %i", menor);   
    } else if (menor == 0){
        printf("\nSeu menor número ímpar não existe.");
    } else {
        printf("\nNão há números ímpares no seu vetor.");
    }
    
    printf("\nA soma de todos números do vetor é: %i", soma);
}

void vn(){
    int va[5], vb[5], vcs[5], vcj[10], vci[10];
    int t = 5;
    int c = 0;
    
    for (int i= 0; i< 5; i++) {
        printf("\nDigite um número: ");
        scanf("%i", &va[i]);
    }
    for (int i = 0; i < 5; i++) {
        printf("\nDigite outros números: ");
        scanf("%i", &vb[i]);
    }
    printf("\nVetor com soma:");
    for (int i = 0; i < 5; i++) {
        vcs[i] = va[i] + vb[i];
        printf("\n %i", vcs[i]);
    }
    
    for (int i = 0; i < 5; i++) {
        vcj[i] = va[i];
    }
    for (int i = 5; i < 10; i++) {
        vcj[i] = vb[i-5];
    }
    printf("\nVetor com junção:");
    for (int i = 0; i < 10; i++) {
        printf(" %i", vcj[i]);
    }
    
    for (int i = 0; i < t; i++) {
        vci[c++] = va[i];
        vci[c++] = vb[i];
    }
    printf("\nVetor intercalado:");
    for (int i = 0; i < 10; i++) {
        printf(" %i", vci[i]);
    } 
}
