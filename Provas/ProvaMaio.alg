Prova A

Algoritmo ProvaAEx1

Var
a, b, c, i, j, k, x, y inteiro
vvetor[1..130] de inteiro

Inicio

para i de 1 até 130 passo 1 faça
     escreval(Digite o , i , valor.)
     leia(v[i])
fimpara

para j de 1 até 130 passo 1 faça
     se v[j]  10 entao
        para k de j até 130 passo 1 faça
             se (v[k] mod 2 = 0) então
                c - c + 1
                  se (c  4) entao
                     a - v[k]
                  fimse
             fimse
        fimpara
     fimse
fimpara
c - 0
para j de 1 até 130 passo 1 faça
     se v[j] = 50 entao
        para k de j até 1 passo -1 faça
             se (v[k] mod 2 = 1) então
             c - c + 1
               se (c  6) entao
               b - v[k]
               fimse
             fimse
        fimpara
     fimse
fimpara

x - v[1]
y - v[1]

para j de 1 até 130 passo 1 faça
     se v[j]  x entao
     x - v[j]
     fimse
     se v[j]  y entao
     y - v[j]
     fimse
fimpara

escreval(O terceiro número par maior que 10 é , a)
escreval(O quinto número ímpar menor que 50 é , b)
escreval(A multiplicação do menor valor digitado pelo maior valor digitado é , xy)

Fimalgoritmo
---------------------
Algoritmo ProvaAEx2

Var
n, i, st, sc inteiro
v vetor[1..80] de inteiro

Inicio
para i de 1 até 80 passo 1 faça
     escreval(Digite um número POSITIVO.)
     leia(n)
     enquanto (n  0) faca
          escreval(Número inválido. Digite um número POSITIVO.)
          leia(n)
     fimenquanto
     v[i] - n
fimpara

para i de 1 até 80 passo 1 faça
     se(v[i] mod 3 = 0) entao
          st - st + v[i]
     fimse
     se(v[i] mod 5 = 0) entao
         sc - sc + v[i]
     fimse
fimpara

escreval(A soma dos números múltiplos de três e de cinco que estão no vetor são , st + sc)
Fimalgoritmo
---------------------
Algoritmo ProvaAEx3

Var
p, i, j, y, k inteiro

Inicio
escreval(Digite o elemento a calcular )
leia(p)
i - 0
j - 1
k - 1
enquanto (k = (p-1)) faça
         y - i + j
         i - j
         j - y
         k - k + 1
fimenquanto
escreval(Valor calculado = , j)

Fimalgoritmo

---
Prova B
---

Algoritmo ProvaBEx1

Var
a, b, c, i, j, k, x, y inteiro
vvetor[1..100] de inteiro

Inicio

para i de 1 até 100 passo 1 faça
     escreval(Digite o , i , valor.)
     leia(n)
     enquanto (n  0) faça
              escreval(Número negativo. Digite um número positivo )
              leia(n)
     fimenquanto
     v[i] - n
fimpara

para j de 1 até 100 passo 1 faça
     se v[j]  10 entao
        para k de j até 100 passo 1 faça
             se (v[k] mod 2 = 0) então
                c - c + 1
                  se (c  4) entao
                     a - v[k]
                  fimse
             fimse
        fimpara
     fimse
fimpara
c - 0
para j de 1 até 100 passo 1 faça
     se v[j] = 50 entao
        para k de j até 1 passo -1 faça
             se (v[k] mod 2 = 1) então
             c - c + 1
               se (c  6) entao
               b - v[k]
               fimse
             fimse
        fimpara
     fimse
fimpara

x - v[1]
y - v[1]

para j de 1 até 100 passo 1 faça
     se v[j]  x entao
     x - v[j]
     fimse
     se v[j]  y entao
     y - v[j]
     fimse
fimpara

escreval(O terceiro número par maior que 10 é , a)
escreval(O quinto número ímpar menor que 50 é , b)
escreval(A soma do menor valor digitado pelo maior valor digitado é , x+y)

Fimalgoritmo
---------------------
Algoritmo ProvaBEx2

Var
n, i, st, sc inteiro
v vetor[1..4] de inteiro

Inicio
para i de 1 até 4 passo 1 faça
     escreval(Digite um número POSITIVO.)
     leia(n)
     enquanto (n  0) faca
          escreval(Número inválido. Digite um número POSITIVO.)
          leia(n)
     fimenquanto
     v[i] - n
fimpara

para i de 1 até 4 passo 1 faça
     se(v[i] mod 2 = 0) entao
         st - st + v[i]
     fimse
     se(v[i] mod 3 = 0) entao
         sc - sc + v[i]
     fimse
fimpara

escreval(A multiplicação dos números múltiplos de dois e de três que estão no vetor são , st  sc)

Fimalgoritmo
---------------------
Ex.3 são iguais nas duas listas!
