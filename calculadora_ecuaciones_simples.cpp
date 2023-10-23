#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float a, b, c, x1, x2;
    
    cout << "Bienvenido a la calculadora de ecuaciones de segundo grado." << endl;
    cout << "Introduce el valor de a: ";
    cin >> a;
    cout << "Introduce el valor de b: ";
    cin >> b;
    cout << "Introduce el valor de c: ";
    cin >> c;
    
    float discriminante = b * b - 4 * a * c;
    
    if (discriminante < 0) {
        cout << "La ecuación no tiene soluciones reales." << endl;
    } else if (discriminante == 0) {
        x1 = -b / (2 * a);
        cout << "La ecuación tiene una única solución:" << endl;
        cout << "x = " << x1 << endl;
    } else {
        x1 = (-b + sqrt(discriminante)) / (2 * a);
        x2 = (-b - sqrt(discriminante)) / (2 * a);
        cout << "La ecuación tiene dos soluciones:" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    
    cout << "Gracias por usar la calculadora." << endl;
    
    //datos del desarrollador y la fecha en que se creo el programa
    cout << "Desarrollado por: Yoshio Geovanni Garcia Lopez" << endl;
    cout << "Fecha: 2023-10-22" << endl;

    return 0;
}

