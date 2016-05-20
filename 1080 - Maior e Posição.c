//https://www.urionlinejudge.com.br/judge/pt/problems/view/1080

#include <stdio.h>
 
int main() {
 
   int X, count,
        posicao = 0,
        maior = 0;

        for (count=1; count<=100; count++)
        {
            scanf ("%i", &X);

            if(X > maior)
            {
                maior = X;
                posicao = count;
            }
        }
        printf ("%i\n", maior);
        printf ("%i\n", posicao);
 
    return 0;
}
