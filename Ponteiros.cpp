#include <stdio.h>
#include <stdlib.h>
//analise esse programa manipulando ponteiros.
int main(){

int x = 10;
int y = x;

int *ponteiro = &y;
x = 15;
printf("o endere�o de x eh = %d.O valor de x eh = %i",ponteiro,*ponteiro);
printf("\no endere�o de y eh = %d.O valor de y eh = %i",ponteiro,*ponteiro);



















return 0;
}
