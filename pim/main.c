#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <conio.h>

char nomeT[50];
char logadoT[50];
float precoT;
char nomeArquivoT[100];
char minutoT[50];
char horaT[50];
char diaT[50];
char mesT[50];
char anoT[50];
int vendasT;
float rendaT;

//METODO PARA ABRIR ARQUIVI -> ABRE EM MODO LEITURA, GRAVAÇÃO OU JUNÇÃO DE ACORDO COM O MODO PASSADO POR PARAMETRO
FILE* AbreArquivo(char modo, char nomeArq[50]){
    FILE *arquivo;

    switch(modo){
        case 'g'://GRAVA
            arquivo = fopen(nomeArq, "wt");
            break;
        case 'l'://LER
            arquivo = fopen(nomeArq, "rt");
            break;
        case 'a'://APPEND
            arquivo = fopen(nomeArq, "a");
            break;
    }

    if(arquivo == NULL){
        printf("Nao foi possivel abrir o arquivo!!!");
    }

    return arquivo;
}

//FECHA O ARQUIVO PASSADO POR PARAMETRO
void FecharArquivo(FILE *arquivo){
    fclose(arquivo);
}

void PedidoDia(){
    char concat[50];
    char minuto[50];
    char hora[50];
    char dia[50];
    char mes[50];
    char ano[50];
    char data[50];

    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    //MEMSET -> LIMPA O VALOR NA MEMORIA DA VARIAVEL PASSADA
    memset(concat, '\0', sizeof(char));
    memset(data, '\0', sizeof(char));
    memset(nomeArquivoT, '\0', sizeof(char));
    memset(minutoT, '\0', sizeof(char));
    memset(horaT, '\0', sizeof(char));
    memset(diaT, '\0', sizeof(char));
    memset(mesT, '\0', sizeof(char));
    memset(anoT, '\0', sizeof(char));

    //SALVA NA VARIAVEL HORA A HORA OBTIDA DO SISTEMA
    switch(tm.tm_hour){
        case 0:
            strcpy(hora,"00");
            //printf("ANO 2019");
            break;
        case 1:
            strcpy(hora,"01");
            //printf("ANO 2019");
            break;
        case 2:
            strcpy(hora,"02");
            //printf("ANO 2019");
            break;
        case 3:
            strcpy(hora,"03");
            //printf("ANO 2019");
            break;
        case 4:
            strcpy(hora,"04");
            //printf("ANO 2019");
            break;
        case 5:
            strcpy(hora,"05");
            //printf("ANO 2019");
            break;
        case 6:
            strcpy(hora,"06");
            //printf("ANO 2019");
            break;
        case 7:
            strcpy(hora,"07");
            //printf("ANO 2019");
            break;
        case 8:
            strcpy(hora,"08");
            //printf("ANO 2019");
            break;
        case 9:
            strcpy(hora,"09");
            //printf("ANO 2019");
            break;
        case 10:
            strcpy(hora,"10");
            //printf("ANO 2019");
            break;
        case 11:
            strcpy(hora,"11");
            //printf("ANO 2019");
            break;
        case 12:
            strcpy(hora,"12");
            //printf("ANO 2019");
            break;
        case 13:
            strcpy(hora,"13");
            //printf("ANO 2019");
            break;
        case 14:
            strcpy(hora,"14");
            //printf("ANO 2019");
            break;
        case 15:
            strcpy(hora,"15");
            //printf("ANO 2019");
            break;
        case 16:
            strcpy(hora,"16");
            //printf("ANO 2019");
            break;
        case 17:
            strcpy(hora,"17");
            //printf("ANO 2019");
            break;
        case 18:
            strcpy(hora,"18");
            //printf("ANO 2019");
            break;
        case 19:
            strcpy(hora,"19");
            //printf("ANO 2019");
            break;
        case 20:
            strcpy(hora,"20");
            //printf("ANO 2019");
            break;
        case 21:
            strcpy(hora,"21");
            //printf("ANO 2019");
            break;
        case 22:
            strcpy(hora,"22");
            //printf("ANO 2019");
            break;
        case 23:
            strcpy(hora,"23");
            //printf("ANO 2019");
            break;
    }

    //SALVA NA VARIAVEL MINUTO O MINUTO OBTIDO DO SISTEMA
    switch(tm.tm_min){
        case 0:
            strcpy(minuto,"00");
            //printf("ANO 2019");
            break;
        case 1:
            strcpy(minuto,"01");
            //printf("ANO 2019");
            break;
        case 2:
            strcpy(minuto,"02");
            //printf("ANO 2019");
            break;
        case 3:
            strcpy(minuto,"03");
            //printf("ANO 2019");
            break;
        case 4:
            strcpy(minuto,"04");
            //printf("ANO 2019");
            break;
        case 5:
            strcpy(minuto,"05");
            //printf("ANO 2019");
            break;
        case 6:
            strcpy(minuto,"06");
            //printf("ANO 2019");
            break;
        case 7:
            strcpy(minuto,"07");
            //printf("ANO 2019");
            break;
        case 8:
            strcpy(minuto,"08");
            //printf("ANO 2019");
            break;
        case 9:
            strcpy(minuto,"09");
            //printf("ANO 2019");
            break;
        case 10:
            strcpy(minuto,"10");
            //printf("ANO 2019");
            break;
        case 11:
            strcpy(minuto,"11");
            //printf("ANO 2019");
            break;
        case 12:
            strcpy(minuto,"12");
            //printf("ANO 2019");
            break;
        case 13:
            strcpy(minuto,"13");
            //printf("ANO 2019");
            break;
        case 14:
            strcpy(minuto,"14");
            //printf("ANO 2019");
            break;
        case 15:
            strcpy(minuto,"15");
            //printf("ANO 2019");
            break;
        case 16:
            strcpy(minuto,"16");
            //printf("ANO 2019");
            break;
        case 17:
            strcpy(minuto,"17");
            //printf("ANO 2019");
            break;
        case 18:
            strcpy(minuto,"18");
            //printf("ANO 2019");
            break;
        case 19:
            strcpy(minuto,"19");
            //printf("ANO 2019");
            break;
        case 20:
            strcpy(minuto,"20");
            //printf("ANO 2019");
            break;
        case 21:
            strcpy(minuto,"21");
            //printf("ANO 2019");
            break;
        case 22:
            strcpy(minuto,"22");
            //printf("ANO 2019");
            break;
        case 23:
            strcpy(minuto,"23");
            //printf("ANO 2019");
            break;
        case 24:
            strcpy(minuto,"24");
            //printf("ANO 2019");
            break;
        case 25:
            strcpy(minuto,"25");
            //printf("ANO 2019");
            break;
        case 26:
            strcpy(minuto,"26");
            //printf("ANO 2019");
            break;
        case 27:
            strcpy(minuto,"27");
            //printf("ANO 2019");
            break;
        case 28:
            strcpy(minuto,"28");
            //printf("ANO 2019");
            break;
        case 29:
            strcpy(minuto,"29");
            //printf("ANO 2019");
            break;
        case 30:
            strcpy(minuto,"30");
            //printf("ANO 2019");
            break;
        case 31:
            strcpy(minuto,"31");
            //printf("ANO 2019");
            break;
        case 32:
            strcpy(minuto,"32");
            //printf("ANO 2019");
            break;
        case 33:
            strcpy(minuto,"33");
            //printf("ANO 2019");
            break;
        case 34:
            strcpy(minuto,"34");
            //printf("ANO 2019");
            break;
        case 35:
            strcpy(minuto,"35");
            //printf("ANO 2019");
            break;
        case 36:
            strcpy(minuto,"36");
            //printf("ANO 2019");
            break;
        case 37:
            strcpy(minuto,"37");
            //printf("ANO 2019");
            break;
        case 38:
            strcpy(minuto,"38");
            //printf("ANO 2019");
            break;
        case 39:
            strcpy(minuto,"39");
            //printf("ANO 2019");
            break;
        case 40:
            strcpy(minuto,"40");
            //printf("ANO 2019");
            break;
        case 41:
            strcpy(minuto,"41");
            //printf("ANO 2019");
            break;
        case 42:
            strcpy(minuto,"42");
            //printf("ANO 2019");
            break;
        case 43:
            strcpy(minuto,"43");
            //printf("ANO 2019");
            break;
        case 44:
            strcpy(minuto,"44");
            //printf("ANO 2019");
            break;
        case 45:
            strcpy(minuto,"45");
            //printf("ANO 2019");
            break;
        case 46:
            strcpy(minuto,"46");
            //printf("ANO 2019");
            break;
        case 47:
            strcpy(minuto,"47");
            //printf("ANO 2019");
            break;
        case 48:
            strcpy(minuto,"48");
            //printf("ANO 2019");
            break;
        case 49:
            strcpy(minuto,"49");
            //printf("ANO 2019");
            break;
        case 50:
            strcpy(minuto,"50");
            //printf("ANO 2019");
            break;
        case 51:
            strcpy(minuto,"51");
            //printf("ANO 2019");
            break;
        case 52:
            strcpy(minuto,"52");
            //printf("ANO 2019");
            break;
        case 53:
            strcpy(minuto,"53");
            //printf("ANO 2019");
            break;
        case 54:
            strcpy(minuto,"54");
            //printf("ANO 2019");
            break;
        case 55:
            strcpy(minuto,"55");
            //printf("ANO 2019");
            break;
        case 56:
            strcpy(minuto,"56");
            //printf("ANO 2019");
            break;
        case 57:
            strcpy(minuto,"57");
            //printf("ANO 2019");
            break;
        case 58:
            strcpy(minuto,"58");
            //printf("ANO 2019");
            break;
        case 59:
            strcpy(minuto,"59");
            //printf("ANO 2019");
            break;
    }

    //SALVA NA VARIAVEL DIA O DIA OBTIDO DO SISTEMA
    switch(tm.tm_mday){
        case 1:
            strcpy(dia,"01-");
            break;
        case 2:
            strcpy(dia,"02-");
            break;
        case 3:
            strcpy(dia,"03-");
            break;
        case 4:
            strcpy(dia,"04-");
            break;
        case 5:
            strcpy(dia,"05-");
            break;
        case 6:
            strcpy(dia,"06-");
            break;
        case 7:
            strcpy(dia,"07-");
            break;
        case 8:
            strcpy(dia,"08-");
            break;
        case 9:
            strcpy(dia,"09-");
            break;
        case 10:
            strcpy(dia,"10-");
            break;
        case 11:
            strcpy(dia,"11-");
            break;
        case 12:
            strcpy(dia,"12-");
            break;
        case 13:
            strcpy(dia,"13-");
            break;
        case 14:
            strcpy(dia,"14-");
            break;
        case 15:
            strcpy(dia,"15-");
            break;
        case 16:
            strcpy(dia,"16-");
            break;
        case 17:
            strcpy(dia,"17-");
            break;
        case 18:
            strcpy(dia,"18-");
            break;
        case 19:
            strcpy(dia,"19-");
            break;
        case 20:
            strcpy(dia,"20-");
            break;
        case 21:
            strcpy(dia,"21-");
            break;
        case 22:
            strcpy(dia,"22-");
            break;
        case 23:
            strcpy(dia,"23-");
            break;
        case 24:
            strcpy(dia,"24-");
            break;
        case 25:
            strcpy(dia,"25-");
            break;
        case 26:
            strcpy(dia,"26-");
            break;
        case 27:
            strcpy(dia,"27-");
            break;
        case 28:
            strcpy(dia,"28-");
            break;
        case 29:
            strcpy(dia,"29-");
            break;
        case 30:
            strcpy(dia,"30-");
            break;
        case 31:
            strcpy(dia,"31-");
            break;
    }

    //SALVA NA VARIAVEL MES O MES OBTIDO DO SISTEMA
    switch(tm.tm_mon + 1){
        case 1:
            strcpy(mes,"1-");
            //printf("MES 9");
            break;
        case 2:
            strcpy(mes,"2-");
            //printf("MES 9");
            break;
        case 3:
            strcpy(mes,"3-");
            //printf("MES 9");
            break;
        case 4:
            strcpy(mes,"4-");
            //printf("MES 9");
            break;
        case 5:
            strcpy(mes,"5-");
            //printf("MES 9");
            break;
        case 6:
            strcpy(mes,"6-");
            //printf("MES 9");
            break;
        case 7:
            strcpy(mes,"7-");
            //printf("MES 9");
            break;
        case 8:
            strcpy(mes,"8-");
            //printf("MES 9");
            break;
        case 9:
            strcpy(mes,"9-");
            //printf("MES 9");
            break;
        case 10:
            strcpy(mes,"10-");
            //printf("MES 9");
            break;
        case 11:
            strcpy(mes,"11-");
            //printf("MES 9");
            break;
        case 12:
            strcpy(mes,"12-");
            //printf("MES 9");
            break;
    }

    //SALVA NA VARIAVEL ANO O ANO OBTIDO DO SISTEMA
    switch(tm.tm_year + 1900){
        case 2019:
            strcpy(ano,"2019");
            //printf("ANO 2019");
            break;
        case 2020:
            strcpy(ano,"2020");
            //printf("ANO 2019");
            break;
        case 2021:
            strcpy(ano,"2021");
            //printf("ANO 2019");
            break;
    }

    //JUNTA NA VARIAVEL data O VALOR DE dia,mes e ano (dd-mm-aaaa)
    strcat(data,dia);
    strcat(data,mes);
    strcat(data,ano);

    //JUNTA NA VARIAVEL concat O NOME DO ARQUIVO
    strcat(concat,"pedidos/pedidos ");
    strcat(concat, data);
    strcat(concat, ".txt");

    strcat(nomeArquivoT, concat);
    strcat(minutoT, minuto);
    strcat(horaT, hora);
    strcat(diaT, dia);
    strcat(mesT, mes);
    strcat(anoT, ano);
}

