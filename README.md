Relatório sobre o Código em C - Método de Newton-Raphson
1. Objetivo do Código
O código tem como objetivo calcular uma aproximação da raiz quadrada de 2 utilizando o Método de Newton-Raphson, que é um método numérico iterativo para encontrar raízes de funções.

3. Estrutura do Código
- Inclusão de Bibliotecas O código inclui as bibliotecas padrão <stdio.h> e <math.h> necessárias para entrada/saída e funções matemáticas. - Definição da Função A função f(x) = x^2 - 2 é definida para representar a equação cujo zero (raiz) queremos encontrar. A raiz dessa função corresponde à raiz quadrada de 2. - Derivada da Função A função df(x) = 2x é a derivada de f(x). O Método de Newton-Raphson utiliza a derivada para calcular a próxima aproximação.
  
3. Algoritmo Principal
- Inicialização x0 é o chute inicial, definido como 1.0. tol é a tolerância de erro (1e-6) para definir quando parar o processo iterativo. max_iter é o número máximo de iterações permitido (100). -

Loop Iterativo: O código realiza as seguintes etapas: 1. Calcula a derivada no ponto atual (dfx0). 2. Verifica se a derivada é zero, o que faria o método falhar (divisão por zero). 3. Calcula a nova aproximação x1 usando a fórmula de Newton-Raphson: x1 = x0 - f(x0)/df(x0) 4. Verifica se a diferença entre x1 e x0 é menor que a tolerância (critério de parada). 5. Se não atingiu o critério de parada, atualiza x0 com x1 e repete. 

- Verificação de Convergência Se atingir o número máximo de iterações sem convergir, o código informa falha. Caso contrário, imprime o valor encontrado para raiz de 2 e o número de iterações realizadas.
  
4. Saída do Programa
O programa imprime: - A raiz de 2 é aproximadamente: 1.4142135624 - Iterações realizadas: 5 (esse número pode variar ligeiramente dependendo do chute inicial e da tolerância).

6. Conclusão
O código demonstra corretamente a aplicação do Método de Newton-Raphson para encontrar a raiz quadrada de 2 de forma eficiente e rápida, utilizando poucos passos para atingir a precisão definida.

Aluno: Alessandro Felipe Souza Cardoso - Cálculo 1 Engenharia Elétrica
Professor: Carlos Antônio
