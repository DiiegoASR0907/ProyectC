#include <iostream>
#include <string>
using namespace std;

int referencia;
string descripcion;
int talla;
string letra;
int qzapato;
int costou;
int costot;
int pventau;
int pventat;
int utilidadu;
int utilidadt;
int porcentajeu;


int main()
{
	cout << "ADMINISTRAR VENTA DE ZAPATOS" << endl;
	// ingreso de datos y operaciones matematicas
	cout << "Digite la referencia del zapato..." << endl;
	cin >> referencia;
	cout << "Digite una descripcion del zapato..." << endl;
	cin >> descripcion;
	cout << "Digite la talla..." << endl;
	cin >> talla;
	cout << "Digite la letra si esta disponible o no para la venta S/N..." << endl;
	cin >> letra;
	cout << "Digite la cantidad de pares de zapatos..." << endl;
	cin >> qzapato;
	cout << "Digite el costo cada par de zapatos..." << endl;
	cin >> costou;
	costot = qzapato * costou;
	cout << "Digite el precio de venta del zapato..." << endl;
	cin >> pventau;
	pventat = qzapato * pventau;
	utilidadu = pventau - costou;
	utilidadt = pventat - costot;
	porcentajeu = utilidadt / costot

	cout << "LOS DATOS REGISTRADOS SON LOS SIGUIENTES" << endl;
	// salida final de datos organizados
	cout << "REFERENCIA: " << referencia << endl;
	cout << "DESCRIPCION: " << descripcion << endl;
	cout << "TALLA: " << talla << endl;
	cout << "DISPONIBILIDAD: " << letra << endl;
	cout << "CANTIDAD DE ZAPATOS: " << qzapato << endl;
	cout << "COSTO UNIDAD: " << costou << endl;
	cout << "COSTO TOTAL: " << costot << endl;
	cout << "PRECIO UNIDAD: " << pventa << endl;
	cout << "PRECIO TOTAL DE " << qzapato << " UNIDADES: " << pventat<< endl;
	cout << "UTILIDAD POR UNIDAD: " << utilidadu << endl;
	cout << "UTILIDAD TOTAL: " << utilidadt << endl;
	cout << "PORCENTAJE DE UTILIDAD: " << porcentajeu << endl;

	cout << "Gracias por digitar la informacion" << endl;
	cout << "Diego Ardila Gomez" << endl;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración


