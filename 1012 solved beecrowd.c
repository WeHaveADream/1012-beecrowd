#include <stdio.h>
#include <math.h>

int main (){
	
	double a = 0, b = 0, c = 0;
	
	scanf("%lf %lf %lf", &a, &b, &c);
	
	printf("TRIANGULO: %.3lf", (a * c)/2);
	printf("\nCIRCULO: %.3lf", 3.14159 * pow(c, 2));
	printf("\nTRAPEZIO: %.3lf", ((a + b) * c / 2));
	printf("\nQUADRADO: %.3lf", b * b);
	printf("\nRETANGULO: %.3lf\n", a * b);

	return 0;
}
