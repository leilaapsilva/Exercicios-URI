//https://www.urionlinejudge.com.br/judge/pt/problems/view/1064

#include <iostream>
   
using namespace std;
   
int main() {
    float valor, media, soma = 0.0; 
    int i = 0,total = 0;
      
    while (i <= 5){
        scanf("%f", &valor);
        if(valor > 0){
            total = total + 1;
            soma = soma + valor;
            media = soma / total;
        }
    i++;    
    }
      
    printf("%d valores positivos\n", total);
    printf("%.1f\n", media);
    return 0;
}
