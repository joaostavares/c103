# Algoritmos Recursivos
## REC - Raiz quadrada

Dado um número real positivo x , podemos calcular $\sqrt{x}$ usando o seguinte algoritmo recursivo:

![CodeCogsEqn (1)](https://github.com/joaostavares/c103/assets/65142565/96f6449b-fa15-4707-a9c4-759d90189121)

onde:

- x : é o número do qual se quer calcular a raiz

- x0 : é uma estimativa inicial para $\sqrt{x}$

- ε : é um limitante superior para o erro


Faça um programa que leia os valores de x , x0 e ε, e retorne o valor de $\sqrt{x}$, com 4 casas decimais. Você pode assumir que estes valores serão sempre positivos.

O cálculo deve ser feito usando uma função recursiva.
### Entrada
A entrada consiste 3 valores reais e positivos, correspondentes a x , x0 e ε.
### Saída
O programa deve mostrar o valor de $\sqrt{x}$ , com a precisão desejada.

| Exemplo de entrada | Exemplo de saída |
|--------------------|------------------|
| 125 1 0.001        | 	11.1803         |
| 5 1 0.0001	        | 	2.2361          |
