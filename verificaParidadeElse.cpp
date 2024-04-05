#include <iostream>

int main(){

    int num;

    printf("Digite o seu número: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("Seu número digitado é par\n");
    } else {

    printf("Seu número digitado é ímpar\n");
    }
    return 0;
}