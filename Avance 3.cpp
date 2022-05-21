#include <iostream>
#include <string>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include <conio.h>

using namespace std;

struct ListaVentas
{
	string nombre, tratamiento, hora, Ntratamiento;
	float preciotrat = 0, precio = 0, preciototal = 0;
	int CT = 0, h = 00, m = 00;
};

void alta();
void modificar();
void eliminar();
int mostrar();
void lectura();
void escribirauto();

ListaVentas citas[5];
bool paciente = true;
float IVA = 0;

int main() {
	bool menu = true;
	float preciotrat = 0, preciototal = 0;
	string nombre, tratamiento, hora, Ntratamiento;
	int opcion = 0, CT = 0, num = 0, i = 0, cita = 0, op2 = 0;
	cout << "\t\t\t\t\tBienvenido a su clinica dentista" << endl;
	while (menu) {

		cout << "Ingrese 1 para Agendar una cita\n \t2 para Modificar una cita\n \t3 para Eliminar una cita\n \t4 para revisar la lista de citas vigentes" << endl;
		cout << "\t5 para limpiar la pantalla\n \t6 para leer el archivo\n \t0 para salir" << endl;
		cin >> opcion;

		switch (opcion)
		{

		case 0:
			exit(0);
			break;
		case 1:
			alta();
			return main();
			break;
		case 2:
			modificar();
			return main();
			break;

		case 3:
			eliminar();
			return main();
			break;

		case 4:
			mostrar();
			return main();
			break;

		case 5:
			system("cls");
			break;
		case 6:
			lectura();
			system("cls");
			break;
		default:
			cout << "No se ingreso una opcion correcta" << endl;
			system("pause");
			break;

		}
	}
}
void alta() {
	int opcion = 0, CT = 0, num = 0, i, cita, op2 = 0;

	while (paciente) {
		for (i = 0; i < 5; i++)
		{
			cout << i + 1 << "\tNombre de paciente:";
			cin.ignore();
			getline(cin, citas[i].nombre);
			cout << i + 1 << "\tHora del tratamiento(0-24hr):";
			cin >> citas[i].h;
			cout << i + 1 << "\tMinutos:";
			cin >> citas[i].m;
			if (citas[i].h <= 24 && citas[i].h >= 0 && citas[i].m <= 60 && citas[i].m >= 0)
			{
				cout << "        La hora es valida: " << citas[i].h << ":" << citas[i].m << endl;
			}
			else {
				cout << "La hora no es valida";
			}
			cout << i + 1 << "\tNombre del tratamiento:";
			cin.ignore();
			getline(cin, citas[i].Ntratamiento);
			cout << i + 1 << "\tDescripcion del tratamiento:";

			getline(cin, citas[i].tratamiento);
			cout << i + 1 << "\tPrecio unitario del tratamiento:";
			cin >> citas[i].preciotrat;
			cout << i + 1 << "\tCantidad del tratamiento:";
			cin >> citas[i].CT;
			cout << i + 1 << "\t" << "Total(Pesos mexicanos, IVA incluido):";
			citas[i].preciototal = citas[i].CT * citas[i].preciotrat;
			IVA = citas[i].preciototal * .16;
			citas[i].preciototal += IVA;
			cout << citas[i].preciototal << endl;
			cout << "para agregar otra cita ingrese un numero, para regresar al menu ingrese 6" << endl;
			cin >> num;
			escribirauto();

			if (num == 6)
			{
				i = 5;
				paciente = true;
			}
		}
		break;
	}
}
void modificar() {
	int cita = 0, op2 = 0, i = 0;

	cout << "Ingrese el numero de la cita que desee modificar" << endl;
	cin >> cita;
	cita = cita - 1;
	for (i = cita; i == cita; i++)
	{
		printf("Que es lo que desea modificar? \n 1.Nombre \n 2.Hora \n 3.Nombre del tratamiento \n 4.Descripcion del tratamiento \n 5. Precio unitario del tratamiento \n 6.Cantidad del tratamiento \n 7.Precio unitario \n");
		cin >> op2;
		switch (op2) {
		case 1:
			cout << "Nombre de paciente: " << citas[i].nombre << endl;
			cout << "Ingrese el nuevo valor:";
			cin.ignore();
			getline(cin, citas[i].nombre);
			break;
		case 2:
			cout << "Hora del tratamiento:" << citas[i].h << ":" << citas[i].m << endl;
			cout << "Ingrese la nuevo hora:";
			cin >> citas[i].h;
			cout << "Ingrese los nuevos minutos:";
			cin >> citas[i].m;
			break;
		case 3:
			cout << "Nombre del tratamiento:" << citas[i].Ntratamiento << endl;
			cout << "Ingrese el nuevo valor:";
			cin.ignore();
			getline(cin, citas[i].Ntratamiento);
			break;
		case 4:
			cout << "Descripcion del tratamiento:" << citas[i].tratamiento << endl;
			cout << "Ingrese el nuevo valor:";
			cin.ignore();
			getline(cin, citas[i].tratamiento);
			break;
		case 5:
			cout << "Precio unitario del tratamiento:" << citas[i].preciotrat << endl;
			cout << "Ingrese el nuevo valor:";
			cin >> citas[i].preciotrat;
			break;
		case 6:
			cout << "Cantidad del tratamiento:" << citas[i].CT << endl;
			cout << "Ingrese el nuevo valor:";
			cin >> citas[i].CT;
			break;
		default:
			cout << "No se ingreso una opcion correcta" << endl;
			system("pause");
			break;
		}
		cout << "Total(Pesos mexicanos, IVA incluido):" << endl;
		citas[i].preciototal = citas[i].precio + citas[i].preciotrat;
		IVA = citas[i].preciototal * .16;
		citas[i].preciototal += IVA;
		cout << citas[i].preciototal << endl;
		system("cls");
		cout << "Nombre de paciente: " << citas[i].nombre << endl;
		cout << "Hora del tratamiento:" << citas[i].h << ":" << citas[i].m << endl;
		cout << "Nombre del tratamiento:" << citas[i].Ntratamiento << endl;
		cout << "Descripcion del tratamiento:" << citas[i].tratamiento << endl;
		cout << "Precio unitario del tratamiento:" << citas[i].preciotrat << endl;
		cout << "Cantidad del tratamiento:" << citas[i].CT << endl;
		cout << "Total(Pesos mexicanos):" << endl;
		cout << citas[i].preciototal << endl;
		cout << "La cita a sido modificada exitosamente";
		system("pause");
		system("cls");
	}
}
void eliminar() {
	int cita = 0, i = 0;
	cout << "Ingrese el numero de la cita que desee eliminar" << endl;
	cin >> cita;
	cita = cita - 1;
	for (i = cita; i == cita; i++)
	{
		citas[i].nombre = "";
		citas[i].hora = "";
		citas[i].Ntratamiento = "";
		citas[i].tratamiento = "";
		citas[i].preciotrat = 0;
		citas[i].CT = 0;
		citas[i].preciototal = 0;
	}
	cout << "La cita se borro exitosamente" << endl;
	system("pause");
	system("cls");
}
int mostrar() {
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		cout << "La cita que fue ingresada en la posicion" << i + 1 << endl;
		cout << "Nombre de paciente:" << citas[i].nombre << endl;
		cout << "Hora del tratamiento:" << citas[i].h << ":" << citas[i].m << endl;
		cout << "Nombre del tratamiento:" << citas[i].Ntratamiento << endl;
		cout << "Descripcion del tratamiento:" << citas[i].tratamiento << endl;
		cout << "Precio unitario del tratamiento:" << citas[i].preciotrat << endl;
		cout << "Cantidad del tratamiento:" << citas[i].CT << endl;
		cout << "Total(Pesos mexicanos):" << citas[i].preciototal << endl;
		system("pause");
		system("cls");
	}
	return main();
}
void lectura() {
	string texto;
	ifstream archivo;
	archivo.open("clinica.txt", ios::in);
	if (archivo.fail())
	{
		cout << "EL ARCHIVO NO EXISTE" << endl;
		exit(1);
	}

	while (!archivo.eof())
	{
		getline(archivo, texto);
		cout << mostrar() << endl;
		system("pause");
	}
	archivo.close();
}
void escribirauto() {
	int i = 0;
	ofstream archivo;
	string nombrearchivo;

	nombrearchivo = "clinica.txt";
	archivo.open(nombrearchivo.c_str(), ios::out);

	if (archivo.fail())
	{
		cout << "ERROR NO SE PUDO CREAR";
		exit(1);
	}
	for (size_t i = 0; i < 5; i++)
	{
		archivo << "La cita que fue ingresada en la posicion   " << i + 1 << endl << "Nombre de paciente:" << citas[i].nombre << endl
			<< "Hora del tratamiento:" << citas[i].h << ":" << citas[i].m << endl
			<< "Nombre del tratamiento:" << citas[i].Ntratamiento << endl
			<< "Descripcion del tratamiento:" << citas[i].tratamiento << endl
			<< "Precio unitario del tratamiento:" << citas[i].preciotrat << endl
			<< "Cantidad del tratamiento:" << citas[i].CT << endl
			<< "Total(Pesos mexicanos):" << citas[i].preciototal << endl;
		system("cls");
	}

	archivo.close();
}
