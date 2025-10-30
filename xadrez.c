#include <stdio.h>

int main (){
    //variaveis utilizadas no futuro
    int bispo =0 , rainha = 0 , cavalo =0;

    //torre movendo 5 casas para direita
    for (int i = 0; i < 5; i++)
    {
        printf("Torre moveu-se para: Direita\n"); //imprimindo a movimentaçao da peça
    }

    printf("\n"); // separando as peças

    //bispo movendo na diagonal
    do
    {
       printf("Bispo moveu-se para: Cima, Direita\n");//imprimindo a movimentaçao da peça
       bispo++;
    } while (bispo < 5 );

    printf("\n"); // separando as peças
    
    //rainha movendo para esquerda
    while (rainha <8)

    {
       printf("Rainha moveu-se para: Esquerda\n");//imprimindo a movimentaçao da peça
       rainha++;
    }

    printf("\n"); // separando as peças

    //cavalo movimentando
    for (int j = 0; j <1 ; j++)
    {
       while (cavalo < 2)
       {
        printf("Cavalo Moveu-se Para: Baixo\n"); // imprime baixo 2 vezes
        cavalo++;
       }
       printf("Cavalo Moveu-se Para: Esquerda\n"); // imprime esquerda no final do loop anterior
    }
    
return 0;
}