#include <iostream>

int main(){

    int num;

    printf("Digite o seu número: ");
    scanf("%d", &num);

    if (num > 10) {
        printf("%d número é maior que 10\n", num);
    } else if (num == 10) {
    printf("%d número é igual a 10\n", num);
    } else (num < 10) {
        printf("%d número é menor que 10 %d\n", num);
    }
    return 0;
}