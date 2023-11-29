#include <iostream>
#include "string" //Necesario para el manejo de texto de impresion a pantalla
#include <math.h> //Necesario para funcion de elevar a potencia del numero

using namespace std;  //Necesario para el manejo de texto de impresion a pantalla

int main() {
    double base,limite; //Declaración de variables

    printf("Ingrese Limite Maximo(Entero y Positivo):\n"); //Se pide el limite maximo del resultados de las potencias
    scanf("%lf", &limite); //Se lee y guarda en variable limite
    
    printf("Ingrese Base (Entero y Positivo):\n"); //Se pide el numero que se potenciara
    scanf("%lf", &base); //Se lee y guarda en variable base
    
    for(int i= 2 ; i<100; i=i+1){ // Se ejecuta bucle donde se establece i como el valor de la potencia, y se incrementa +1 en cada ciclo
        double elevado = pow(base, i); // Funcion que permite elevar el numero base a la potencia correspondiente al bucle
        
        if(elevado<limite){ // Se compara si el resultado de la multiplicacion de potencia es menor al limite establecido
           cout << "El numero " << base << " elevado a la potencia "<< i << " es "<< elevado << "\n";            // Se muestra la potencia y resultado
        }
        else{ // Si el resultado de la potencia es mayor al limite se rompe el blucle y muestra mensaje. 
            cout << "Ha alcanzado el maximo de potencias inferiores al limite indicado";
            return 0;
        }
        
    }   
    
}