#include <stdio.h>
//Exercícios envolvendo apenas números reais

int main() {
    //predio();
    //notas();
    //kilometros();
    //inss();
    //posto();
    //emprestimo();
}

void predio(){
    float ap, sp, sombra, altura = 0;
    
    printf("\nDigite o tamanho da sombra do prédio: ");
    scanf("%f", &sp);
    printf("\nDigite o tamanho da sua sombra: ");
    scanf("%f", &sombra);
    printf("\nDigite a sua altura: ");
    scanf("%f", &altura);
    
    ap = (sombra / altura) * sp;
    
    printf("\nA altura do prédio deve ser: %.2f", ap);
}

void notas(){
    float semestre, b1, b2, pb1, pb2, pb3, pb4 = 0;
    
    printf("\nDigite a nota da primeira prova do primeiro bimestre: ");
    scanf("%f", &pb1);
    printf("\nDigite a nota da segunda prova do primeiro bimestre: ");
    scanf("%f", &pb2);
    b1 = (pb1 + pb2) / 2;
    
    printf("\nDigite a nota da primeira prova do segundo bimestre: ");
    scanf("%f", &pb3);
    printf("\nDigite a nota da segunda prova do segundo bimestre: ");
    scanf("%f", &pb4);
    b2 = (pb3 + pb4) / 2;
    
    semestre = (b1 + b2) / 2;
    printf("\nA nota semestral do aluno é: %.2f", semestre);
}

void kilometros(){
    float ms, kmh = 0;
    
    printf("\nDigite a velocidade em m/s: ");
    scanf("%f", &ms);
    
    kmh = ms * 3.6;
    printf("\nA velocidade convertida para km/h é: %.2f", kmh);
}

void inss(){
    float desconto, salario = 0;
    
    printf("\nDigite um salário bruto: R$");
    scanf("%f", &salario);
    
    desconto = salario * (11.0/100.0);
    if (desconto > 334.29){
        desconto = 334.29;
    }
    
    printf("\nO desconto do INSS do seu salario é: R$%.2f", desconto);
}

void posto(){
    float l, t
}
