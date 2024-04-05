#include <iostream>

int main(){

    int num;

    printf("Digite o seu número: ");
    scanf("%d", &num);

    if (num > 0) {
    printf("Seu número é positivo\n");
    } else {
        printf("O número digitado não é positivo\n");
    }
    return 0;
}