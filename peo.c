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
		
		if (printf("CALCULADORA DE AREAS Y PERIMETROS DE FIGURAS GEOMETRICAS\n") < 0) perror("ERROR");
		if (printf("Selecciona tu figura.\n") < 0) perror("ERROR");
		if (printf("1. Circulo.\n") < 0) perror("ERROR");
		if (printf("2. Cuadrado.\n") < 0) perror("ERROR");
		if (printf("3. Triangulo.\n") < 0) perror("ERROR");
		if (printf("0. Salir.\n") < 0) perror("ERROR");
		scanf("%d", &x);
		switch(x){
			case 1:
				if (printf("Ingresa radio de circulo\n") < 0) perror("ERROR");
				int r = 0;
				scanf("%d", &r);
				if (printf("\nEl perimetro del circulo es %f\n", perimetroCirculo(r)) < 0) perror("ERROR");
				if (printf("El area del circulo es %f\n\n", areaCirculo(r)) < 0) perror("ERROR");
				break;
			case 2:
				if (printf("Ingrese lado cuadrado\n") < 0) perror("ERROR");
				int c = 0;
				scanf("%d", &c);
				if (printf("\nEl perimetro del cuadrado es %f\n", perimetroCuadrado(c)) < 0) perror("ERROR");
				if (printf("El area del cuadrado es %f\n\n", areaCuadrado(c)) < 0) perror("ERROR");
				break;
			case 3:	
				if (printf("Ingrese los lados del triangulo rectangulo\n") < 0) perror("ERROR");
				int t1 = 0, t2 = 0, t3 = 0;
				if (printf("Base: ") < 0) perror("ERROR");
				scanf("%d", &t1);
				if (printf("Altura: ") < 0) perror("ERROR");
				scanf("%d", &t2);
				if (printf("Hipotenusa ") < 0) perror("ERROR");
				scanf("%d", &t3);
				if (printf("\nEl perimetro del triangulo es %f\n", perimetroTriangulo(t1, t2 ,t3)) < 0) perror("ERROR");
				if (printf("El area del triangulo es %f\n\n", areaTriangulo(t1, t2)) < 0) perror("ERROR");
				break;
			case 0:
				if (printf("Gracias por usar esta calculadora\n") < 0) perror("ERROR");
				break;
			default:
				if (printf("Ingrese un valor valido.\n") < 0) perror("ERROR");
				break;
		}
	}while(x != 0);
	return 0;
}
