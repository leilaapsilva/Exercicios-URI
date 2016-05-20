//https://www.urionlinejudge.com.br/judge/pt/problems/view/1173

#include <stdio.h>
 
int main() {
 
   int N[10], i;
   
   scanf("%d", &N[0]);
   
   for(i = 1; i < 10; i++){
       N[i] = 2 * N[i - 1];
   }
 
    for(i = 0; i < 10; i++){
        printf("N[%d] = %d\n", i, N[i]);
    }
 
    return 0;
}
