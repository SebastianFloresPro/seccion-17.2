#include <iostream>
#include <string>


int arectangulo(int base, int altura) 
{
    return base * altura;
}

int atriangulo(int base, int altura) 
{
    return (base * altura) / 2;
}

int acirculo(int radio , int radio1)
{
    return radio * radio1* 3.1416;
}

int acuadrado(int l, int l1)
{
    return l1 * l;
}


void ejecuta(int (*Arrpf[])(int, int), int ArrPar[], std::string nombres[]) {
    int* p = ArrPar;
  
    std::string* p2 = nombres;      
    int (**pf)(int, int) = Arrpf;   

    for (int i = 0; i < 4; i++) {
        std::cout << "Área del " << *p2 << ": ";
        std::cout << (*(*pf))(*p, *(p + 1)) << std::endl;
        
        p += 2;
      
        p2++;     
        pf++;     
    }
}
int main() {
    
    int parametros[8] = { 5, 3,   5, 3,   5, 5, 5, 5 };
    
    
    std::string n[] = {"rectángulo", "triángulo", "circulo", "cuadrado"};
    
    
    int (*Arrpf[])(int, int) = {arectangulo, atriangulo, acirculo, acuadrado};

    ejecuta(Arrpf , parametros , n);
    
    
}

