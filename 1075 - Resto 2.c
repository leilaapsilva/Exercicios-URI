//https://www.urionlinejudge.com.br/judge/pt/problems/view/1075

#include <stdio.h>
  
int main() {
  
   int n, i;
    scanf("%d", &n);
    for(i=1;i<10001;++i)
        if(i%n==2)
            printf("%d\n",i);
  
    return 0;
}
