#include <stdio.h>
#include <stdlib.h>

const char* priceOff[7] = {
    "Domingo: Um Refrigerante gratis",
    "Segunda: Desconto de 30%",
    "Terça: Desconto de 40%",
    "Quarta: Compre uma e leve duas :)",
    "Quinta: Desconto de 20%",
    "Sexta: Desconto de 10%",
    "Sabado: Sem promoção :("
};

void listAllPriceOff(bool withCounter) {
    for (int i = 0; i < 7; i++) {
        if(withCounter == false){
            printf("\n \t %s",priceOff[i]);
}
        else{
            printf("\n \t%i",i);
            printf(". %s",priceOff[i]);
}
    }
    printf("\n \n \n");
}

void applyDiscount(float pricePizza){
    int i;
    printf("\n Selecione o desconto da pizza: \n");
    listAllPriceOff(true);
    printf("Digite o numero do desconto: ");
    scanf("%i",&i);
    switch (i)
    {
    case 0 /* constant-expression */:
        printf("\nCuidado, coquinha geladona saindo na FAIXA!!!");
        printf("\nO preço da sua pizza ainda é de: %f",pricePizza);
        break;
    case 1 /* constant-expression */:
        pricePizza = pricePizza * 0.7;
        printf("\nNão tenha um ataque cardiaco, sim, o desconto é de 30%");
        printf("\nO preço da pizza agora é de apenas: %f",pricePizza);
        break;

    case 2 /* constant-expression */:
        pricePizza = pricePizza * 0.6;
        printf("\nNão tenha um ataque cardiaco, sim, o desconto é de 40%");
        printf("\nO preço da pizza agora é de apenas: %f",pricePizza);
        break;

    case 3 /* constant-expression */:
        printf("\nOpa já vai assinando a academia para se manter no peso, pois, Hoje vc vai levar DUAS PIZZAS PELO VALOR DE UMA ");
        printf("\nDuas pizzas por apenas: %f",pricePizza);
        break;


    case 4 /* constant-expression */:
        pricePizza = pricePizza * 0.8;
        printf("\nChegou meio tarde na promoção, mas tudo bem, tome um desconto de 20%");
        printf("\nO preço da pizza agora é de apenas: %f",pricePizza);
        break;

    case 5/* constant-expression */:
        pricePizza = pricePizza * 0.9;
        printf("\nÉ hj so temos um desconto de 10%, mas é melhor que nada né");
        printf("\nO preço da pizza agora é de: %f",pricePizza);
        break;

    case 6/* constant-expression */:
        printf("\nDesculpa sem nada por hoje amigo :(");
        printf("\nO preço da pizza ainda é de: %f",pricePizza);
        break;

    default:
        system("clear");
        printf("Não listado, por favor insira um valor valido");
        applyDiscount(pricePizza);
        break;
    }
    printf("\n \n \n Obrigado por comprar na pizzaria Google \n \n \n");
}
void sell() {
    float price;
    int i;
    printf("\n Digite o valor da pizza: ");
    scanf("%f",&price);
    printf("\nOkay, o preço da pizza é de: %f", price);
    printf("\nSera aplicado desconto?");
    printf("\nDigite [1] para sim ou Digite [2] para não ");
    scanf("%d",&i);

    if(i == 2){
        printf("Okay pedido realizado com sucesso");
        printf("\n \n \n");
        return;
    }
    applyDiscount(price);
    }


void wellcome(){
    int i;
    printf("*******************************************");
    printf("\n* Bem vindo ao sistema da pizzaria Google *\n");
    printf("*******************************************\n");
    printf("[1] Vender pizza \t [2] Ver promoçoes da semana \t [3] Reiniciar o sistema \t [4] Sair do sistema\n");
    scanf("%d",&i);

    switch (i)
    {
    case 1 /* constant-expression */:
        sell();
        wellcome();
        break;
    
    case 2 /* constant-expression */:
        listAllPriceOff(false);
        wellcome();
        break;
    
    case 3 /* constant-expression */:
        system("clear");
        wellcome();
        break;
    
    case 4 /* constant-expression */:
        exit(0);
        break;

    default:
        system("clear");
        wellcome();
        break;
    }
}

int main(){
    system("clear");
    wellcome();
    return 0;
}
