/*Hacer un programa que simule un cajero automático con
un saldo inicial de 1000 dólares*/
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    float saldoActual = 1000, montoIngresado, montoRetirar;
    int opcion;

    cout << "-----------------------------" << endl;
    cout << "Bienvenido a tu Banca Virtual" << endl;
    cout << "-----------------------------" << endl;
    cout << "Seleccione una Opcion" << endl;
    cout << "   1. Consultar saldo" << endl;
    cout << "   2. Ingresar dinero" << endl;
    cout << "   3. Retirar dinero" << endl;
    cout << "   4. Salir" << endl;

    cout << "Opcion: ";
    cin >> opcion;
    system("cls");

    switch (opcion)
    {
    case 1:
        cout << "-- CONSULTA DE SALDO --" << endl;
        cout << "Saldo Actual: " << saldoActual;
        cout << endl;
        break;

    case 2:
        cout << "-- INGRESO DE DINERO --" << endl;
        cout << "Ingrese el monto: ";
        cin >> montoIngresado;
        saldoActual = saldoActual + montoIngresado;
        cout << "Saldo actual: " << saldoActual;
        cout << endl;
        break;

    case 3:
        cout << "-- RETIRAR DINERO --" << endl;
        cout << "Ingrese el monto a retirar: ";
        cin >> montoRetirar;
        if (montoRetirar > saldoActual)
        {
            cout << "No tiene esa cantidad de dinero";
        }
        else
        {
            saldoActual = saldoActual - montoRetirar;
            cout << "Saldo actual: " << saldoActual;
        }
        cout << endl;
        break;

    case 4:
        break;

    default:
        cout << "ALERTA: Opcion Incorrecta";
        cout << endl;
        break;
    }

    system("pause");
    return 0;
}