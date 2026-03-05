//SUPER TRUNFO
//incia-se o código-fonte com a inserção da biblioteca a ser usada
//após a inserção da biblioteca, a próxima linha representará o início da programação

#include <stdio.h>
int main( ){

//identificacao das variaveis da carta 1
char cartast[3];
char estado[2];
char codigoestado [5];
char nomedacidade [30];
int populacao = 1;
float areadacidade;
float pib;
int pontosturisticos = 2;

//separando a carta1
printf("*****CARTA 1***** \n");

//identificando as cartas e imprimindo
printf("Carta: \n", cartast);
scanf("%s", &cartast);

//identificando os estados e imprimindo
printf("Estado: \n", estado);
scanf("%s", &estado);

//inserindo o codigo do estado e imprimindo
printf("Código: \n", codigoestado);
scanf("%s", &codigoestado);

//inserindo o nome da cidade e imprimindo
printf("Nome da Cidade: \n", nomedacidade);
scanf("%s", &nomedacidade);

//inserindo populacao e imprimindo
printf ("População: \n", populacao);
scanf ("%d", &populacao);

//inserindo a area da cidade e imprimindo
printf ("Área: \n", areadacidade);
scanf ("%.2f", &areadacidade);

//inserindo pib e imprimindo
printf("PIB: \n", pib);
scanf("%.2f", &pib);

//inserindo numero de pontos turisticos e imprimindo
printf("Numeros de pontos turisticos: \n", pontosturisticos);
scanf("%d", &pontosturisticos);

//identificacao das variaveis da carta 2
char cartast2[3];
char estado2[2];
char codigoestado2 [5];
char nomedacidade2 [30];
int populacao2 = 3;
float areadacidade2;
float pib2;
int pontosturisticos2 = 4;

//separando a carta2
printf("******CARTA 2******* \n");

//identificando as cartas e imprimindo
printf("Carta: \n", cartast2);
scanf("%s", &cartast2);

//identificando os estados e imprimindo
printf("Estado: \n", estado2);
scanf("%s", &estado2);

//inserindo o codigo do estado e imprimindo
printf("Código: \n", codigoestado2);
scanf("%s", &codigoestado2);

//inserindo o nome da cidade e imprimindo
printf("Nome da Cidade: \n", nomedacidade2);
scanf("%s", &nomedacidade2);

//inserindo populacao e imprimindo
printf("População: \n" , populacao2);
scanf("%d", &populacao2);

//inserindo a area da cidade e imprimindo
printf("Área: \n", areadacidade2);
scanf("%.2f", &areadacidade2);

//inserindo pib e imprimindo
printf("PIB: \n", pib2);
scanf("%.2f", &pib2);

//inserindo numero de pontos turisticos e imprimindo
printf("Numeros de pontos turisticos: \n", pontosturisticos2);
scanf("%d", &pontosturisticos2);


return 0;
}