//VERIFICA SE O USUARIO E SENHA EXISTEM CADASTRADOS, CASO SIM ARMAZENA EM logadoT A PERMISSAO DO USUARIO
//CASO NÃO EXISTA O USUARIO OU SENHA, INFORMA AO USUARIO
void VerificaLogin(char usuario[50],char senha[50]){
    FILE* arquivo;
    char user[50], pass[50], permissao[50];

    //ABRE O ARQUIVO QUE CONTEM OS USUARIOS E ARMAZENA O ARQUIVO NA VARIAVEL arquivo
    arquivo = AbreArquivo('l',"bdUsuario.txt");

    //PERCORRE LINHA A LINHA O ARQUIVO, FEOF-> VERIFICA SE CHEGOU NO FINAL DO ARQUIVO, ENQUANTO NÃO CHEGAR, CONTINUA PERCORRENDO O ARQUIVO
    while(!feof(arquivo)){
        //FSCAN PERCORRE A LINHA DO ARQUIVO, E SALVA NAS VARIAVEIS user, pass e permissao O CONTEUDO OBTIDO NA LINHA
        fscanf(arquivo, "%s %s %s", &user, &pass, &permissao);

        //VERIFICA SE O USUARIO PASSADO POR PARAMETRO É IGUAL O DA LINHA DO ARQUIVO
        //STRCMP -> COMPARA DUAS VARIAVEIS DO TIPO char, CASO FOREM IGUAL, O RETORNO DO METODO É ZERO
        if(strcmp(usuario, user) == 0){
            //VERIFICA SE A SENHA PASSADO POR PARAMETRO É IGUAL A DA LINHA DO ARQUIVO
            if(strcmp(senha,pass) == 0){
                //ARMAZENA NA VARIAVEL logatoT A PERMISSAO DO USUARIO
                strcat(logadoT, permissao);
                return ;
            }else{
                //CASO O USUARIO EXISTA NO ARQUIVO, POREM A SENHA ESTEJA ERRADA, INFORMA SENHA INCORRETA AO USUARIO
                printf("\n\n\t\tUsuario ou senha incorreto!");
            }
        }
    }

    //FECHA O ARQUIVO DE USUARIOS
    FecharArquivo(arquivo);

    return;
}

