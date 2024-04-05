#include <iostream>

int main(){

    int num;

    printf("Digite o seu número: ");
    scanf("%d", &num);

    if (num % 2 == 0) {

        printf("O seu número digitado é par\n");
    }
    return 0;
}