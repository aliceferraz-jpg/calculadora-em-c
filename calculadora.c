#include <stdio.h>

double lerNumero() {
    double numero;

    while (scanf("%lf", &numero) != 1) {
        printf("Entrada invalida! Digite novamente: ");
        while (getchar() != '\n');
    }

    return numero;
}
int main() {
    int opcao = 0;
    char continuar = 's';
    double numero1, numero2, resultado;
    while (continuar == 's') {

    printf("===== CALCULADORA =====\n");
    printf("1 - Adição\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    printf("5 - Sair\n");

    printf("Escolha uma opção: ");
if (scanf("%d", &opcao) != 1) {
    printf("Entrada invalida!\n");
    while (getchar() != '\n');
    continue;
}
switch (opcao) {
    case 1:
    printf("Digite o primeiro número: ");
    numero1 = lerNumero();

    printf("Digite o segundo número: ");
    numero2 = lerNumero();

    resultado = numero1 + numero2;

    printf("Resultado: %.10g + %.10g = %.10g\n", numero1, numero2, resultado);
    break;

    case 2:
    printf("Digite o primeiro número: ");
    numero1 = lerNumero();

    printf("Digite o segundo número: ");
    numero2 = lerNumero();

    resultado = numero1 - numero2;

    printf("Resultado: %.10g - %.10g = %.10g\n", numero1, numero2, resultado);
    break;

    case 3:
    printf("Digite o primeiro número: ");
    numero1 = lerNumero();

    printf("Digite o segundo número: ");
    numero2 = lerNumero();

    resultado = numero1 * numero2;

    printf("Resultado: %.10g * %.10g = %.10g\n", numero1, numero2, resultado);
    break;

    case 4:
    printf("Digite o primeiro número: ");
    numero1 = lerNumero();

    printf("Digite o segundo número: ");
    numero2 = lerNumero();

    if (numero2 != 0) {
    resultado = numero1 / numero2;
    printf("Resultado: %.10g / %.10g = %.10g\n", numero1, numero2, resultado);
} else {
    printf("Erro: Divisão por zero não é permitida.\n");
}
    break;

    case 5:
    continuar = 'n';
    break;

    default:
        printf("Opção invalida!\n");
}
if (opcao == 5) {
    printf("Obrigado por usar a calculadora! Até a próxima.\n");
} else {
    printf("Deseja realizar outra operação? (s/n): ");
    scanf(" %c", &continuar);

    while (continuar != 's' && continuar != 'n') {
        printf("Resposta inválida! Digite s ou n: ");
        while (getchar() != '\n');
        scanf(" %c", &continuar);
    }

    if (continuar == 'n') {
        printf("Obrigado por usar a calculadora! Até a próxima.\n");
    }
}

}
    return 0;
}