#include <iostream>

int main(){

    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18) {

        printf("Você é maior de idade\n");
    }
    return 0;
}