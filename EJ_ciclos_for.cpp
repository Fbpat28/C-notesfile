#include <iostream>
using namespace std;

int main()
{
   //Declaro mis varibles para paracticar el for
   int lista []={8,10,15,16,17,23,46};
   int i=0;

   //Pruebo el for primero solo que muestre sus numeros 
    cout<<"Los valores de la lista son:"<<endl;

   for ( i = 0; i < (sizeof(lista)/sizeof(lista[0])); i++) /*Otra solución es simplemente hacer que el
   ciclo itere de dos en dos,es decir cambiar el “i++” por “i += 2” 
   así solo se mostraran números pares entre el 0 y la cantidad pedida por el usuario*/
   {
       cout<<lista[i]<<endl;
   }
    //Vuelvo a mi i a 0
   i=0;
    //Ahora pido que me arroje los valores pares de la lista
    cout<<"Los valores pares son: "<<endl;
   for ( i = 0; i <(sizeof(lista)/sizeof(lista[0])) ; i++)
   {
       if (lista[i]%2==0)
       {
           cout<<lista[i]<<endl;
       }
       
   }
   
 return 0;  
}