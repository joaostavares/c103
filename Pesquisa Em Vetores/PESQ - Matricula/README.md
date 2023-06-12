# Pesquisa em vetores
## PESQ - Matricula
A Robélia, chefe das secretárias do Inatel está querendo organizar o registro acadêmico dos alunos, e pediu para você ajudá-la.
Ela precisa de um sistema de armazene o nome de cada aluno, bem como seu curso e número de matrícula. Depois ela quer digitar o nome de um aluno, e o sistema deve retornar o curso e o nome de matrícula deste aluno.

Será que você consegue ajudá-la?

### Entrada

A entrada consiste de várias linhas:
- a primeira irá conter um único número inteiro N (1<=N<=10000), que indica a quantidade de alunos;

- Para cada aluno, será digitadas três linhas:

    - a primeira irá conter o nome do aluno;

    - segunda, o seu curso;

    - a terceira, seu número de matrícula.

A última entrada será o nome do aluno a ser consultado.

### Saída
Na saída, o programa deve mostrar o nome do aluno, seu número de matrícula e curso do aluno. Se o aluno não for encontrado, seu programa deve mostrar a mensagem "Aluno nao encontrado".

DICA: armazene os dados de cada aluno em um vetor de structs.


| Exemplo de entrada  | Exemplo de saída  |
| ------------- |-------------------|
| 4<br>Jose Carlos<br>Biomedica<br>335<br>Maria Antonia<br>Telecom<br>10347<br>Marcela Araujo<br>Software<br>112<br>Andre de Souza<br>Automacao<br>543<br>Marcela Araujo | Marcela Araujo<br>Software<br>112 |
| 4<br>Jose Carlos<br>Biomedica<br>335<br>Maria Antonia<br>Telecom<br>10347<br>Marcela Araujo<br>Software<br>112<br>Andre de Souza<br>Automacao<br>543<br>Jesse Rodrigues	   | Aluno nao localizado     |