//CADASTRA UM NOVO PEDIDO EM UM ARQUIVO DO DIA("pedidos dd-mm-aaaa")
void NovoPedido(char pizza[50], int qtd, float preco){
    FILE *pedidos;

    PedidoDia();
    //ABRE O ARQUIVO DE PEDIDOS
    pedidos = AbreArquivo('a',nomeArquivoT);

    //SE A QUANTIDADE DE PIZZA DIGITADA PELO USUARIO FOR ZERO NÃO SALVA O PEDIDO, CASO SEJA DIFERENTE, SALVA O PEDIDO
    if(qtd != 0){
        fprintf(pedidos,"%30s %2d %3.2f %2s:%2s\n",pizza,qtd,qtd*preco,horaT,minutoT);
    }

    //FECHA O ARQUIVO DE PEDIDOS
    FecharArquivo(pedidos);

}

//PROCURA NOS ARQUIVOS DE CARDAPIO, SE EXISTE A PIZZA COM O CODIGO PASSADO POR PARAMETRO, CASO SIM, ARMAZENA EM nomeT O NOME DA PIZZA
void ProcuraPizza(char codigo[10]){
    FILE *arquivo,*arquivo2;
    char cod[3], nome[50], descricao[100];
    char cod2[3], nome2[50], descricao2[100];

    float preco;
    float preco2;

    //ABRE O ARQUIVO DE PIZZAS CLASSICAS
    arquivo = AbreArquivo('l', "cardapios/Pizzas.txt");

    //PERCORRE O ARQUIVO, ENQUANTO NÃO CHEGAR NO FIM DO ARQUIVO
    while(!feof(arquivo)){
        fscanf(arquivo, "%s %s %f %s", &cod, &nome, &preco, &descricao);

        //COMPARA O CODIGO PASSADO POR PARAMETRO E O CODIGO ENCONTRADO NA LINHA DO ARQUIVO
        if(strcmp(cod,codigo) == 0){
            FecharArquivo(arquivo);
            //SALVA NA VARIAVEL nomeT O NOME DA PIZZA OBTIDO NO ARQUIVO
            strcat(nomeT,nome);
            //SALVA NA VARIAVEL precoT O PRECO DA PIZZA OBTIDO NO ARQUIVO
            precoT = preco;
            return;
        }

    }

    FecharArquivo(arquivo);

    arquivo2 = AbreArquivo('l', "cardapios/Bebidas.txt");

    while(!feof(arquivo2)){
        fscanf(arquivo2, "%s %s %f %s", &cod2, &nome2, &preco2, &descricao2);

        if(strcmp(cod2,codigo) == 0){
            FecharArquivo(arquivo2);
            strcat(nomeT,nome2);
            precoT = preco2;
            return;
        }
    }

    FecharArquivo(arquivo2);

    //ZERA O VALOR DA VARIAVEL nomeT
    memset(nomeT, '\0', sizeof(char));

}

