#include <iostream>

int main(){

    int num;

    printf("Digite o seu número: ");
    scanf("%d", &num);

    if (num < 0) {
    printf("Seu número é negativo\n");
    } else {
        printf("O número digitado é positivo\n");
    }

    printf("Digite o seu número: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("Seu número é par\n");
    } else {
        printf("Seu número é ímpar\n");
    }
    return 0;
}