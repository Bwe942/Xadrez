#include <stdio.h>

int main (){
    //variaveis utilizadas no futuro
    int bispo =0 , rainha = 0;

    //torre movendo 5 casas para direita
    for (int i = 0; i < 5; i++)
    {
        printf("Torre moveu-se para: Direita\n"); //imprimindo a movimentaçao da peça
    }

    //bispo movendo na diagonal
    do
    {
       printf("Bispo moveu-se para: Cima, Direita\n");//imprimindo a movimentaçao da peça
       bispo++;
    } while (bispo < 5 );

    //rainha movendo para esquerda
    while (rainha <8)
    {
       printf("Rainha moveu-se para: Esquerda\n");//imprimindo a movimentaçao da peça
       rainha++;
    }
    
return 0;
}