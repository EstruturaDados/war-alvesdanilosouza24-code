#include <stdio.h>
#include <string.h>

// Estrutura do território
struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

int main() {
    struct Territorio territorios[5];

    for (int i = 0; i < 5; i++) {
        printf("==========================================\n");
        printf(" CADASTRANDO TERRITORIO %d\n", i + 1);

        // Limpa o buffer antes de usar fgets (por causa do scanf anterior)
        getchar(); // só necessário após scanf() anterior (primeira vez pode ignorar)

        // Nome
        printf("NOME DO TERRITORIO:\n");
        fgets(territorios[i].nome, sizeof(territorios[i].nome), stdin);
        territorios[i].nome[strcspn(territorios[i].nome, "\n")] = '\0';

        // Cor
        printf("Cor do exercito (ex: azul, verde):\n");
        fgets(territorios[i].cor, sizeof(territorios[i].cor), stdin);
        territorios[i].cor[strcspn(territorios[i].cor, "\n")] = '\0';

        // Tropas
        printf("Numero de tropas:\n");
        scanf("%d", &territorios[i].tropas);
    }

    // Exibindo tudo no final
    printf("\n\n====== TERRITÓRIOS CADASTRADOS ======\n");
    for (int i = 0; i < 5; i++) {
        printf("Território %d:\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor: %s\n", territorios[i].cor);
        printf("Tropas: %d\n", territorios[i].tropas);
        printf("------------------------------------------\n");
    }

    return 0;
}