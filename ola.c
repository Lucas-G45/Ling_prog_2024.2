 #include <stdio.h>
 #include <stdlib.h>

 void main () 
 {
    int x=0; //criando variável inteira "x"
    printf("Valor de X: %d\n", x);
    x++;
    printf("Valor de X: %d\n", x);

    float y = 12.345678; //criando variável real "y"
    printf("Valor de y: %f\n", y); //Variável com todas as casas decimais
    printf("Valor de y com 2 casas: %.2f\n", y); //Variável com apenas 2 casas decimais

   char sexo = 'm'; // A variável do comando "char" sempre deve estar entre apóstrofos
   printf("Sexo: %c\n", sexo);

   char nome[30] = "Gabriel"; // Aqui foi criado um vetor com 30 espaços para caracteres
   printf("Nome: %s\n", nome); // usa-se "%s" porque se trata de um vetor
   printf("Primeira letra: %c\n", nome[0]);

   printf("Digite o valor de x: \n");
   scanf("%d", &x);
   printf("O valor digitado para x foi: \n");

   printf("Olá mundo! \n");


 }