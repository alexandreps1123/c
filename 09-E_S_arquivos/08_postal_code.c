/*  sugestao
    implementar as funcoes de apagar nome
                busca por endereco
*/
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 100

struct list_type {
    char name[40];
    char street[40];
    char city[30];
    char state[3];
    char zip[10];
} list[SIZE];

int menu(void);
void init_list(void), enter(void);
void display(void), save(void);
void load(void);

int main(void) {
    char choice;

    init_list();

    for(;;) {
        choice = menu();
        switch (choice) {
            case 'e': enter();
                break;
            case 'd': display();
                break;
            case 's' : save();
                break;
            case '1': load();
                break;
            case 'q': return 0;
        }
    }

    return 0;
}

/*inicializa a lista*/
void init_list(void)    {
    register int t;

    for(t=0; t<SIZE; t++) *list[t].name =  '\0';
}

/*poe os nomes na lista*/
void enter(void) {
    register int i;

    for(i=0; i<SIZE; i++)
        if(!*list[i].name) break;

    if(i==SIZE) {
        printf("lista cheia.\n");
        return;
    }

    printf("nome: ");
    fgets(list[i].name, 40, stdin);

    printf("rua: ");
    fgets(list[i].street, 40, stdin);

    printf("cidade: ");
    fgets(list[i].city, 30, stdin);

    printf("estado: ");
    fgets(list[i].state, 3, stdin);

    printf("CEP: ");
    fgets(list[i].zip, 10, stdin);
   
}

/*mostra a lista*/
void display(void) {
    register int t;

    for(t=0; t<SIZE; t++) {
        if(*list[t].name) {
            printf("%s\n", list[t].name);
            printf("%s\n", list[t].street);
            printf("%s\n", list[t].city);
            printf("%s\n", list[t].state);
            printf("%s\n\n", list[t].zip);
        }
    }
}

/*salva a lista*/
void save(void) {
    FILE *fp;
    register int i;

    if((fp=fopen("maillist.txt", "wb"))==NULL) {
        printf("O arquivo não pode ser aberto.\n");
        return;
    }

    for(i=0; i<SIZE; i++) {
        if(*list[i].name)

            if(fwrite(&list[i],
                sizeof(struct list_type), 1, fp) !=1)
                    printf("Erro de escrita no arquivo.\n");
    }

    fclose(fp);
}

/*obtem uma selecao de menu*/
int menu(void) {
    char s[80];

    do {
        printf("(I)nserir\n");
        printf("(V)isualizar\n");
        printf("(C)arregar\n");
        printf("(S)alvar\n");
        printf("(T)erminar\n");
        printf("escolha: ");
        
        fgets(s, 80, stdin);

    }while(!strchr("ivcst", tolower(*s)));

    return tolower(*s);
}