#include <stdio.h>
//Ex. Poligonos da Lista do 2o Bimestre

int main(){
	retangulo();
	circulo();
	triangulo();
}

void retangulo(){
	float x, y, a, p = 0;

	printf("Digite o tamanho da base do seu retângulo: ");
	scanf("%f", &x);
	printf("\nDigite o tamanho da altura do seu retângulo: ");
	scanf("%f", &y);

	a = x * y;
	p = (x*2) + (y*2);
	printf("\nA área do retângulo é: %.2f", a);
	printf("\nO perímetro do retângulo é: %.2f", p);
}

void circulo(){
    float r, a, p = 0;

    printf("\nDigite o raio da circunferência: ");
    scanf("%f", &r);

    a = 3.14 * (r * r);
    p = 2 * 3.14 * r;
    printf("\nA área do círculo é: %.2f", a);
    printf("\nO perímetro do círculo é: %.2f", p);
}

void triangulo(){
    float l[3];
    float p = 0;

    for (int i = 0; i < 3; i++){
        printf("\nDigite o %io lado do seu triângulo: ", i + 1);
        scanf("%f", &l[i]);
        p = p + l[i];
    }

    printf("\nO perímetro do seu triângulo é: %.2f", p);
}
