#include<iostream>
#include<iomanip>

using namespace std;
const int CAPACIDAD = 5;
const int MAX_CONTENEDORES = 4;
//const int N=10;

/*
prototipo de funciones
void cargarDatos ( int [N][N], int& );
void mostrarMatriz ( int [N][N], int);
void promediosCol ( int [N][N], int, int [N]);
void imprimirArreglo (int [N], int);
double promediodiagonal ( int [N][N], int);
void matrizFinal ( int [N][N], int, int [N]);
*/
int validar_entero(int a, int b);
void asignar_en_contenedor(int contenedores[CAPACIDAD][MAX_CONTENEDORES], int dimension, int c);


int main()
{
    //Desarrolle aqui su programa principal

    //INICIO EJERCICIO 1
    int limiteInferior = 5;
    int limiteSuperior = 10;
    int resultado;

    resultado = validar_entero(limiteInferior, limiteSuperior);

    cout << resultado << endl;
    //FIN EJERCICIO 1
    //INICIO EJERCICIO 2
    //CAPACIDAD ES LA CANTIDAD DE FILAS QUE PUEDE TENER LA MATRIZ, MAX_CONTENEDORES LA CANTIDAD DE COLUMNAS.
    //dimensiones es la cantidad de 1 que quiero colocar en una columna(contenedor o llamado aca como "c").
    //c es el numero de columna , es decir es un contenedor dicho en la linea anterior.

    int contenedores[CAPACIDAD][MAX_CONTENEDORES] = {
                                                        0, 0, 1, 0,
                                                        0, 0, 1, 0,
                                                        1, 0, 1, 0,
                                                        1, 0, 1, 1,
                                                        1, 1, 1, 1,
                                                    };
    asignar_en_contenedor(contenedores,3,1);

    //FIN EJERCICIO 2

    system("pause");
    return 0;
}


//A partir de aqui puede desarrollar el codigo de las funciones solicitadas.
int validar_entero(int a, int b){
    int numero;
    cout << "Ingrese un valor en el intervalo ["<<a<<","<<b<<"]: "<< endl;
    cin >> numero;

    while(numero<a || numero>b){
        cout << "El valor debe estar en el intervalo ["<<a<<","<<b<<"]. Reingrese: "<< endl;
        cin >> numero;
    }

    return numero;

}

void asignar_en_contenedor(int contenedores[CAPACIDAD][MAX_CONTENEDORES], int dimension, int c){
    int indice;
    for (int i=0; i<CAPACIDAD; i++){
        if (contenedores[i][c]==0){
            indice=i;
        }
    }
    for (int i=0; i<dimension; i++){
        contenedores[indice][c]=1;
        indice--;
    }
    //opcional para ver si lo realizo bien
    cout << "resultado ejercicio 2" << endl;
    for(int i=0; i<CAPACIDAD; i++)
    {
        for(int j=0; j<MAX_CONTENEDORES; j++){
            cout << contenedores[i][j];
        }
        cout << endl;
    }
}

