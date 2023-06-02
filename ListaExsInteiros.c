#include <stdio.h>
//Ex. sobre Números inteiros da lista do 2º bimestre 

int main() {
    sucessor();
    divisao();
}

void sucessor(){
    int n, s = 0;
    
    printf("\nDigite um número: ");
    scanf("%i", &n);
    
    s = n + 1;
    printf("\nO sucessor do número digitado é: %i", s);
}

void divisao(){
    int a, b, q, r = 0;
    
    printf("\nDigite o 1º número: ");
    scanf("%i", &a);
    printf("\nDigite o 2º número: ");
    scanf("%i", &b);
    
    q = a / b;
    r = a % b;
    
    printf("\nO resultado da divisão é: %i", q);
    printf("\nO resto da divisão é: %i", r);
}