#include <stdio.h>

int main(void){
    char nome[50];
    char crypt[50];
    char decrypt[50];
    int x;

    printf("Digite seu nome: ");
    scanf("%49s", nome);

    for (x=0;x<50;x++){
        if (nome[x] == 0)
            break;
        crypt[x] = nome[x] + 3;

    }
    printf("Seu nome encrypitado é: %s\n", crypt);

    for (x=0;x<50;x++){
        if (crypt[x] == 0)
            break;
        decrypt[x] = crypt[x] - 3;
    }
    printf("Seu nome decryptado é: %s\n", decrypt);
    return 0;
}
