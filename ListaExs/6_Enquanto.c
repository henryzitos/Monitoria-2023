#include <stdio.h>
//Exercícios usando ENQUANTO

int main(){
    todos();
    decrescente();
    pares();
    soma();
}

void todos(){
    int n = 1;

    printf("\nOs números de 1 a 100 são: ");
    while(n <= 100){
        printf("\n%i", n);
        n++;
    }
}

void decrescente(){
    int n = 100;
    
    printf("\nOs números de 100 a 1 são: ");
    while(n >= 1){
        printf("\n%i", n);
        n--;
    }
}

void pares(){
    int n = 1;
    
    printf("\nOs números pares de 1 até 100 são: ");
    while(n <= 100){
        if(n % 2 == 0){
            printf("\n%i", n);
        }
        n++;
    }
}

void soma(){
    int n = 1;
    int s = 0;
    
    while(n <= 100){
        printf("\n%i", n);
        s = s + n;
        n++;
    }
    
    printf("\nA soma dos números de 1 até 100 é: %i", s);
}
