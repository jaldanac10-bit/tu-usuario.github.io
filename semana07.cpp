#include <iostream>
#include <string>

using namespace std;

int main() {
    string nombre;
    string nombreMasLargo = "";
    int validos = 0;
    int vacios = 0;
    int cortos = 0;
    int conEspacio = 0;
    int totalVocales = 0;

    while (true) {
        cout << "Nombre o FIN: ";
        getline(cin, nombre);

        // TODO 1: detectar FIN y terminar el ciclo
        if (nombre == "FIN") {
            break;
        }

        // TODO 2: validar entrada vacía
        if (nombre.empty()) {
            vacios++;
            continue;
        }

        // TODO 3: validar longitud mínima (< 3 caracteres)
        if (nombre.length() < 3) {
            cortos++;
            continue;
        }

        // TODO 4: contar nombre válido y si contiene espacio
        validos++;
        if (nombre.find(" ") != string::npos) {
            conEspacio++;
        }

        // TODO 5: recorrer caracteres con for y contar vocales (incluye mayúsculas por buena práctica)
        for (char c : nombre) {
            char minusc = tolower(c);
            if (minusc == 'a' || minusc == 'e' || minusc == 'i' || minusc == 'o' || minusc == 'u') {
                totalVocales++;
            }
        }

        // TODO 6: actualizar nombreMasLargo cuando corresponda
        if (nombre.length() > nombreMasLargo.length()) {
            nombreMasLargo = nombre;
        }
    }

    // TODO 7: mostrar resumen final
    cout << "\n=== RESUMEN FINAL ===" << endl;
    cout << "Nombres validos: " << validos << endl;
    cout << "Entradas vacias: " << vacios << endl;
    cout << "Nombres cortos (<3): " << cortos << endl;
    cout << "Con al menos un espacio: " << conEspacio << endl;
    cout << "Total de vocales: " << totalVocales << endl;

    if (validos > 0) {
        cout << "Nombre mas largo: " << nombreMasLargo << endl;
    }
    else {
        cout << "No se ingresaron nombres validos." << endl;
    }

    return 0;
}
