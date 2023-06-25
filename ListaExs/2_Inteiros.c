#include <stdio.h>
//Ex. sobre Números inteiros da lista do 2º bimestre 

int main() {
    sucessor();
    divisao();
    idade();
    invertido();
    classificacao();
    modulo();
    par();
    maior();
    dias();
    soma();
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

void idade(){
    int i, a, m, d = 0;
    
    printf("\nDigite sua idade em dias: ");
    scanf("%i", &i);
    
    a = i / 365;
    m = (i % 365) / 31;
    d = (i % 365) % 31;
    
    printf("\nVocê tem %i anos, %i meses e %i dias de idade.", a, m, d);
}

void invertido(){
    int n, a1, a2, a3 = 0;
    
    printf("\nDigite um número com três algarismos: ");
    scanf("%i", &n);
    
    while(n < 100 || n > 999){
        printf("\nNúmero inválido. Digite um número com TRÊS algarismos: ");
        scanf("%i", &n);
    }
    
    a1 = n % 10;
    a2 = (n / 10) % 10;
    a3 = n / 100;
    
    printf("\nO número invertido é: %i%i%i", a1, a2, a3);
}

void classificacao(){
    int n = 0;
    
    printf("\nDigite qualquer número: ");
    scanf("%i", &n);
    
    if(n>0){
        printf("\nO número digitado é positivo.");
    } else if (n<0) {
        printf("\nO número digitado é negativo.");
    } else {
        printf("\nSeu número é zero. :P");
    }
}

void modulo(){
    int n = 0;
    
    printf("\nDigite um número: ");
    scanf("%i", &n);
    
    if(n<0){
        n = n * -1;
    }
    
    printf("\nO módulo de seu número é: %i", n);
}

void par(){
    int n = 0;
    
    printf("\nDigite um número: ");
    scanf("%i", &n);
    
    if(n % 2 == 0){
        printf("\nO número digitado é par.");
    } else {
        printf("\nO número digitado é ímpar.");
    }
}

void maior(){
    int n[3];
    int m = 0;
    
    for (int i = 0; i < 3; i++) {
        printf("\nDigite o %iº número: ", i + 1);
        scanf("%i", &n[i]);
    }
    
    for (int i = 0; i < 3; i++) {
        if (m < n[i]){
            m = n[i];
        }
    }
    
    printf("\nO maior número digitado foi: %i", m);
}

void dias(){
    int m = 0;
    
    printf("\nDigite o número de um mês: ");
    scanf("%i", &m);
    
    while(m <= 0 || m > 12){
        printf("\nMês não existente. Digite um número de um mês entre 1 a 12: ");
        scanf("%i", &m);
    }
    
    if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12){
        printf("\nO mês tem 31 dias.");
    } else if (m == 4 || m == 6 || m == 9 || m == 11){
        printf("\nO mês tem 30 dias.");
    } else if (m == 2){
        printf("\nO mês tem 28 dias.");
    }
}

void soma(){
    int n[3];
    int s = 0;

    for (int i = 0; i < 3; i++) {
        printf("\nDigite o %iº valor: ", i + 1);
        scanf("%i", &n[i]);
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2 - i; j++) {
            if (n[j] > n[j + 1]) {
                int t = n[j];
                n[j] = n[j + 1];
                n[j + 1] = t;
            }
        }
    }

    s = n[1] + n[2];

    printf("\nA soma dos dois maiores valores é: %i", s);
}