//MOSTRA O CARDAPIO DE ACORDO COM O PASSADO NO PARAMETRO
void MostraCardapio(int cardapioOpcao){
    FILE *arquivo;
    char *nomeBd;
    char cod[3], nome[20], descricao[50];
    float preco;
    char *c,*n,*p,*d;
    c = "COD";
    n = "NOME";
    p = "PRECO";
    d = "DESCRICAO";
    char texto_str[150];

    //LIMPA A TELA DO CMD
    system("cls");

    printf("\n\n\n");

    //VERIFICA A OPCAO PASSADA POR PARAMETRO, E ABRE O ARQUIVO DE ACORDO COM A OPCAO
    switch(cardapioOpcao){
        case 1:
                printf("%3s %30s   %s   %s\n", c, n, p, d);
                printf("----------------------------------------------------------------------------------------------------\n\n");
                nomeBd = "cardapios/Pizzas.txt";
            break;
        case 2:
                printf("%3s %30s   %s\n", c, n, p, d);
                printf("----------------------------------------------------------------------------------------------------\n\n");

                nomeBd = "cardapios/Bebidas.txt";
            break;
        case 3:
                nomeBd = "estoque/Estoque Bebidas.txt";
            break;
        case 4:
                nomeBd = "estoque/Estoque Ingredientes.txt";
            break;
        default:
                printf("%3s %30s   %s   %s\n", c, n, p, d);
                printf("----------------------------------------------------------------------------------------------------\n\n");
                nomeBd = "cardapios/Pizzas.txt";
            break;
    }

    arquivo = AbreArquivo('l', nomeBd);

    //PERCORRE O ARQUIVO, E ARMAZENA A LINHA NA VARIAVEL texto_str ENQUANTO NÃO CHEGAR AO FIM DO ARQUIVO
    while(fgets(texto_str, 20, arquivo) != NULL){
        //ESCREVE NA TELA O CONTEUDO PEGO DO ARQUIVO
        printf("%s", texto_str);
    }

    FecharArquivo(arquivo);
}

