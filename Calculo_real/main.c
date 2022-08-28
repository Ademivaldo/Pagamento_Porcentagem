#include <stdio.h>
#include <stdlib.h>

float calculoporcentagem(float porcento, float preco){
    float retorno;
    retorno =
}

int main()
{
    int nPedidos, i=0;
    char produtos[sizeof(nPedidos)][30];
    float preco[sizeof(nPedidos)], porcento;

    printf("Digite quantos produtos foram vendidos: ");
    scanf("%d", &nPedidos);

    for (i; i < nPedidos; i++) {
        printf("Digite o nome do produto: #%d ", i+1);
        scanf("%s", &produtos[i]);
        printf("Digite o preco do produto: #%d ", i+1);
        scanf("%f", &preco[i]);
        printf("\n");
        }



    for(i=0;i < nPedidos; i++) {
        printf("Produto #%d nome: %s valor: %.2f \n",i+1, produtos[i], preco[i]);
    }

    return 0;
}
