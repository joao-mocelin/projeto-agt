#include <stdio.h>
#include <string.h>

int main ()
{
    int opcao, opcao2, mensalidade, periodo;
    char adesao;
    char cliente[100], categoria[100], pagamento[100], horario[100];
    char data[100], meta[100], contato[100];
    double peso, altura;
    printf("\nOlá, seja bem-vindo ao programa da academia FiqueFit!\n");
    printf("\n (1) Adesão\
            \n (2) Acompanhamento\
            \n (3) Agendamento de aula experimental\
            \n (4) Recisão de contratos\
            \n (5) Clientes\
            \n (6) Profissionais da academia\n");
    scanf("%i", &opcao);
    switch(opcao)
    {
        case 1: //ADESAO
            printf("\n Qual o nome do cliente?\n");
            scanf(" %99[^\n]", cliente);
            printf("\n a) Natação\
                    \n b) Musculação\
                    \n c) Treinamento Funcional\
                    \n d) Plano seco: musculação + funcional\
                    \n e) Plano molhado: musculação + natação\n");
            scanf("\n %c", &adesao);
            switch (adesao)
            {
                case 'a': // NATAÇÃO
                    strcpy(categoria, "Natação");
                    printf("\n (1) Mensal R$ 220\
                            \n (2) Anual R$ 198\n");
                    scanf("%i", &opcao2);
                    switch (opcao2)
                     {
                        case 1:
                            mensalidade = 220;
                            strcpy(pagamento, "Mensal");
                            break;
                        case 2:
                            mensalidade = 198;
                            strcpy(pagamento, "Anual");
                            break;
                    }
                    printf("\n Periodo: \
                            \n (1) Noite\
                            \n (2) Dia\n");
                    scanf("%i", &periodo);
                    if(periodo == 1)
                    {
                        mensalidade = mensalidade + 50;
                        strcpy(horario, "noite");
                    }
                    else
                    {
                        strcpy(horario, "dia");
                    }
                    
                    break; // BREAK CASO 'A'
                //---------------------------------------------------------------------------------------------               
                case 'b': // MUSCULAÇÃO
                    strcpy(categoria, "Musculação");
                    printf("\n (1) Mensal R$ 110\
                            \n (2) Anual R$ 100\n");
                    scanf("%i", &opcao2);
                    switch (opcao2)
                     {
                        case 1:
                            mensalidade = 110;
                            strcpy(pagamento, "Mensal");
                            break;
                        case 2:
                            mensalidade = 100;
                            strcpy(pagamento, "Anual");
                            break;
                    }
                    printf("\n Periodo: \
                            \n (1) Noite\
                            \n (2) Dia\n");
                    scanf("%i", &periodo);
                    if(periodo == 1)
                    {
                        strcpy(horario, "noite");
                    }
                    else
                    {
                        strcpy(horario, "dia");
                    }
                    
                    break; // BREAK CASO 'B'
                //---------------------------------------------------------------------------------------------
                case 'c': // FUNCIONAL
                    strcpy(categoria, "Funcional");
                    printf("\n (1) Mensal R$ 200\
                            \n (2) Anual R$ 180\n");
                    scanf("%i", &opcao2);
                    switch (opcao2)
                     {
                        case 1:
                            mensalidade = 200;
                            strcpy(pagamento, "Mensal");
                            break;
                        case 2:
                            mensalidade = 180;
                            strcpy(pagamento, "Anual");
                            break;
                    }
                    printf("\n Periodo: \
                            \n (1) Noite\
                            \n (2) Dia\n");
                    scanf("%i", &periodo);
                    if(periodo == 1)
                    {
                        strcpy(horario, "noite");
                    }
                    else
                    {
                        strcpy(horario, "dia");
                    }
                    
                    break; // BREAK CASO 'C'
                //---------------------------------------------------------------------------------------------
                case 'd': // PLANO SECO
                    strcpy(categoria, "Plano seco");
                    printf("\n (1) Mensal (INDISPONÍVEL)\
                            \n (2) Anual R$ 100 + 180\n");
                    scanf("%i", &opcao2);
                    while (opcao2 == 1)
                    {
                        printf("\n Opção inválida.");
                        printf("\n (1) (INDISPONÍVEL)\
                                \n (2) Anual R$ 100 + 180\n");
                        scanf("%i", &opcao2);
                    }
                    mensalidade = 280;
                    strcpy(pagamento, "Anual");
                    printf("\n Periodo: \
                            \n (1) Noite\
                            \n (2) Dia\n");
                    scanf("%i", &periodo);
                    if(periodo == 1)
                    {
                        strcpy(horario, "noite");
                    }
                    else
                    {
                        strcpy(horario, "dia");
                    }
                    
                    break; // BREAK CASO 'D'
                //---------------------------------------------------------------------------------------------
                case 'e': // PLANO MOLHADO
                    strcpy(categoria, "Plano molhado");
                    printf("\n (1) Mensal (INDISPONÍVEL)\
                            \n (2) Anual R$ 100 + 198\n");
                    scanf("%i", &opcao2);
                    while (opcao2 == 1)
                    {
                        printf("\n Opção inválida.");
                        printf("\n (1) (INDISPONÍVEL)\
                                \n (2) Anual R$ 100 + 198\n");
                        scanf("%i", &opcao2);
                    }
                    mensalidade = 298;
                    strcpy(pagamento, "Anual");
                    printf("\n Periodo: \
                            \n (1) Noite\
                            \n (2) Dia\n");
                    scanf("%i", &periodo);
                    if(periodo == 1)
                    {
                        strcpy(horario, "noite");
                    }
                    else
                    {
                        strcpy(horario, "dia");
                    }
                    
                    break; // BREAK CASO 'E'
                //---------------------------------------------------------------------------------------------
            }
            printf("\n Cliente: %s", cliente);
            printf("\n %s ( %s )", categoria, horario);
            printf("\n Pagamento %s", pagamento);
            if(strcmp(pagamento, "Anual") == 0)
            {
                printf("\n 12x R$ %i \
                        \n Total: %i \n", mensalidade, (12 * mensalidade)); 
            }
            else
            {
                printf("\n R$ %i \n", mensalidade);
            }
            break;
        
        case 2: //ACOMPANHAMENTO
            printf("\n Informe a data de hoje: \n");
            scanf(" %99[^\n]", data);
            printf("\n Informe o seu peso em kg (ex. 76.00): \n");
            scanf("%lf", &peso);
            printf("\n Informe sua altura em metros (ex. 1.80): \n");
            scanf("%lf", &altura);
            printf("\n Informe sua meta: \n");
            scanf(" %99[^\n]", meta);
            printf("\n Olá %s!\
                    \n Data de hoje: %s\
                    \n Peso: %.2lfKg\
                    \n Altura: %.2lfm\
                    \n Sua meta: %s\n", cliente, data, peso, altura, meta);
            break;
        case 3: //AGENDAMENTO DE AULA EXPERIMENTAL
            printf("\n Agendamento de aula experimental.\n");
            printf("\n Insira um número de telefone para contato: \n");
            scanf(" %99[^\n]", contato);
            printf("\n Insira seu nome: \n");
            scanf(" %99[^\n]", cliente);
            printf("\n Qual a data da aula experimental? \n");
            scanf(" %99[^\n]", data);
            printf("\n E o horário? \n");
            scanf(" %99[^\n]", horario);
            printf("Olá %s!\
                    Sua aula experimental foi marcada para o dia %s.\
                    no horário de %sh.\n",cliente, data, horario);
            break;
        default:    //CASO NUMERO INVALIDO
            printf("\n Opção inválida. Reinicie a ferramenta.\n");
            return 0;
    }
    return 0;
}
