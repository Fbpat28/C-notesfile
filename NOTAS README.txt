Tipos de datos
Bool (Boolean):
 Valor logico
 Puede ser Verdadero o Falso
 Tamaño de 4 bytes
 Int (Integer):
 Numero enteros
 Tamaño: 4 Bytes
 Float:
 Numeros de decimales (punto flotante)
 Tamaño: 4 bytes
 Double:
 Numeros de punto flotante de doble precision
 Tamaño: 8 bytes (4+4 = doble flotante)
 Char (Character):
 Caracter (ASCII)
 Muestra el caracter o su numero en ASCII
 Tamaño: 4 bytes

También tenemos:

 Short Int
 Unsign Int
 Long Double

int uno = 1;   // Válida. Compatible con C
int uno {1};   // Válida. Recomendada en C++ moderno

float dos = 2; // Compatible con C. 2 (entero) se convierte en flotante ("casting")
float dos {2}; // ERROR. No puede asignar un entero a una variable que se declaró como flotante

auto cinco {5};           // almacenará enteros
auto decimal {6.675}      // almacenará flotantes de doble precisión (double)
auto otroDecimal {3.14f}  // almacenará flotantes de precisión simple (float). Nótese la 'f'

¿Cómo crear variables?

tipoDeVariable nombreVariable = valorInicial
Ejemplo: int number = 0;

Las variables no pueden:
 Empezar con caracter especial
 Un numero
 No tienen espacio

 NOTAS:

Las variables pueden ser reasignadas, es decir puede inicializarlas y darles un valor, pero en la siguiente linea sobreescribir ese valor

(int, bool, etc) por ende las variables pueden ser uno de esos tipos de datos

DATO : Un pequeño dato que podría reducir erorres a la hora de definir y usar variables, es que C++ es un programa que distingue entre mayúsculas y minúsculas. Por lo que la variable “Edad” sería distinta de la variable “edad”

CONSTANTES Y LISTAS 
 en las listas  	{0,1,2,3} el primer elemento siempre sera el espacio 0
 el espacio dos sera el primer elemento y asi sucesivamente 
  variables 
   #include <iostream>

    using namespace std;

    int main(){   
    int edad = 0;
    edad = 18;
    cout << edad;
    }

 declaraciones de listas:
 float R[10] = {2, 32, 4.6, 2, 1, 0.5, 3, 8, 0, 12};
 float S[] = {2, 32, 4.6, 2, 1, 0.5, 3, 8, 0, 12};
 int N[] = {1, 2, 3, 6};
 char Mensaje[] = "Error de lectura";
 char Saludo[] = {'H', 'o', 'l', 'a', 0};

NOTA: Una particularidad adicional que tienen las constantes, es que no son almacenadas en memoria al momento de la ejecución, como es el caso de las variables. El compilador es quien se encarga de reemplazar el valor de dicha constante en cada lugar del programa en que se es referenciado.

Variables
  Pueden checkear acá para ver todos los operadores integrados en C**: https://docs.microsoft.com/es-es/cpp/cpp/cpp-built-in-operators-precedence-and-associativity?view=msvc-160
 Nota: Hay tanto básicos como avanzados

*lista (array) es de tipos int, también podemos calcular la cantidad de elementos haciendo:
  sizeof(edades) / sizeof(int)
y si fuera una lista de doubles:
  sizeof(lista) / sizeof(double)

Entrada y salida de datos
 La libreria iostream
  Su nombre completo es Input/Output Stream y su función es manejar el flujo de entrada-salida de datos.

  cout 🤝 cin:
   cout: Flujo de salida, usada para imprimir datos en la pantalla.
   cin: Flujo de entrada, usada para ingresar datos al programa, una de las tantas maneras de hacerlo es con el teclado.

 Operadores de direccionamiento
  Son los encargador de comunicar la o las fuentes de información (Por ejemplo, una variable o constante) con el objeto, en este caso, cout o cin. Los operadores de direccionamiento esta conformado por el signo de mayor (>), que sería para la entrada de datos y el signo de menor que (<), para la salida de datos.
  En la terminal y línea de comandos, los símbolos:
   “<” Redirecciona la entrada de un comando con el contenido de un archivo
  “>” Redirecciona la salida de un comando a un archivo. Si el archivo no existe lo crea, si existe lo sobreescribe
  “>>” Redirecciona la salida de un comando a un archivo. Si el archivo no existe lo crea, si existe lo concatena al final.

  cin >> variable; 
   Lee del teclado hasta que encuentra un espacio en blanco, tabulador o nueva linea, o sea una palabra a la vez.
  Si ingresamos: 1234 hola
  se guarda solamente 1234 en la variable, por lo que para leer el “hola” habría que usar una variable adicional como en
  cin >> numero >> texto;
  Las variables deben ser del tipo string o bien coincidir con los tipos de datos ingresados.
     
        #include <iostream>

      using namespace std;

     int main(){
    // esto es un comentario
    /* 
        esto es un comentario
    */
    int edad = 0;
    cout << edad;
    cin >> edad;
    cout << "tu edad es: " << edad;
    }

