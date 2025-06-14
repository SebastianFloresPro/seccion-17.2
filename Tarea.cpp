#include <iostream>
#include <string>


int areaRectangulo(int base, int altura) 
{
	return base * altura;
}

int areaTriangulo(int base, int altura) 
{
	return (base * altura) / 2;
}

int areaCirculo(int radio , int ) 
{
	return radio * radio * 3.1416;
}

int areaCuadrado(int lado, int )
{
	return lado * lado;
}


void ejecutar(int (*Arrpf)(int, int), int ArrPar[], std::string nombres[]) 
{
	
	std::cout << "Area del " << nombres[0] << ": "; 
	std::cout << Arrpf(ArrPar[0], ArrPar[1]) << std::endl;
}

int main() {
	
	int paramsRectangulo[] = {5, 3};  
	int paramsTriangulo[] = {5, 3};   
	int paramsCirculo[] = {5, 0};    
	int paramsCuadrado[]={5, 5};     
	
	
	std::string n[] = {"rectángulo", "triángulo", "circulo", "cuadrado"};
	
	
	
	ejecutar(areaRectangulo, paramsRectangulo, n);
	ejecutar(areaTriangulo, paramsTriangulo, n+1); 
	ejecutar(areaCirculo, paramsCirculo, n+2);     
	ejecutar(areaCuadrado, paramsCuadrado,n+3);
	
	
}

