#include <stdio.h>
#include <math.h>

//DEFINE MEDIA DOS ALUNOS
/*#define media(n1, n2, n3, n4) ((n1*0.2)+(n2*0.3)+(n3*0.4)+(n4*0.1))

float main() 
{

    float n1 = 7.5;
    float n2 = 4.5;
    float n3 = 6.0;
    float n4 = 9.5;

   float media = media(n1, n2, n3, n4);
   printf("A media e: %.1f\n", media);

    return (0);
}*/

//DEFINE O CONSUMO DO CARRO
/*#define CUSTO_GASOLINA 4.59
#define MEDIA_KM_L 8

int main()
{
    float trajeto_diario = 30.0;
    float consumo_litros = trajeto_diario / MEDIA_KM_L; //verifica quantos litros o carro usa por dia
    float custo_diario = consumo_litros * CUSTO_GASOLINA;
    float custo_semanal = custo_diario * 7;
    float custo_mensal = custo_diario * 30;

    printf("Consumo por litro e: %.2f\n", consumo_litros);
    printf("Custo diario e: %.2f reais\n", custo_diario);
    printf("Custo semanal e: %.2f reais\n", custo_semanal);
    printf("Custo mensal e: %.2f reais\n", custo_mensal);


    return (0);
}*/


int main() {
    int inicio = 0, resultado = 1, proximo;

    printf("A sequencia de fibonacci:\n");
    printf("%d\n", inicio);
    printf("%d\n", resultado);

    while (resultado + inicio < 1000) {
        proximo = resultado + inicio;
        printf("%d\n", proximo);
        inicio = resultado;
        resultado = proximo;
    }

    return 0;
}