void AlterarEstoque(int estoqueOpcao, char codigo[10]){
    FILE *arquivoTemp, *arquivo6;
    char *nomeBd;
    char cod10[3], nome10[50], descricao10[100], qtd10[100];
    char cod6[3], nome6[50], descricao6[100];
    float temp;
    int preco6;
    int quantidade;
    char texto_str[150];
    int qtdAtualizada = 999;
    int editado = 0;

    /*
        switch(estoqueOpcao){
            case 1:
                    nomeBd = "estoque/Estoque Ingredientes.txt";
                break;
            case 2:
                    nomeBd = "estoque/Estoque Bebidas.txt";
                break;
            default:
                    nomeBd = "estoque/Estoque Ingredientes.txt";
                break;
        }
    */

    arquivo6 = AbreArquivo('l', "estoque/Estoque Bebidas.txt");
    arquivoTemp = AbreArquivo('g',"estoque/Estoque Bebida TEMP.txt");

    while(!feof(arquivo6)){
        fscanf(arquivo6, "%s %s %d", &cod6, &nome6, &preco6);

        if(strcmp(cod6,codigo) == 0){
            printf("\n\n------------------------------------------------\n");
            printf("%s %40s Qtd: %d\n", cod6, nome6, preco6);
            printf("------------------------------------------------\n\n\n");
            printf("Digite a quantidade atualizada: ");
            scanf("%d", &qtdAtualizada);
                fprintf(arquivoTemp,"%s %30s %d\n", cod6, nome6, qtdAtualizada);
                editado = 1;
        }else{
            fprintf(arquivoTemp,"%s %30s %d\n", cod6, nome6, preco6);
        }
    }
    FecharArquivo(arquivoTemp);
    FecharArquivo(arquivo6);

    if(editado == 1){

        arquivo6 = AbreArquivo('g', "estoque/Estoque Bebidas.txt");
        arquivoTemp = AbreArquivo('l',"estoque/Estoque Bebida TEMP.txt");

        while(fgets(texto_str, 20, arquivoTemp) != NULL){
            //printf("%s", texto_str);
            fprintf(arquivo6, "%s", texto_str);
        }
        FecharArquivo(arquivoTemp);
        FecharArquivo(arquivo6);
        printf("\n\n ALTERACAO EFETUADA, PRESSIONE QUALQUER TECLA PARA VOLTAR!");
        scanf("%f", &temp);
    }

}

void RelatorioDia(){
    FILE *arquivo;
    char nomeRel[100];
    int qtdRel;
    float precoRel;
    char horaRel[100];
    PedidoDia();
    arquivo = AbreArquivo('l',nomeArquivoT);

    if(arquivo != NULL){
        while(!feof(arquivo)){
            fscanf(arquivo, "%s %d %f %s", &nomeRel, &qtdRel, &precoRel, &horaRel);
            printf("%s %d %.2f %s\n", nomeRel, qtdRel, precoRel, horaRel);
            vendasT += qtdRel;
            rendaT += precoRel;
        }
    }
}

void CadastrarProduto(int opcao,char cod[5], char nome[50], float preco, char descricao[100]){
    FILE *arquivo;

    switch(opcao){
        case 1:
            arquivo = AbreArquivo('a', "cardapios/Pizzas.txt");
            break;

        case 2:
            arquivo = AbreArquivo('a', "cardapios/Bebidas.txt");
            break;
        default:
            arquivo = AbreArquivo('a', "cardapios/Pizzas.txt");
            break;
    }

    fprintf(arquivo, "%3s %30s   %.2f   %s\n",cod, nome, preco, descricao);

    FecharArquivo(arquivo);
}

void ExcluirProduto(int opcao, char codigo[5]){

    FILE *arquivo;
    char codExcluir[5];
    char nomeExcluir[50];
    float precoExcluir;
    char descricaoExcluir[100];

    switch(opcao){
        case 1:
            arquivo = AbreArquivo('l', "cardapios/Pizzas.txt");
            break;

        case 2:
            arquivo = AbreArquivo('l', "cardapios/Bebidas.txt");
            break;
        default:
            arquivo = AbreArquivo('l', "cardapios/Pizzas.txt");
            break;
    }

    while(fscanf(arquivo,"%s %s %f %s", &codExcluir, &nomeExcluir, &precoExcluir, &descricaoExcluir) == 1){

        if(strcmp(codExcluir,codigo) == 0){
            printf("%s\n", codExcluir);
        }else{
            printf("%s\n", codExcluir);
        }
    }

    FecharArquivo(arquivo);

}

