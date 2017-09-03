#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#define PI 3.14159265358979323846

bool menorIgualCero(float x){
	bool answer = false;
	if( x <= (float)0 ){
		printf("Valor invalido\n");
		answer = true;
	}
	return answer;
}

bool menorIgualCero2(float x, float y){
	bool answer = false;
	if( (x <= (float)0) || (y <= (float)0)){
		printf("Valores invalido\n");
		answer = true;
	}
	return answer;
}

bool menorIgualCero3(float x, float y, float z){
	bool answer = false;
	if( (x <= (float)0) || (y <= (float)0) || (z <= (float)0)){
		printf("Valores invalidos\n");
		answer = true;
	}
	return answer;
}

float perimetroCirculo(float a){
	if(!menorIgualCero(a)){
		float result = (float)(2 * PI * a);
		return result;
	}
}

float areaCirculo(float a){
	if(!menorIgualCero(a)){
		float result = (float)(PI * pow(a, 2));
		return result;
	}
}

float perimetroCuadrado(float a){
	if(!menorIgualCero(a)){
		float result = (float)(a *4);
		return result;
	}
}

float areaCuadrado(float a){
	if(!menorIgualCero(a)){
		float result = (float)(pow(a, 2));
		return result;
	}
}

float perimetroTriangulo(float a, float b, float c){
	if(!menorIgualCero3(a, b, c)){
		float result = (float)(a + b + c);
		return result;
	}
}

float areaTriangulo(float a, float b){
	if(!menorIgualCero2(a, b)){
		float result = (float)((a * b)/2);
		return result;
	}
}


int main(void){
	int x = 0;
	do{
		
		int errno = 0;
		int result = printf("holi");
		if (result < 0 && errno != 0)
		{
			
		}
		
		
		printf("CALCULADORA DE AREAS Y PERIMETROS DE FIGURAS GEOMETRICAS\n");
		printf("Selecciona tu figura.\n");
		printf("1. Circulo.\n");
		printf("2. Cuadrado.\n");
		printf("3. Triangulo.\n");
		printf("0. Salir.\n");
		scanf("%d", &x);
		switch(x){
			case 1:
				printf("Ingresa radio de circulo\n");
				int r = 0;
				scanf("%d", &r);
				printf("\nEl perimetro del circulo es %f\n", perimetroCirculo(r));
				printf("El area del circulo es %f\n\n", areaCirculo(r));
				break;
			case 2:
				printf("Ingrese lado cuadrado\n");
				int c = 0;
				scanf("%d", &c);
				printf("\nEl perimetro del cuadrado es %f\n", perimetroCuadrado(c));
				printf("El area del cuadrado es %f\n\n", areaCuadrado(c));
				break;
			case 3:	
				printf("Ingrese los lados del triangulo rectangulo\n");
				int t1 = 0, t2 = 0, t3 = 0;
				printf("Base: ");
				scanf("%d", &t1);
				printf("Altura: ");
				scanf("%d", &t2);
				printf("Hipotenusa ");
				scanf("%d", &t3);
				printf("\nEl perimetro del triangulo es %f\n", perimetroTriangulo(t1, t2 ,t3));
				printf("El area del triangulo es %f\n\n", areaTriangulo(t1, t2));
				break;
			case 0:
				printf("Gracias por usar esta calculadora\n");
				break;
			default:
				printf("Ingrese un valor valido.\n");
				break;
		}
	}while(x != 0);
	return 0;
}
