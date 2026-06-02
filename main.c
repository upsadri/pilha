/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define Max 10


typedef struct{
    
    int dados[Max];
    int topo;
}pilha;
void inicializar(pilha *p){
    p-> topo = -1;
}
int estavazia(pilha  * p){
    return p->topo == -1;
}
int estacheia(pilha * p){
    return p->topo == Max -1;
}
void push(pilha *p, int valor){
    if(estacheia (p)) return;
    p->dados[++p->topo] = valor;
}
int pop(pilha *p) {
    if(estavazia(p)) return -1;
    return p-> dados[p->topo--];
}
int peek(pilha *p){
    if(estavazia(p)) return-1;
    return p->dados[p->topo];
}
int main(void){
pilha p;
inicializar(&p);
push(&p, 30); push(&p, 40);
printf("%d\n", pop(&p));
}