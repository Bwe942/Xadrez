#include <stdio.h>

void torre (int numero){
   //movimento da torre
   if (numero >0){
   printf("Direita\n"); //imprime o movimento
      torre(numero - 1);
   }
}

void bispo (int numero){
//define quantas vezes o bispo pras duas direçoes uma externa e uma interna vertical / horizontal
  for (int i = 0 ; i < numero; i++)
  {
   for (int j = 0; j < 1;j++)
   {
      printf("Cima\n"); //imprime o movimento
   }
   printf("Direita\n");//imprime o movimento
  }
}

void rainha (int numero){
//movimento simples igual torre
   if(numero > 0){
      printf("Esquerda\n");
      rainha(numero -1);
   }
}
void cavalo (int numero){
//movimento cavalo
for (int i = 0; i < numero; i++)
{
   for (int j = 0; j < 3; j++)
   {
      // so vai executar se j for menor que 2 que so vai ocorrer no maximo 2 vezes (movimento do cavalo)
      if (j < 2)
      {
         printf("Cima\n");
      } else {
         //movimento em L do cavalo
      printf("Direita\n");
         }
      }
   }  
}

int main (){
   //movimento das peças atraves de recursividade entre parenteses o numero de movimentos de cada peça (direçao está especificada)
   torre(5);
   bispo(5);
   rainha(8);
   cavalo(1);

return 0;
}
   