El condicional if/else
  Acá les dejo este valioso recurso para los que están haciendo operaciones entre operadores lógicos, la tabla de la verdad. Es muy útil para saber el posible resultado.
  https://ecomputernotes.com/images/Truth-table-for-OR-AND-and-NOT-operations.jpg

 //*extra*
    false = 0
    true = 1

 El condicional switch
      
       #include <iostream>

       using namespace std;

      int main(){
    int option = 0;
    cout << "Introduce una opción: ";
    cin >> option;
    switch (option) {
    case 1:
        cout << "Opción 1";
        break;
    case 2:
        cout << "Opción 2";
        break;
    default:
        cout << "Esto no existe";
        break;
    }
}
    **Dentro de los switch no se declaran variables, está hecho para solo mandar órdenes en casos. Declara todas las variables que vayas a usar iniciando tu código en la función principal ó decláralas de forma global.

 Los case tambien pueden escribirse entre llaves:
 Esto es importante tenerlo en cuenta porque hay veces donde el compilador marca error cuando dentro de los case existen variables con el mismo identificador. Colocar llaves delimita el scope y solventa este escenario
       case 1: {
            cout << "First option";
            break;
        }
Muy importnate usar "BREAK" : Termina el swith y no jecuta los siguientes.

Ciclo for:
 
  int limite;
    cout << "limite: ";
    cin >> limite;
    for (int i = 0; i <= limite; i += 2) 
    {
        cout << i << endl;
    } 

 Yo tenia un compa de la uni que utilizaba el for asi:
  for (; condicion ;) {
	//Codigo
  }
Como si de un While se tratase. No lo hagan, no es sano

Ciclos while y do-while
  
  
 tener en cuenta que de esta manera, la variable respuesta tiene que ser definida fuera del bloque do-while.
  
  ejemplo:

   char respuesta;
   do {
    // code
   } while (respuesta != 'y');

funciones
 funciones pueden declararce de dos maneras :
 –una que te retorna un valor :
  ejemplo :
  int nombre_funcion(variables){

  return variable que tu quieras;
  }
  float nombre_funcion(variables){

  return variable que tu quieras;
  }
  char nombre_funcion(variables){

  return variable que tu quieras;
  }
  –devuelve varios valores
  void(int &variable float &variable2){
  }
  **Realmente una función tipo “void” no devuelve nada, lo que haces es pasar por referencia 
 los argumentos, quiere decir que pasas la dirección en memoria donde se encuentran los datos
 que vas a modificar. Entonces cuando haces la modificación en ese espacio de memoria, se ven
 afectados los variables que pasas por referencia a la función.

La biblioteca estandar de C++
En C++ no hay tipo string, por ello, hay que importarlo de una libreria.
-iostream: Entrada y salida de datos.
- string: Manejo de cadenas de texto.
- cmath: Funciones matematicas comunes.
- exception: Utilidades para el manejo de errores.
- array: Manejo de arreglos de datos.
- vector: Manejo de vectores de datos.

Librerías estándar de C++:

iostream: Input/Output (entrada/salida) de datos.
 cin >> variable;
 cout << variable;
string:Manejo de cadenas de texto.
 string str ("Hola a todos!");
 str.pop_back(); // Borra el último carácter de la string
cmath:Funciones matemáticas comunes como la potencia base^(exponente) en c++:
 pow(base, exponente);
exception:Utilidades para el manejo de errores.
 function<int(int,int)> bar;
 try {
  cout << bar(10,20) << '\n';
 }
 catch (bad_function_call& e) // captura la excepción
 {
  cout << "ERROR: Esa función está vacía.\n";
 }
array:Manejo de arreglos de datos (matrices de tamaño fijo).
 array<int, 0> my_array;   
 my_array.empty(); // pregunta si el arreglo está vacío
vector:Manejo de vectores de datos (representan matrices que pueden cambiar de tamaño).
vector<int> my_vector;
my_vector.push_back (myint); // Agrega un nuevo elemento al final del vector

Existe otra forma simple de tener una cadena de texto sin la necesidad de la librería string:
 char nombre[] = "PAT";
Este modo de asignación,no es más que un arreglo unidimensional que mantiene un tamaño en memoria
fijo.también esta la biblioteca conio.h para poder usar la función getch() para evitar que el
jecutable se cierre O también stdlib.h para usar el system("cls") para limpiar consola, también 
system("pause") que funciona como el getch().






