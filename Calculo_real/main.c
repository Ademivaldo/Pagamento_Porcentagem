#include <stdio.h>
#include <stdlib.h>

float calculoporcentagem(float porcento){
    float retorno;
    retorno = porcento / 100;
    return retorno;
}

int main()
{
    // declarações
    int nPedidos, i=0;
    char produtos[sizeof(nPedidos)][30];
    float preco[sizeof(nPedidos)], porcento[sizeof(nPedidos)];

    // captura da quantidade de produtos
    printf("Digite quantos produtos foram vendidos: ");
    scanf("%d", &nPedidos);

    // loop para preencher preço e nome
    for (i; i < nPedidos; i++) {
        printf("Digite o nome do produto: #%d ", i+1);
        scanf("%s", &produtos[i]);
        printf("Digite o preco do produto: #%d ", i+1);
        scanf("%f", &preco[i]);
        printf("\n");
    }

    // lop para dar a porcentagem de cada produto
    for (i=0; i < nPedidos; i++) {
        printf("Qual a porcentagem do vendedor sobre o produto: %s ",produtos[i]);
        scanf("%f",&porcento[i]);
        printf("\n");
    }

    // calculos
    for (i=0; i < nPedidos; i++) {
        printf("produto #%d %s: ",i+1, produtos[i]);
        printf("%.2f",(calculoporcentagem(porcento[i] * preco[i])));
        printf("\n");
    }



//    for(i=0;i < nPedidos; i++) {
  //      printf("Produto #%d nome: %s valor: %.2f \n",i+1, produtos[i], preco[i]);
    //}

    return 0;
}
