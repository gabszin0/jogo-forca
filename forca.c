#include <stdio.h> 
#include <string.h>

char palavrasecreta[20];
char chutes[26];
int tentativas = 0;


//Criação de uma função para otimizar o código
void abertura(){

printf("*************************\n");
printf("*     Jogo de Forca      *\n");
printf("*************************\n\n");


}

void chuta() {
    char chute;

    printf("Qual letra? ");
    scanf(" %c", &chute);

    chutes[tentativas] = chute;
}

int main(){
char chute;
int acertou = 0;
int enforcou = 0;


// Cria um array de 20 carácteres 
char palavrasecreta[20];

// A fução 'sprintf' imprime um Array de chars
sprintf(palavrasecreta, "MELANCIA");

char chutes[26];
int tentativas = 0;

abertura();

//Para capturar o tamanho da palavra dentro de um Array, utiliza-se a função 'strlen()' (Cujo está na lib '<string.h>')
    
    for(int i = 0; i < strlen(palavrasecreta); i++){
        
        int achou = 0;

    for(int j = 0; j < tentativas; j++){            

            if(chutes[j] == palavrasecreta[i]){

            achou = 1;
            break; 
            }
        }
    if(achou){
        printf("%c ", palavrasecreta[i]);
    }

    else{

        printf("_ ");
    }
    
}  
    printf("\n");

    scanf(" %c", &chute);
    
    chuta(chutes,tentativas);
    tentativas++;
    
}

while(!acertou && !enforcou);


return 0;
}

/* A função do loop 'do-while' tem como principal objetivo 
executar um bloco de código e depois verificar sua condição
Exemplo:

do {

**código**

} while();

*/

/*
Imprime a string utilizando uma 'mascara "%s"'
printf("%s", palavrasecreta);

*/
