/*
Lucas Gabriel Felipe de Lima do Nascimento
TADS_2025.1
*/
#include <stdio.h>

int main (void){
    printf("\n\n<=================== I N I C I O ===================>\n\n");
    int dia = 0, mes = 0, ano = 0;
    char d_semana[7][25] = {"Segunda-Feira", "Terça-Feira", "Quarta-Feira", "Quinta-Feira", "Sexta-Feira", "Sabado", "Domingo"}; 
    char meses[12][10] = {"Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

    printf(" * Informe respectivamente O dia, mes e ano desejado....\n");

    printf(" * Dia: ");
    scanf("%i", &dia);

    printf(" * Mes: ");
    scanf("%i", &mes);

    printf(" * Ano: ");
    scanf("%i", &ano);

    printf("\n\n<================ R E S U L T A D O ================>\n\n");

    if(dia<=31 && mes<=12 && ano>0) {
        if(((ano%4 == 0 && ano%100 != 0) || ano%400 == 0)){
            if(mes == 2 && dia>29){
                printf(" => A data %02i/%02i/%04i nao existe!!!!", dia, mes, ano);

                printf("\n\n<==================== F I N A L ====================>\n\n");
                return 0;
            }
            
        } else if(mes == 2 && dia>28){
            printf(" => A data %02i/%02i/%04i nao existe!!!!", dia, mes, ano);

            printf("\n\n<==================== F I N A L ====================>\n\n");
            return 0;
        }
        
        //ano_ant = ano anterior, dias_bissextos = dias a mais em anos bissextos, qntd_d_mes = quantidade de dias do mês correspondente;
        int ano_ant = ano - 1;
        int dias_bissextos =  ((ano_ant)/4) - ((ano_ant)/100) + ((ano_ant)/400);
        int qntd_d_mes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int soma_qntd_d_mes = 0;

        if((ano%4 == 0 && ano%100 != 0) || ano%400 == 0){
            qntd_d_mes[1] += 1;
        }

        for(int i = 0; i < mes-1; i++) {
            soma_qntd_d_mes += qntd_d_mes[i];
        }

        //d_dia = Data em Dia;
        int d_dia = (ano_ant*365) + dias_bissextos + (soma_qntd_d_mes) + dia;
        int tamanho = (d_dia+6) % 7;

        printf(" => %s dia %02i de %s do ano de %04i eh uma data valida!!!", d_semana[tamanho], dia, meses[mes-1], ano);
    } else {
        printf(" => A data %02i/%02i/%04i nao existe!!!!", dia, mes, ano);
    }

    printf("\n\n<==================== F I N A L ====================>\n\n");
    return 0;
}