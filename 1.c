#include <stdio.h>

int main() {
    int n, i,t1 = 0, t2 = 1, nextTerm,E,flag;

    printf("Digite o numero de termos:(entre 1 e 10) ");
    scanf("%d", &n);
    printf("Qual o numero que deseja procurar na sequencia? ");
    scanf("%d",&E);

    printf("Sequencia de Fibonacci: ");
    flag=0;
    for (i = 1; i <= n; ++i) {
        printf("%d, ", t1);
        if(E==t1){
			printf("\nO numero foi encontrado na posicao %d da sequencia.",i);
			flag=1;
			break;
		}
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    if(flag==0){
		printf("\nO numero nao foi encontrado na sequencia.");
	}

    return 0;
}