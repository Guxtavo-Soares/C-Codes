#include <stdio.h>
#include <string.h>
#include <locale.h>


int zera(char *str){
    str[strlen(str)-1] = '\0';
    return(0);

}

int strlenGusta(char *str){
    int i = 0;

    while(*str!='\0'){
        i++;
        str++;
    }
    return(i);
}

int inverte(char *str, int result){
    int i = 0;

    for (i=result;i>=0;i--){
        printf("%c", str[i]);
    }
    return(0);
}

int main(void){
    char teste[200];
    int resultado = 0;

    setlocale(LC_ALL, "");

    printf("Digite uma string: ");
    fgets(teste, 200, stdin);
    zera(teste);

    resultado = strlenGusta(teste);
    printf("Essa string tem %i caracteres.\n", resultado);
    printf("Essa string invertida é: ");
    inverte(teste, resultado);
    printf("\n");

    return(0);
}

