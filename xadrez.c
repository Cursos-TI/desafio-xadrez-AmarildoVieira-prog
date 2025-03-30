#include <stdio.h>
#include <stdlib.h>

int main(){

int peca;


printf("Bem vindo ao nosso jogo de xadrez!\n");

for (peca= 0; peca<1 || peca>4; peca)
{   

//OPÇÕES DE PEÇAS JOGAVÉIS

printf("Opções de peças que você pode mover:\n");
printf("1.TORRE\n");
printf("2.BISPO\n");
printf("3.CAVALO\n");
printf("4.RAINHA\n");
printf("Escolha uma das opções acima:\n");
scanf("%d",&peca);
if (peca<=4 && peca>0)
{
    printf("VOCÊ ESCOLHEU A PEÇA: %d\n",peca);
}
else
{
    printf("Opção inválida! Escolha novamente:\n");
    printf("\n");
}
}

//MOVENDO A RAINHA
if(peca==4)
{
    int casarainha,direcao;
    int quantidade = 1;

    for (quantidade = 0; quantidade <=casarainha; quantidade++)
    {
    

    printf("*** RAINHA ***\n");
    printf("\n");
    for (casarainha = 0; casarainha<1 || casarainha>8; casarainha)
    {
    
    printf("Informe quantas casas entre 1 e 8 a rainha deve andar:\n");
    scanf("%d",&casarainha);

   if(casarainha<1 || casarainha>8)
   {printf("*** VALOR INVÁLIDO ***\n");
   printf("\n");}
   else{
for (direcao= 0;direcao<1 || direcao>8;direcao)
{

printf("OPÇÕES DE DIREÇÃO QUE VOCÊ PODE MOVER A RAINHA\n");
printf("1.DIREITA\n");
printf("2.ESQUERDA\n");
printf("3.CIMA\n");
printf("4.BAIXO\n");
printf("5.DIAGONAL SUPERIOR DIREITA\n");
printf("6.DIAGONAL SUPERIOR ESQUERDA\n");
printf("7.DIAGONAL INFERIOR DIREITA\n");
printf("8.DIAGONAL INFERIOR ESQUERDA\n");
printf("\n");
printf("Escolha uma direção para mover a peça:\n");
scanf("%d",&direcao);
   }
    }
    }
switch (direcao)
{
case 1:
    printf("Você escolheu andar %d casas para a direita\n",casarainha);


for (quantidade = 1; quantidade <= casarainha; quantidade++)
{
    
printf("direita \n",quantidade*casarainha);

}
break;

case 2:
    printf("Você escolheu andar %d casas para a esquerda\n",casarainha);
   
    for (quantidade = 1; quantidade <= casarainha; quantidade++)
{
    
printf("esquerda \n",quantidade*casarainha);

}

    break;

case 3:
    printf("Você escolheu andar %d casas para cima\n",casarainha);
   
    for (quantidade = 1; quantidade <= casarainha; quantidade++)
    {
        
    printf("cima \n",quantidade*casarainha);
    
    }
    
    break;

case 4:
    printf("Você escolheu andar %d casas para baixo\n",casarainha);
   
    for (quantidade = 1; quantidade <= casarainha; quantidade++)
    {
        
    printf("baixo \n",quantidade*casarainha);
    
    }
    
    break;

case 5:
    printf("Você escolheu andar %d casas para a diagonal superior direita\n",casarainha);
    
    
    for (quantidade = 1; quantidade <= casarainha; quantidade++)
{
    
printf("direita \n",quantidade*casarainha);
printf("cima\n",quantidade*casarainha);
}
break;

case 6:
    printf("Você escolheu andar %d casas para a diagonal superior esquerda\n",casarainha);
   
    for (quantidade = 1; quantidade <= casarainha; quantidade++)
    {
        
    printf("esquerda \n",quantidade*casarainha);
    printf("cima\n",quantidade*casarainha);
    }
    break;

case 7:
    printf("Você escolheu andar %d casas para a diagonal inferior direita\n",casarainha);
   
    for (quantidade = 1; quantidade <= casarainha; quantidade++)
    {
        
    printf("direita \n",quantidade*casarainha);
    printf("baixo\n",quantidade*casarainha);
    }
    break;

case 8:
    printf("Você escolheu andar %d casas para a diagonal inferior esquerda\n",casarainha);
    
    for (quantidade = 1; quantidade <= casarainha; quantidade++)
{
    
printf("direita \n",quantidade*casarainha);
printf("baixo\n",quantidade*casarainha);
}
    break;

}
}
}
// MOVIMENTANDO A TORRE

else if(peca==1)
{int casatorre,direcao;
    int quantidade = 1;

    printf("*** TORRE ***\n");

while (casatorre<1 || casatorre>8)
{
printf("Informe quantas casas entre 1 e 8 a torre deve andar:\n");
scanf("%d",&casatorre);

if(casatorre<1 || casatorre>8)
{printf("*** VALOR INVÁLIDO ***\n");
 printf("\n");
}else{
    for (direcao= 0; direcao<1 || direcao>4; direcao)
    {
        
    
    
printf("\n");
printf("Escolha a direção que a torre deve andar\n");
printf("1.direita\n");
printf("2.esquerda\n");
printf("3.cima\n");
printf("4.baixo\n");
scanf("%d",&direcao);
}
}
}

switch (direcao)
{
case 1:
    printf("Você escolheu andar %d casas para a direita\n",casatorre);
    while (quantidade<=casatorre)
    {
        printf("direita\n");
    quantidade++;
    }   
    break;


case 2:
    printf("Você escolheu andar %d casas para a esquerda\n",casatorre);
    while (quantidade<=casatorre)
    {
        printf("esquerda\n");
    quantidade++;
    }   
     break;

case 3:
    printf("Você escolheu andar %d casas para cima\n",casatorre);
    while (quantidade<=casatorre)
    {
        printf("cima\n");
    quantidade++;
    }   
    break;

case 4:
    printf("Você escolheu andar %d casas para baixo\n",casatorre);
    while (quantidade<=casatorre)
    {
        printf("baixo\n");
    quantidade++;
    }   
     break;

default:
printf("Opção inválida");
    break;
}

printf("\n");}

//MOVIMENTANDO O BISPO
else if (peca==2)
{
    int casabispo,direcao;
int quantidade = 1;

while (casabispo<1 || casabispo>8)
{

printf("*** BISPO ***\n");
printf("Informe quantas casas entre 1 e 8 o bispo deve andar:\n");
scanf("%d",&casabispo);


if(casabispo<1 || casabispo > 8)
{printf(" *** VALOR INVÁLIDO ***\n");
printf("\n");}

else{
    for (direcao = 0; direcao<1 || direcao>4;direcao)
{

printf("OPÇÕES DE DIREÇÃO QUE O BISPO PODE SEGUIR:\n");
printf("1.DIAGONAL SUPERIOR DIREITA\n");
printf("2.DIAGONAL SUPERIOR ESQUERDA\n");
printf("3.DIAGONAL INFERIOR DIREITA\n");
printf("4.DIAGONAL INFERIOR ESQUERDA\n");
printf("\n");

printf("ESCOLHA EM QUAL DIREÇÃO O BISPO DEVE SEGUIR:\n");
scanf("%d",&direcao);
}

}

}

switch (direcao)
{
case 1:
    printf("Você escolheu andar %d casas na diagonal superior direita\n",casabispo);
    
    do
   {printf("cima\n",quantidade);
    printf("direita\n",quantidade);
    quantidade++;
    }
while(quantidade<=casabispo);
    break;

case 2:
    printf("Você escolheu andar %d casas na diagonal superior esquerda\n",casabispo);
    do
    {printf("cima\n",quantidade);
     printf("esquerda\n",quantidade);
     quantidade++;
     }
 while(quantidade<=casabispo);
    break;

case 3:
    printf("Você escolheu andar %d casas na diagonal inferior direita\n",casabispo);
    do
    {printf("baixo\n",quantidade);
     printf("direita\n",quantidade);
     quantidade++;
     }
 while(quantidade<=casabispo);
    break;

case 4:
    printf("Você escolheu andar %d casas na diagonal inferior esquerda\n",casabispo);
    do
    {printf("baixo\n",quantidade);
     printf("esquerda\n",quantidade);
     quantidade++;
     }
 while(quantidade<=casabispo);
    break;

default:
printf("Opção inválida!\n");
    break;
}
}
//MOVENDO O CAVALO
else if (peca==3)
{
    int casa,casa2;
    int direcao1;

//introdução ao jogo
printf("*** CAVALO ***\n");
printf("\n");

printf("OBS:O cavalo anda em L,ou seja,quando for mover a peça:\n");
printf("Escolha a primeira direção,depois a segunda direção e quantas casas entre 1 e 2 a primeira casa deve andar.\n");
printf("Pois a quantidade de casas da segunda direção depende diretamente da primeira,assim formando um L\n");
printf("\n");


//escolha do primeiro movimento da peça
while(direcao1 != 1 && direcao1 != 2 && direcao1 != 3 && direcao1 !=4)

{

printf("Opções de direção:\n");
printf("1.baixo\n");
printf("2.cima\n");
printf("3.direita\n");
printf("4.esquerda\n");
printf("\n");
printf("Escolha a primeira direção:\n");
scanf("%d",&direcao1);


if (direcao1 != 1 && direcao1 != 2 && direcao1 != 3 && direcao1 !=4)
{printf("*** VALOR INVÁLIDO *** Tente novamente\n");}

else{printf("Você escolheu a opção: %d\n",direcao1);}
printf("\n");}


//escolha do segundo movimento da peça

int direcao3;

switch (direcao1)
{   
    
    case 1: 

    while (direcao3!=1 && direcao3!=2)
    {   
    
       printf("Opções da segunda direção:\n");
       printf("1.direita\n");
       printf("2.Esquerda\n");
       printf("Informe a segunda direção:\n");
       scanf("%d",&direcao3);

       if (direcao3!=1 && direcao3!=2)
{printf("*** VALOR INVÁLIDO *** Tente novamente\n");}

else{printf("Você escolheu a opção: %d\n",direcao3);}
printf("\n");
    }
       break;

    
case 2:

while (direcao3!=1 && direcao3!=2)
{   

    printf("Opções da segunda direção:\n");
    printf("1.direita\n");
    printf("2.Esquerda\n");
    printf("Informe a segunda direção:\n");
    scanf("%d",&direcao3);
    
    if (direcao3!=2 && direcao3!=3)
    {printf("*** VALOR INVÁLIDO *** Tente novamente\n");}
    
    else{printf("Você escolheu a opção: %d\n",direcao3);}
    printf("\n");
        }
    break;

case 3:

while (direcao3!=1 && direcao3!=2)
{   

    printf("Opções da segunda direção:\n");
    printf("1.baixo\n");
    printf("2.cima\n");
    printf("Informe a segunda direção:\n");
    scanf("%d",&direcao3);
    
    if (direcao3!=1 && direcao3!=2)
    {printf("*** VALOR INVÁLIDO *** Tente novamente\n");}
    
    else{printf("Você escolheu a opção: %d\n",direcao3);}
    printf("\n");
        }
    break;
    
case 4:

while (direcao3!=1 && direcao3!=2)
{   

    printf("Opções da segunda direção:\n");
    printf("1.baixo\n");
    printf("2.cima\n");
    printf("Informe a segunda direção:\n");
    scanf("%d",&direcao3);

    if (direcao3!=1 && direcao3!=2)
    {printf("*** VALOR INVÁLIDO *** Tente novamente\n");}
    
    else{printf("Você escolheu a opção: %d\n",direcao3);}
    printf("\n");
        }
    break;


    
default:
printf("*** OPÇÃO INVÁLIDA ***\n");
    break;
}

//INFORMANDO QUANTAS CASAS DEVE ANDAR NA PRIMEIRA DIREÇÃO

for (casa = 0; casa<1 || casa >2; casa)
{
    
printf("Informe a quantidade de casas da primeira direção:\n");
printf("Obs: total de casas deve estar entre 1 e 2\n");
scanf("%d",&casa);
} 
printf("\n");


//IMPRESSÃO DO MOVIMENTO DA PEÇA
if (casa==1)
{
    casa2=2;
}
else{casa2=1;}


switch (direcao1)
{
case 1:
     switch (direcao3)
     {
     case 1:
     
        printf("Você escolheu andar %d casas para baixo e %d casas para a direita\n",casa,casa2);
        for (casa2=1;casa2<=casa;casa2++)
        {
         printf("baixo\n");
        }
        for (casa2=2;casa<=casa2;casa++)
        {
         printf("direita\n");
        }
        
        break;

        case 2:
        
        printf("Você escolheu andar %d casas para baixo e %d casas para a esquerda\n",casa,casa2);
        for (casa2=1;casa2<=casa;casa2++)
        {
         printf("baixo\n");
        }
        for (casa2=2;casa<=casa2;casa++)
        {
         printf("esquerda\n");
        }
        
        break;

     default:
        break;
     }
    break;

    case 2:
     switch (direcao3)
     {
     case 1:
     
        printf("Você escolheu andar %d casas para cima e %d casas para a direita\n",casa,casa2);
        for (casa2=1;casa2<=casa;casa2++)
        {
         printf("cima\n");
        }
        for (casa2=2;casa<=casa2;casa++)
        {
         printf("direita\n");
        }
        
        break;

        case 2:
        
        printf("Você escolheu andar %d casas para cima e %d casas para a esquerda\n",casa,casa2);
        for (casa2=1;casa2<=casa;casa2++)
        {
         printf("cima\n");
        }
        for (casa2=2;casa<=casa2;casa++)
        {
         printf("esquerda\n");
        }
        
        break;

     default:
        break;
     }
    break;
     case 3:
     switch (direcao3)
     {
     case 1:
     
        printf("Você escolheu andar %d casas para a direita e %d casas para baixo\n",casa,casa2);
        for (casa2=1;casa2<=casa;casa2++)
        {
         printf("direita\n");
        }
        for (casa2=2;casa<=casa2;casa++)
        {
         printf("baixo\n");
        }
        
        break;

        case 2:
        
        printf("Você escolheu andar %d casas para a direita e %d casas para cima\n",casa,casa2);
        for (casa2=1;casa2<=casa;casa2++)
        {
         printf("direita\n");
        }
        for (casa2=2;casa<=casa2;casa++)
        {
         printf("cima\n");
        }
        
        break;
    }
    break;
        case 4:
     switch (direcao3)
     {
     case 1:
     
        printf("Você escolheu andar %d casas para a esquerda e %d casas para baixo\n",casa,casa2);
        for (casa2=1;casa2<=casa;casa2++)
        {
         printf("esquerda\n");
        }
        for (casa2=2;casa<=casa2;casa++)
        {
         printf("baixo\n");
        }
        
        break;

        case 2:
        
        printf("Você escolheu andar %d casas para a esquerda e %d casas para cima\n",casa,casa2);
        for (casa2=1;casa2<=casa;casa2++)
        {
         printf("esquerda\n");
        }
        for (casa2=2;casa<=casa2;casa++)
        {
         printf("cima\n");
        }
        
        break;

     default:
        break;
    }

default:
    break;
}   

}


return 0;

}