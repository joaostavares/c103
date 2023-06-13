# Listas Ligadas
## LIST - Don rafoni
Don Rafoni mantém um registro de todas as pessoas que lhe devem dinheiro ou favores. Para cada devedor, ele registra o nome e o valor do empréstimo concedido.
Para facilitar as coisas, para cada novo empréstimo concedido, Don Rafoni insere mais um elemento na lista; desta forma, um "cliente" pode ter vários registros.
Cada vez que algum devedor paga todas as suas dívidas, Don Rafoni remove-o de seu cadastro.

A sua tarefa é desenvolver um sistema que cadastre todos os empréstimo concedidos por Don Rafoni, e elimine os elementos, à medida que forem pagos.

IMPORTANTE: não se esqueça de liberar a memória utilizada pela lista!

### Entrada
A entrada consiste de várias linhas:
a primeira linha consiste de um único número inteiro, que corresponde ao número N de empréstimos concedidos.
A seguir são mostrados os nomes e os empréstimos dos N "clientes" de Don Rafoni. Veja que um cliente pode contrair mais que um empréstimo.
A última linha contém o nome do "cliente" que pagou todas as suas dívidas. 
### Saída
Na saída, o programa deve mostrar o nome e a dívida de cada "cliente" que ainda está devendo para o Don Rafoni.

| Exemplo de entrada      | Exemplo de saída |
|-------------------------|------------------|
| 5<br>Antonio Giovanni<br>10000<br>Benito Cesare<br>12000<br>Maria Bernardina<br>5000<br>Maria Bernardina<br>7000<br>Carlos Bernardes<br>20000<br>Maria Bernardina| 	  <br>Antonio Giovanni<br>10000<br>Benito Cesare<br>12000<br>Carlos Bernardes<br>20000     |

Obs.: O exemplo de saida no portal de exercicios está com uma linha a mais, com base no resultado da avaliação do codigo eu removi a última linha do exemplo de saída acima.

