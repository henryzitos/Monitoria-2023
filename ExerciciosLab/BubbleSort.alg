Algoritmo "BubbleSort"

Var
v: vetor[1..5] de inteiro
aux, i, j: inteiro

Inicio
    aux <- 0
    
    para i de 1 até 5 passo 1 faça
        escreval("Digite o ",i,"° número")
        leia(v[i])
    fimpara

    escreval("O vetor sem ordenação é:")
    para i de 1 até 5 passo 1 faça
            escreva(" ",v[i])
    fimpara
    
    para i de 1 até 6 - 1 passo 1 faça
        para j de 1 até 6 - i - 1 passo 1 faça
            se (v[j] > v[j + 1]) entao
                aux <- v[j]
                v[j] <- v[j + 1]
                v[j + 1] <- aux
            fimse
        fimpara
    fimpara
    
    escreval("")
    escreval("O vetor ordenado é:")
    para i de 1 até 5 passo 1 faça
        escreva(" ", v[i])
    fimpara
    
Fimalgoritmo
