#include <iostream>

int main(){

    int num;

    printf("Digite o seu número: ");
    scanf("%d", &num);

    if (num >= 10) {
        printf("Você é maior de idade\n");
    } else { 
        printf("Você é menor de idade\n");

    } 
    return 0; 
    }