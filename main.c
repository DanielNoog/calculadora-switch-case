#include <stdio.h>
#include <stdlib.h>

int main()
{

    float operando1, operando2;
    float resultado;
    char operacao;
    printf("\n Operando 1:");
    scanf("%f", &operando1);
    printf("\n Operacao(+, -, *, x, :, /):");
    scanf(" %c", &operacao);
    printf("\n Operando 2:");
    scanf("%f", &operando2);

    switch(operacao)
    {
    case'+':
        resultado=operando1+operando2;
        break;
        case'-':
        resultado=operando1-operando2;
        break;
            case'*':
            case'x':
            resultado=operando1*operando2;
            break;
                case'/':
                case':':
                resultado=operando1/operando2;
                break;
    default:
        printf("\n Operacao invalida!\n");
        return 1;
    }
    printf("\n Resultado=%.2f\n", resultado);
}
