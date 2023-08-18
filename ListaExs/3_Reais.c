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
    float l, d, t = 0;
    char c;
    
    printf("\nDigite quantos litros de combustível foram colocados: ");
    scanf("%f", &l);
    fflush(stdin);
    printf("\nDigite qual o tipo de combustível (A/a para álcool | G/g para gasolina)");
    scanf("%c", &c);
    
    while(c != 'a' && c != 'A' && c != 'g' && c != 'G'){
        printf("\nDigite uma opção válida: ");
        scanf("%c", &c);
    }
    
    if(c == 'a' || c == 'A'){
        if(l <= 25){
            d = 3.8 * (2/100);
            t = l * d;
        } else {
            d = 3.8 * (4/100);
            t = l * d;
        }
        printf("\nCombustível: Álcool");
        printf("\nLitros: %.2f", l);
        printf("\nO total da conta é: R$%.2f ", t);
    }
    
    if(c == 'g' || c == 'G'){
        if(l <= 25){
            d = 4.9 * (3/100);
            t = l * d;
        } else {
            d = 4.9 * (5/100);
            t = l * d;
        }
        printf("\nCombustível: Gasolina");
        printf("\nLitros: %.2f", l);
        printf("\nO total da conta é: R$%.2f", t);
    }
}
