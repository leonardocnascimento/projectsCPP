/*
A Subindo Bem Confortavelmente (SBC) � uma empresa tradicional, com mais de 50 anos de experi�ncia na fabrica��o de elevadores. Todos os projetos da SBC seguem as mais estritas normas de seguran�a, mas infelizmente uma s�rie de acidentes com seus elevadores manchou a reputa��o da empresa.

Ao estudar os acidentes, os engenheiros da companhia conclu�ram que, em v�rios casos, o acidente foi causado pelo excesso de passageiros no elevador. Por isso, a SBC decidiu fiscalizar com mais rigor o uso de seus elevadores: foi instalado um sensor em cada porta que detecta a quantidade de pessoas que saem e entram em cada andar do elevador. A SBC tem os registros do sensor de todo um dia de funcionamento do elevador (que sempre come�a vazio). Eles sabem que as pessoas s�o educadas e sempre deixam todos os passageiros que ir�o sair em um andar sa�rem antes de outros passageiros entrarem no elevador, mas ainda assim eles t�m tido dificuldade em decidir se a capacidade m�xima do elevador foi excedida ou n�o.

Sua tarefa � escrever um programa que, dada uma sequ�ncia de leituras do sensor e a capacidade m�xima do elevador, determinar se a capacidade m�xima do elevador foi excedida em algum momento.

Entrada
A primeira linha da entrada cont�m dois inteiros N e C, indicando o n�mero de leituras realizadas pelo sensor e a capacidade m�xima do elevador, respectivamente (1 ? N ? 1000 e 1 ? C ? 1000). As N linhas seguintes cont�m, cada uma, uma leitura do sensor. Cada uma dessas linhas cont�m dois inteiros S e E, indicando quantas pessoas sa�ram e quantas pessoas entraram naquele andar, respectivamente (0 ? S ? 1000 e 0 ? E ? 1000).

Sa�da
Seu programa deve imprimir uma un�ca linha contendo o caractere ?S?, caso a capacidade do elevador tenha sido excedida em algum momento, ou o caractere ?N? caso contr�rio.
*/