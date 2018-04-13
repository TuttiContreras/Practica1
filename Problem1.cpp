#include <iostream>
#include <string>

int Valor(double x) {
    x*=x;
	return x;
}

int Referencia(double &x){
	x*=x;
	return x;
}

int main() {
	double x=20;
	std::cout<<"Resultado por valor = "<<Valor(x)<<"\n";
	std::cout<<"Resultado por referencia = "<<Referencia(x);
	return 0;
}
