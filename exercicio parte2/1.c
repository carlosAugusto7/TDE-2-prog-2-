#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    
    str[strcspn(str, "\n")] = 0; // Remove o '\n' gerado pelo fgets
    
    printf("Conteúdo da string: %s\n", str);
    printf("Comprimento da string: %zu\n", strlen(str));

    return 0;
}
