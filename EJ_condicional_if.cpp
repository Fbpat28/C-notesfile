#include <iostream> // obtener datos de entrada o de salida
using namespace std; //te permite utilizar, en el código, 
                        //nombres estandar de c++, para poder importarlas 
                        //sin necesidad de escribir desde donde la estamos importando
int main() {
    int edad = 0;
    cout << "edad: ";
    cin >> edad;
    if (edad <= 18 || edad >= 40) {
        cout << "No puedes votar";
    }
     else {
        cout << "Puedes votar";
    }
}