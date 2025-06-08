#include <iostream>
using namespace std;

int main() {
    int totalNotas;
    float nota, sumaNotas = 0;
    int aprobados = 0, desaprobados = 0;

    cout << "Ingrese la cantidad total de notas: ";
    cin >> totalNotas;

    for (int i = 0; i < totalNotas; i++) {
        cout << "Ingrese la nota #" << (i + 1) << ": ";
        cin >> nota;

        sumaNotas += nota;

        if (nota < 10.5)
            desaprobados++;
        else
            aprobados++;
    }

    float porcentajeDesaprobados = (desaprobados * 100.0) / totalNotas;
    float promedio = sumaNotas / totalNotas;

    cout << "\nResultados:\n";
    cout << "Porcentaje de desaprobados: " << porcentajeDesaprobados << "%\n";
    cout << "Cantidad de aprobados: " << aprobados << endl;
    cout << "Promedio del salón: " << promedio << endl;

    return 0;
}
