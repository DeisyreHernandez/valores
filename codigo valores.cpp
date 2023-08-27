#include <iostream>
#include <algorithm>

using namespace std;

const int ARRAY_SIZE = 15;

void Arreglo(int arreglo[]){
	for(int n = 0; n < ARRAY_SIZE; ++n){
		cout << arreglo[n] << " "<< endl;
	} 
	
}


int main(){
	int arreglo1[ARRAY_SIZE];
	int arreglo2[ARRAY_SIZE];
	int arreglo3[ARRAY_SIZE];
	
	for (int n = 0; n <  ARRAY_SIZE; ++n){
		arreglo1[n] = n * 2;
		arreglo2[n] = n * 3;
		arreglo3[n] = n * 5;
	}
	char continuar;
	
   do{
	
        int numeroBuscar;
        cout <<"Ingresa el numero que deseas buscar : ";
        cin >> numeroBuscar;

       if (binary_search (arreglo1,arreglo1 + ARRAY_SIZE, numeroBuscar )){
	  cout <<"El numero " << numeroBuscar << " se encuentra en el arreglo 1." << endl;
    } 
 else if (binary_search (arreglo2,arreglo2 + ARRAY_SIZE, numeroBuscar )){
	cout <<"El numero " << numeroBuscar << " se encuentra en el arreglo 2." << endl;
    } 
  else if
  	(binary_search (arreglo3,arreglo3 + ARRAY_SIZE, numeroBuscar )){
	cout <<"El numero " << numeroBuscar << " se encuentra en el arreglo 3." << endl;
    } 
    else{
    	cout <<"El numero " << numeroBuscar << " no se encuentra en ningun arreglo.\n Intente nuevamente" << endl;
	}
	
	cout << "\n Deseas buscar otro numero? (S) Si y (N) NO: ";
	cin >> continuar;

     }while (continuar == 'S' ||continuar == 's' );

   return 0;
}