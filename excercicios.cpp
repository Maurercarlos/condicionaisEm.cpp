#include <iostream>

int main(){

    int num;

    printf("Digite o seu número: ");
    scanf("%d", &num);

    if (num > 10) {
        printf("Seu número é maior que 10\n");
    }

     printf("Digite o seu número: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Seu número é igual 0\n");
    }

    return 0;
}
