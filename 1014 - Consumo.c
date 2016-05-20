//https://www.urionlinejudge.com.br/judge/pt/problems/view/1014

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int x;
	double y, cons;
	
	scanf("%d", &x);
	scanf("%lf", &y);
	
	cons = x/y;
	
	printf("%.3lf km/l\n", cons);
	
	return 0;
}
