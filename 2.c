#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, count = 0;

    printf("Digite uma frase: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; i < strlen(str); i++) {
        if (str[i] == 'a' || str[i] == 'A') {
            count++;
        }
    }
    if (count > 0) {
        printf("A letra 'a' (mai�scula ou min�scula) aparece %d vezes na string.\n", count);
    } else {
        printf("A letra 'a' (mai�scula ou min�scula) n�o foi encontrada na string.\n");
    }

    return 0;
}