//CRIA ARQUIVOS E PASTAS NECESSARIAS PARA UTILIZAÇÃO DO SISTEMA
void CriaArquivosTxtInicial(){

    //CRIA PASTAS
    system("md pedidos");
    system("md cardapios");
    system("md estoque");

    //LIMPA TELA
    system("cls");

    //CRIA OS ARQUIVOS CASO NÃO EXISTIR
    FecharArquivo(AbreArquivo('a',"cardapios/Pizzas.txt"));
    FecharArquivo(AbreArquivo('a',"cardapios/Bebidas.txt"));
    FecharArquivo(AbreArquivo('a',"estoque/Estoque Ingredientes.txt"));
    FecharArquivo(AbreArquivo('a',"estoque/Estoque Bebidas.txt"));

}

int main(){
    char usuario[50], senha[50];
    char temp[50];

    //EXECUTA METODO PARA CRIAR ARQUIVOS NECESSARIOS PARA O SISTEMA
    CriaArquivosTxtInicial();

    //ENQUANTO O USUARIO NÃO DIGITAR ZERO EM USUARIO, CONITNUA EXECUTANDO O PROGRAMA
    while(strcmp(usuario,"0")!=0){
        //LIMPA TELA
        system("cls");

        memset(logadoT, '\0', sizeof(char));

        printf("\n\n\t\tUsuario: ");
        //ARMAZENA NA VARIAVEL usuario O QUE FOR DIGITADO
        gets(usuario);

        //VERIFICA SE O USUARIO NÃO DIGITOU ZERO, CASO DIGITOU, ENCERRA O PROGRAMA
        if(strcmp(usuario,"0")!=0){
            printf("\t\t  Senha: ");
            //ARMAZENA NA VARIAVEL senha O QUE FOR DIGITADO
            gets(senha);

            //VERIFICA SE O USUARIO E SENHA DIGITADOS EXISTEM E ESTÇAO CORRETOS
            VerificaLogin(usuario,senha);

            //VARIAVEIS DE OPCÕES DOS MENUS
            int opcao = 999;
            int cardapioOpcao = 999;
            int novoPedidoOpcao = 999;
            int estoqueOpcao = 999;
            int estoqueOpcao2 = 999;
            int estoqueOpcao3 = 999;
            int relatorioOpcao = 999;
            int produtosOpcao = 999;
            int produtosOpcao2 = 999;
            int produtosOpcao3 = 999;
            char estoqueCodigo[10];

            //VERIFICA A VARIAVEL logadoT(VARIAVEL QUE TEM A PERMISSAO), SE FOR ADMINISTRADOR EXECUTA O CODIGO A SEGUIR
            if(strcmp(logadoT,"administrador") == 0){

                //EXECUTA O MENU ENQUANTO NÃO DIGITAR ZERO
                while(opcao!= 0){
                    //LIMPA A TELA E MOSTRA O MENU
                    system("cls");
                    printf("PERMISSAO DE ADMINISTRADOR\n\n\n\n");
                    printf("\t0 - Sair\n");
                    printf("\t1 - Novo pedido\n");
                    printf("\t2 - Cardapio\n");
                    printf("\t3 - Estoque\n");
                    printf("\t4 - Gestao de relatorio\n");
                    printf("\t5 - Gestao de produtos\n");
                    printf("\t6 - Gestao de promocoes\n");
                    printf("\t7 - Gestao de usuario\n");
                    printf("\t8 - Gestao de pizzas\n");
                    scanf("%d",&opcao);

                    //VERIFICA A OPCAO DIGITADA PELO USUARIO, E EXECUTA O CODIGO DE ACORDO
                    switch(opcao){
                        //NOVO PEDIDO
                        case 1:

                                //CASO A OPCAO DIGITADA FOR DIFERENTE DE ZERO E DOIS EXECUTA O BLOCO A SEGUIR
                                while(novoPedidoOpcao != 0 || novoPedidoOpcao == 2){
                                        //CASO A OPCAO SEJA DIFERENTE DE DOIS, EXECUTA O BLOCO A SEGUIR
                                        if(novoPedidoOpcao != 2){
                                            //LIMPA A TELA E MOSTRA O MENU
                                            system("cls");
                                            printf("\t\t---- CARDAPIO ----\n\n\n\n");
                                            printf("\t0 - Sair\n");
                                            printf("\t1 - Mostrar Cardapio\n");
                                            printf("\t2 - Digitar o codigo da pizza\n");
                                            scanf("%d",&novoPedidoOpcao);

                                        }

                                    if(novoPedidoOpcao == 1){

                                        //ENQUANTO OPCAO FOR DIFERENTE DE ZERO, EXECUTA O BLOCO A SEGUIR
                                        while(cardapioOpcao!=0){
                                            //LIMPA TELA E MOSTRA MENU
                                            system("cls");
                                            printf("\t\t---- CARDAPIO ----\n\n\n\n");
                                            printf("\t0 - Sair\n");
                                            printf("\t1 - Pizzas\n");
                                            printf("\t2 - Bebidas\n");
                                            scanf("%d",&cardapioOpcao);

                                            //CASO OPCAO DIGITADA SEJA DIFERENTE DE ZERO, MOSTRA O CARDAPIO DE ACORDO COM A OPCAO DIGITADA
                                            if(cardapioOpcao!=0){
                                                //EXECUTA METODO PARA MOSTRAR O CARDAPIO
                                                MostraCardapio(cardapioOpcao);
                                                printf("\n\n PRESSIONE QUALQUER TECLA PARA VOLTAR!");
                                                scanf("%s", &temp);
                                                cardapioOpcao = 0;
                                            }
                                        }

                                        cardapioOpcao = 999;
                                    }else if(novoPedidoOpcao == 2){
                                        //LIMPA TELA E PEDE PARA USUARIO DIGITAR CODIGO DA PIZZA
                                        system("cls");
                                        printf("\t\n\nDigite o codigo da pizza: ");
                                        char codigoPizza[50];
                                        scanf("%s",&codigoPizza);

                                        int qtdPizza;
                                        float precoPizza;

                                        //LIMPAR A VARIAVEL nomeT
                                        memset(nomeT, '\0', sizeof(char));

                                        //PROCURA PIZZA DE ACORDO COM CODIGO DIGITADO
                                        ProcuraPizza(codigoPizza);

                                        //CASO nomeT(VARIAVEL QUE RECEBE NOME DA PIZZA), FOR DIFERENTE DE VAZIA, EXECUTA BLOCO
                                        //POIS EXISTE O CODIGO INFORMADO
                                        if(strcmp(nomeT, "") != 0){
                                            //LIMPA TELA, MOSTRA NOME E PRECO DA PIZZA
                                            system("cls");
                                            printf("\n\nPizza: %s\n", nomeT);
                                            printf("Preco: %3.2f\n", precoT);

                                            printf("\n\nQuantidade: ");
                                            scanf("%d",&qtdPizza);

                                            //SALVA EM ARQUIVO DIARIO O PEDIDO FEITO
                                            NovoPedido(nomeT,qtdPizza,precoT);
                                            printf("\n\n PRESSIONE 1 PARA CONTINUAR COMPRANDO OU QUALQUER TECLA PARA VOLTAR!");
                                            int contComprando;
                                            scanf("%d", &contComprando);
                                            if(contComprando == 1){
                                                novoPedidoOpcao = 2;
                                            }else{
                                                novoPedidoOpcao = 999;
                                            }

                                        }else{
                                            printf("\n\nNAO HA PIZZA COM ESTE CODIGO!");
                                            novoPedidoOpcao = 999;
                                            scanf("%s", &temp);
                                        }

                                    }

                                }
                                novoPedidoOpcao = 999;

                            break;

                        //CARDAPIO
                        case 2:
                            while(cardapioOpcao!=0){
                                //LIMPA TELA E MOSTRA MENU
                                system("cls");
                                printf("\t\t---- CARDAPIO ----\n\n\n\n");
                                printf("\t0 - Sair\n");
                                printf("\t1 - Pizzas\n");
                                printf("\t2 - Bebidas\n");
                                scanf("%d",&cardapioOpcao);

                                if(cardapioOpcao!=0){
                                    MostraCardapio(cardapioOpcao);
                                    printf("\n\n PRESSIONE QUALQUER TECLA PARA VOLTAR!");
                                    scanf("%s", &temp);
                                }
                            }

                            cardapioOpcao = 999;
                            break;

                        //ESTOQUE
                        case 3:
                            system("cls");
                            while(estoqueOpcao != 0){
                                system("cls");
                                printf("\n0- Voltar");
                                printf("\n1- Ver estoque");
                                printf("\n2- Alterar estoque");
                                scanf("%d", &estoqueOpcao);

                                switch(estoqueOpcao){
                                    case 1:

                                        while(estoqueOpcao2 != 0){
                                            system("cls");
                                            printf("\n0- Voltar");
                                            printf("\n1- Ingredientes");
                                            printf("\n2- Bebidas");
                                            scanf("%d", &estoqueOpcao2);

                                            switch(estoqueOpcao2){
                                                case 1:
                                                    //INGREDIENTES
                                                    MostraCardapio(4);
                                                    scanf("%s", &temp);
                                                    break;
                                                case 2:
                                                    //BEBIDAS
                                                    MostraCardapio(3);
                                                    scanf("%s", &temp);
                                                    break;
                                            }


                                        }

                                        estoqueOpcao2 = 999;
                                        break;
                                    case 2:
                                        system("cls");
                                        printf("\n0- Voltar");
                                        printf("\n1- Ingredientes");
                                        printf("\n2- Bebidas");
                                        scanf("%d", &estoqueOpcao3);
                                        if(estoqueOpcao3 != 0){
                                            printf("Digite o codigo do item para alterar: ");
                                            scanf("%s", &estoqueCodigo);

                                            AlterarEstoque(estoqueOpcao3, estoqueCodigo);
                                        }

                                        break;
                                }


                            }

                            estoqueOpcao = 999;

                            break;
                        //RELATORIO
                        case 4:
                                while(relatorioOpcao != 0){
                                    system("cls");
                                    printf("0 - Voltar\n");
                                    printf("1 - Relatorio do dia\n");
                                    //printf("2 - Relatorio da semana\n");
                                    scanf("%d", &relatorioOpcao);
                                    if(relatorioOpcao == 1){
                                        RelatorioDia();

                                        printf("\n\n\n Total de vendas: %d",vendasT);
                                        printf("\n\n\n Total da receita: %.2f",rendaT);
                                        printf("\n\n\n Total da lucro: %.2f",rendaT*0.4);
                                        printf("\n\n\n Total da custo: %.2f",rendaT*0.6);
                                        scanf("%s", &temp);
                                    }
                                }

                                relatorioOpcao = 999;

                            break;
                        case 5:
                                while(produtosOpcao != 0){
                                    system("cls");
                                    printf("0 - Voltar\n");
                                    printf("1 - Cadastrar produto\n");
                                    printf("2 - Excluir produto\n");
                                    scanf("%d", &produtosOpcao);

                                    if(produtosOpcao == 1){
                                        while(produtosOpcao2 != 0){
                                            system("cls");
                                            printf("0 - Voltar\n");
                                            printf("1 - Pizzas\n");
                                            printf("2 - Bebidas\n");
                                            scanf("%d", &produtosOpcao2);

                                            if(produtosOpcao2 == 1){
                                                system("cls");
                                                char codigoNovo[10];
                                                char nomeNovo[50];
                                                float precoNovo;
                                                char descricaoNovo[100];

                                                printf("\nCodigo: ");
                                                scanf("%s", &codigoNovo);

                                                printf("\nNome: ");
                                                scanf("%s", &nomeNovo);

                                                printf("\nPreco: ");
                                                scanf("%f", &precoNovo);

                                                printf("\nDescricao(Sem espaco): ");
                                                scanf("%s", &descricaoNovo);

                                                CadastrarProduto(1,codigoNovo,nomeNovo,precoNovo,descricaoNovo);
                                                printf("\n\nPIZZA CADASTRADA COM SUCESSO!\n\n");
                                                scanf("%s", &temp);
                                                produtosOpcao2 = 0;
                                            }else if(produtosOpcao2 == 2){
                                                system("cls");
                                                char codigoNovo[10];
                                                char nomeNovo[50];
                                                float precoNovo;

                                                printf("\nCodigo: ");
                                                scanf("%s", &codigoNovo);

                                                printf("\nNome: ");
                                                scanf("%s", &nomeNovo);

                                                printf("\nPreco: ");
                                                scanf("%f", &precoNovo);

                                                CadastrarProduto(2,codigoNovo,nomeNovo,precoNovo,"");
                                                printf("\n\nBEBIDA CADASTRADA COM SUCESSO!\n\n");
                                                scanf("%s", &temp);
                                                produtosOpcao2 = 0;
                                            }

                                        }

                                        produtosOpcao2 = 999;

                                    }else if(produtosOpcao == 2){
                                        while(produtosOpcao3 != 0){
                                            system("cls");
                                            printf("0 - Voltar\n");
                                            printf("1 - Pizzas\n");
                                            printf("2 - Bebidas\n");
                                            scanf("%d", &produtosOpcao3);
                                            if(produtosOpcao3 == 1){
                                                char codExcluir[5];
                                                printf("Digite o codigo da pizza: ");
                                                scanf("%s", &codExcluir);

                                                ExcluirProduto(1,codExcluir);
                                                scanf("%s", &temp);

                                            }else if(produtosOpcao3 == 2){

                                            }
                                        }
                                        produtosOpcao3 = 999;
                                    }

                                }

                                produtosOpcao = 999;


                            break;
                        case 6:

                            break;
                        case 7:

                            break;
                        case 8:

                            break;
                    }
                }

                opcao = 999;

            }else if(strcmp(logadoT,"atendente") == 0){
                while(opcao!= 0){
                    system("cls");
                    printf("PERMISSAO DE ATENDENTE\n\n\n\n");
                    printf("\t0 - Sair\n");
                    printf("\t1 - Novo pedido\n");
                    printf("\t2 - Cardapio\n");
                    scanf("%d",&opcao);
                }

                opcao = 999;
            }else if(strcmp(logadoT,"pizzaiolo") == 0){
                while(opcao!= 0){
                    system("cls");
                    printf("PERMISSAO DE PIZZAIOLO\n\n\n\n");
                    printf("\t0 - Estoque\n");
                    printf("\t1 - Gestao de pizzas\n");
                }

                opcao = 999;
            }else{
                system("cls");
                printf("\n\nUSUARIO OU SENHA INCORRETA, PRESSIONE QUALQUER TECLA PARA VOLTAR!");
            }

            gets(temp);

            //FecharArquivo(arquivo);
        }

    }
}
