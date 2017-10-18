#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n1, n2, Suma, Resta, Multiplicacion, division, r;
	cout<<"Dame un numero, bro"<< endl;
	cin>>n1;
	cout<<"Dame el segundo, apurate"<<endl;
	cin>>n2;
	Suma=n1+n2;
	Resta=n1-n2;
	Multiplicacion=n1*n2;
	division=n1/n2;
	r=n1%n2;
	cout<<"El resultado de la suma con los numeros que me diste es:"<<endl;
	cout<<Suma<<endl;
	cout<<"El resultado de la resta con los numeros que me diste y en el orden que me los diste es:"<<endl;
	cout<<Resta<<endl;
	cout<<"El resultado de la multiplicacion con los numeros que me diste es:"<<endl;
	cout<<Multiplicacion<<endl;
	cout<<"El resultado de la division con los numeros que me diste y en el orden que me los diste es:"<<endl;
	cout<<division<<endl;
	cout<<"El residuo de la division anterior es:"<<endl;
	cout<<r<<endl;

	return 0;
}
