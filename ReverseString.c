#include <stdio.h>
#include <string.h>
#include <locale.h>


int endString(char *str){
    str[strlen(str)-1] = '\0';
    return(0);

}

int strlenEspecial(char *str){
    int i = 0;

    while(*str!='\0'){
        i++;
        str++;
    }
    return(i);
}

int reverse(char *str, int result){
    int i = 0;

    for (i=result;i>=0;i--){
        printf("%c", str[i]);
    }
    return(0);
}

int main(void){
    char test[200];
    int result = 0;

    setlocale(LC_ALL, "");

    printf("Type a string: ");
    fgets(teste, 200, stdin);
    zera(teste);

    result = strlenEspecial(test);
    printf("This string has %i characters.\n", resul);
    printf("This inverted string is: ");
    inverte(test, result);
    printf("\n");

    return(0);
}

