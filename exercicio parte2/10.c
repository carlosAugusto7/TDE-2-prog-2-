#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int letras = 0, digitos = 0, especiais = 0;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            letras++;
        } else if (isdigit(str[i])) {
            digitos++;
        } else {
            especiais++;
        }
    }

    printf("Número de letras: %d\n", letras);
    printf("Número de dígitos: %d\n", digitos);
    printf("Número de caracteres especiais: %d\n", especiais);

    return 0;
}
