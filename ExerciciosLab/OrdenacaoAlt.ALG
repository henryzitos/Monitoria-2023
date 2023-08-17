Algoritmo "OrdenacaoAlt"

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

    para i de 1 até 5 passo 1 faça
        para j de 1 até 5 passo 1 faça
            se (v[i] < v[j]) entao
                aux <- v[i]
                v[i] <- v[j]
                v[j] <- aux
            fimse
        fimpara
    fimpara

    escreval("")
    escreval("O vetor ordenado é:")
    para i de 1 até 5 passo 1 faça
        escreva(" ", v[i])
    fimpara

Fimalgoritmo
