//https://www.urionlinejudge.com.br/judge/pt/problems/view/1177

#include <stdio.h>
#define tam 1000
 
int main() {
 
    int T, N[tam], i;
    
    scanf("%d", &T);
    
    for(i = 0; i < tam; i++){
    	N[i] = i % T;
    }
    
    for(i = 0; i < tam; i++){
    	printf("N[%d] = %d\n", i, N[i]);
    }
    
    return 0;
}
