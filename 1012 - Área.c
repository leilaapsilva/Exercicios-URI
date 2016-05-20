//https://www.urionlinejudge.com.br/judge/pt/problems/view/1012

#include <stdio.h>
#include <stdlib.h>


int main()
{
	double A, B, C, atriangulo, acirculo, atrapezio, aquadrado, aretangulo;
	
	scanf("%lf %lf %lf", &A, &B, &C);
	
	atriangulo = (A * C) / 2;
	acirculo = 3.14159*C*C;
	atrapezio = (A + B)* C / 2;
	aquadrado = B*B;
	aretangulo = A*B;
	
	printf("TRIANGULO: %.3lf\n", atriangulo);
	printf("CIRCULO: %.3lf\n", acirculo);
	printf("TRAPEZIO: %.3lf\n", atrapezio);
	printf("QUADRADO: %.3lf\n", aquadrado);
	printf("RETANGULO: %.3lf\n", aretangulo);
	
	return 0;
}
