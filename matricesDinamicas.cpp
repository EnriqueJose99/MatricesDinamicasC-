#include <iostream>
using namespace std;

//prototipos
//pedir datos de la matriz
void pedirDatos();
//imprimir matriz
void printMatrix(int**, int, int);


int** punteroMatriz, nFilas, nCol;

int main(){
	void pedirDatos();
	void printMatrix(punteroMatriz, nFilas, nCol);
	//liberar memoria para matriz 
	for(int i=0;i<nFilas;i++){
		delete[] punteroMatriz[i];
	}
	delete[] punteroMatriz;
	return 0;
}

void pedirDatos(){
	cout<<"Pedir filas de la matriz: "<<endl;
	cin>> nFilas;
	cout<<"Pedir columnas de la matriz: "<<endl;
	cin>> nCol;
	//reservar memoria para la matriz
	punteroMatriz = new int*[nFilas];
	for(int i=0;i<nFilas;i++){
		punteroMatriz[i] = new int[nCol];
	}

	cout<<"Digite los elementos de la matriz: "<<endl;
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
			cout<<"Digite los numeros [ " <<i<<" ]"<< "["<<j<<" ]"<<endl;
			cin >> *(*(punteroMatriz+i)+j);//puntero matriz guardando [i][j]
		}
	}
}
void printMatrix(int **punteroMatriz, int nFilas, int nCol){
	cout<<"Imprimiendo matriz"<<endl;

	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
			cout<<*(*(punteroMatriz+i)+j);
		}
		cout<<endl;
	}
}
