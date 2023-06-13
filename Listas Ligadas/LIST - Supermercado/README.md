# Listas Ligadas
## LIST - Supermercado
Um gerente de supermercado possui duas listas, sendo a primeira com os códigos de produtos que estão no estoque, e a segunda com os códigos dos produtos que já estão disponíveis para venda.
Sempre que um produto novo chega, primeiro ele é adicionado no estoque, e depois é movido para venda, à medida em que os produtos vão sendo vendidos.

Ele precisa de alguém para gerenciar essas listas e contratou você para o serviço.
### Entrada
A primeira linha contém um único inteiro N, que corresponde ao número de operações.
Depois seguem-se N linhas, sendo que cada linha corresponde a uma operação.
Se o primeiro número da linha  for 1, você deverá ler o código do produto e colocá-lo no estoque;
Se for 2, você deverá pegar um elemento do estoque e colocá-lo para venda.
### Saída
A saída deverá mostrar quais elementos estão no estoque e quais estão disponíveis para venda.


| Exemplo de entrada                   | Exemplo de saída             |
|--------------------------------------|------------------------------|
| 5<br>1 15<br>1 19<br>2<br>1 33<br>2	 | 	Estoque: 33<br>Venda: 19 15 |


