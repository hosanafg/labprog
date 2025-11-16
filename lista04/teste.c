#include <stdio.h>
int main () {
    char x=10,y;
    char *px=&x; 
    /*o ponteiro px vai guardar o endereço de x. então, quando eu quiser fazer uma
    operação que envolva modificar o valor de x, eu uso o ponteiro e ele vai até o endereço de x,
    pega o valor que está nesse endereço, modifica e armazena no endereço de *px */
    
    char *py=&y; 
    puts("---Y: Antes da modificação---");
    printf("[%p] Y = %d\n",&y,y);
    printf("[%p] Y = %d\n",py,*py);
    
    *py=2* *px;
    /*explicação: antes, *py guardava um lixo de memória qualquer. 
    a expressão *py=2* *px significa que, agora, *py vai guardar o valor referente à 2x *px, que,
    por sua vez, está armazenando o valor referente ao endereço de x (inicialmente atribuído com x=10).
    Assim, o *py vai fazer 2*10=20, passando a armazenar o valor y=10. */
    
    printf("[%p] X = %d\n",&x,x);
    printf("[%p] X = %d\n",px,*px);

    puts("---Y: APÓS a modificação---");
    printf("[%p] Y = %d\n",&y,y);
    printf("[%p] Y = %d\n",py,*py);
}