#include <stdio.h>
#include <stdlib.h>

#define MAX 100

struct addr {
    char name [30];
    char street[40];
    char city[20];
    char state[3];
    unsigned long int zip;
}addr_info [MAX];

void init_list(void), enter(void);
void delete(void), list(void);
int menu_select(void), find_free(void);

int main() {
    char choice;

    init_list();

    for(;;) {
        choice = menu_select();
        switch(choice) {
            case 1: enter();
                break;
            case 2: delete();
                break;
            case 3: list();
                break;
            case 4: exit(0);
        }  
    }

    return 0;
}

/*inicializa a lista*/
void init_list(void) {
    register int t;

    for(t=0; t<MAX; ++t) addr_info[t].name[0] = '\0';
}

/*obtem a selecao*/
int menu_select(void) {
    char s[80];
    int c;

    printf("1. Inserir um nome\n");
    printf("2. Excluir um nome\n");
    printf("3. Listar o arquivo\n");
    printf("4. Sair\n");
    
    do {
        printf("Digite uma escolha: ");
        fgets(s, 80, stdin);
        c = atoi(s);
    } while(c<0 || c>4);

    return c;
}

/*insere os enderecos na lista*/
void enter(void) {
    int slot;
    char s[80];

    slot = find_free();
    if(slot==-1) {
        printf("\nlista cheia");
        return;
    }

    printf("Digite o nome: ");
    fgets(addr_info[slot].name, 30, stdin);

    printf("Digite a rua: ");
    fgets(addr_info[slot].street, 40, stdin);

    printf("Digite o cidade: ");
    fgets(addr_info[slot].city, 20, stdin);

    printf("Digite o estado: ");
    fgets(addr_info[slot].state, 3, stdin);

    printf("Digite o cep: ");
    fgets(s, 80, stdin);
    addr_info[slot].zip = strtoul(s, '\0', 10);

}

/*encontrar uma estrutura nao usada*/
int find_free(void) {
    register int t;

    for(t=0; addr_info[t].name[0] && t<MAX; ++t);

    if(t==MAX) return -1; /*nenhum elemento livre*/
    return t;
}

/*apaga um endereco*/
void delete(void) {
    register int slot;
    char s[80];

    printf("Digite o registro #: ");
    fgets(s, 80, stdin);

    slot = atoi(s);
    if(slot >= 0 && slot < MAX)
        addr_info[slot].name[0] = '\0';
}

/*mostra a lista na tela*/
void list(void) {
    register int t;

    for(t=0; t<MAX; ++t) {
        if(addr_info[t].name[0]) {
            printf("%s\n", addr_info[t].name);
            printf("%s\n", addr_info[t].street);
            printf("%s\n", addr_info[t].city);
            printf("%s\n", addr_info[t].state);
            printf("%lu\n", addr_info[t].zip);
        }
        printf("\n\n");
    }
}