//https://www.urionlinejudge.com.br/judge/pt/problems/view/1013

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int a, b, c, maiorAB, maiorAC, maiorBC;
	
	scanf("%d %d %d", &a, &b, &c);
	
	maiorAB = (a+b+abs(a-b))/2;
	
	if(maiorAB == a){
		maiorAC = (a+c+abs(a-c))/2;
		printf("%d eh o maior\n", maiorAC);
	}
	
	else
	{
		maiorBC = (b+c+abs(b-c))/2;
		printf("%d eh o maior\n", maiorBC);
	}
	
	return 0;
}
