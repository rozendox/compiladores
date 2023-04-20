%{
#include <stdio.h>
%}


%%
"Lincon" {printf("Criador desse analisador lexico!");}
"Rozeno" {printf("Criador desse analisador lexico!");}
"type" {printf("retorna o tipo da variavel");}
"class" {printf("palavra reservada para criar uma classe");}
"while" {printf("palavra reservada para um laco de reticao");}
"break" {printf("palavra reservada para forcar a parada do laco de repiticao");}
"import" {printf("importa bibliotecas");}
"if" {printf("palavra reservada para inicio de bloco condicional");}
"elif" {printf("palavra reservada para adicionar uma condicional dentro de outra");}
"else" {printf("palavra reservada para finalizar a condicional se necessario");}
[0-9]+ {printf("Isto eh um inteiro/n");}
[a-zA-Z]+ {printf("Isto eh uma letra/n");}

. {printf("Rapaiz esse trem bem ai eu n faco ideia do que seja");}

%%

int main()
{
yylex();
return 0;
}
