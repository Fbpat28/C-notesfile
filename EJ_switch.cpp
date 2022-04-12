#include<iostream>

using namespace std;

int main () {
	int option = 0;
	cout << "ESTAS SON LAS OPCIONES DISPONIBLES" << endl;
	cout << " 1 = Escuchar el mensaje de voz" << endl;
	cout << " 2 = Volver a escuchar el mensaje de voz" << endl;
	cout << " 3 = Guardar el mensaje de voz" << endl;
	cout << " 4 = Borrar el mensaje de voz" << endl;
	cout << "Ingrese el numero: ";
	cin >> option;
	switch (option) {
		case 1:
			cout << "A continuacion escuchara el mensaje de voz";
			break;
		case 2:
			cout << "A continuacion volvera a escuchar el mensaje de voz";
			break;
		case 3:
			cout << "Usted ha guardado el mensaje de voz";
			break;
		case 4:
			cout << "Usted a borrado el mensaje de voz :c";
			break;
		default:
			cout << "Esta opcion no existe, vuelva a seleccionar una opcion por favor.";
	}
}