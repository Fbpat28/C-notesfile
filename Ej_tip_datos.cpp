#include <iostream>
using std::cout;
using std::endl;

int main(){
    int boolean = true;
    cout << boolean << endl;

    int number1 = 3 / 2;
    cout << number1 << endl;

    float number2 = 2.5;
    cout << number2 << endl;

    double number3 = 2.53;
    cout << number3 << endl;

    char letra = 'a';
    cout << letra << endl;

    cout << "Hello World" << endl;
    cout << "Bye World" << endl;
    int inicio = 65;
    int limite = 90;
    
    for (int i = inicio; i <= limite; i++)
    {
        cout <<" | Caracter: "<< (char) i << " Número ASCII: " << i << "| ";
        if( i % 2 == 0){
            cout << endl;
        }   
    }
  return 0;
}