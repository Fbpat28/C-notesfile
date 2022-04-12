#include <iostream>

using namespace std;

int main() {

    //Se declaran las variables como 2 enteros
    int n1 = 2;
    int n2 = 3;

    cout << "El primer valor es " << n1 << endl;
    cout << "El segundo valor es " << n2 << endl;

    //Operadores aritméticos
    //cout << n1 + n2 << endl;    Se puede hacer la suma en cout   
    int r1 = n1 + n2;
    cout << "La suma de las variables da como resultado " << r1 << endl;

    r1 = n1 * n2;
    cout << "La multiplicación de las variables da como resultado " << r1 << endl;

    r1 = n1 - n2;
    cout << "La resta de las variables da como resultado " << r1 << endl;

    //Operadores de comparación
    bool r2 = n1 < n2;
    cout <<"¿Es "<< n1 <<" < " << n2 << " ? La respuesta da "<< r2 << endl;

    r2 = n1 > n2;
    cout <<"¿Es "<< n1 <<" > " << n2 << " ? La respuesta da "<< r2 << endl;
    
    r2 = n1 == n2;
    cout <<"¿Es "<< n1 <<" igual a " << n2 << " ? La respuesta da "<< r2 << endl;

    //Operadores de asignación
    n1 += 1;
    cout <<"El nuevo valor de n1 es "<< n1 << endl;

    //sizeof() nos permite obtener el tamaño en bytes de un dato
    cout << "La variable n1 ocupa " << sizeof(n1) << " bytes de tamaño"<< endl;

    //Calcular cuántos elementos tiene una lista
    int edades[] = {24, 40, 7};
    int n_elementos = sizeof(edades) / sizeof(edades[0]);
    cout << "La lista edades tiene " <<n_elementos << " elementos " << endl;

}