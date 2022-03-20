#include <iostream>
#include <string>

using namespace std;

struct ListaVentas
{
	string nombre, tratamiento, hora, Ntratamiento;
	float preciotrat = 0, precio = 0, preciototal = 0;
	int CT = 0;
};
int main() {

	ListaVentas citas[5];
	bool menu = true, paciente = true;
	float preciotrat = 0, precio = 0, preciototal = 0;
	//char nombre[40] = "", tratamiento[100] = "", hora[10] = "", Ntratamiento[100] = "";
	string nombre, tratamiento, hora, Ntratamiento;  // string funciona igual que char en el sentido que ambos considera un espacio como salto de linea pero string permite usar comandos para evitar eso 
	int opcion = 0, CT = 0, num = 0, i, cita, op2;
	cout << "\t\t\t\t\tBienvenido a su clinica dentista" << endl;
	while (menu) {

		cout << "Ingrese 1 para Agendar una cita\n \t2 para Modificar una cita\n \t3 para Eliminar una cita\n \t4 para revisar la lista de citas vigentes" << endl;
		cout << "\t5 para limpiar la pantalla\n \t0 para salir" << endl;
		cin >> opcion;

		switch (opcion)
		{

		case 0:
			exit(0);
			break;
		case 1:

			while (paciente) {
				for (i = 0; i < 5; i++)
				{
					cout << i + 1 << "\tNombre de paciente :";
					cin.ignore();
					getline(cin, citas[i].nombre);
					cout << i + 1 << "\tHora del tratamiento:";
					getline(cin, citas[i].hora);
					cout << i + 1 << "\tNombre del tratamiento:";
					getline(cin, citas[i].Ntratamiento);
					cout << i + 1 << "\tDescripcion del tratamiento:";
					getline(cin, citas[i].tratamiento);
					cout << i + 1 << "\tPrecio unitario del tratamiento:";
					cin >> citas[i].preciotrat;
					cout << i + 1 << "\tCantidad del tratamiento:";
					cin >> citas[i].CT;
					cout << i + 1 << "\tPrecio unitario:";
					cin >> citas[i].precio;
					cout << i + 1 << "\t" << "Total(Pesos mexicanos):";
					citas[i].preciototal = citas[i].precio + citas[i].preciotrat;
					cout << citas[i].preciototal << endl;
					cout << "para agregar otra cita ingrese un numero, para regresar al menu ingrese 6" << endl;
					cin >> num;

					if (num == 6)
					{
						i = 5;
						paciente = false;
					}
				}
				break;
			}
			break;
		case 2:
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
				cout << "Hora del tratamiento:" << citas[i].hora << endl;
				cout << "Ingrese el nuevo valor:";
				cin.ignore();
				getline(cin, citas[i].hora);
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
			case 7:
				cout << "Precio unitario:" << citas[i].precio << endl;
				cout << "Ingrese el nuevo valor:";
				cin >> citas[i].precio;
				break;
			}
				cout << "Total(Pesos mexicanos):" << endl;
				citas[i].preciototal = citas[i].precio + citas[i].preciotrat;
				cout << citas[i].preciototal << endl;
				system("cls");
				cout << "Nombre de paciente: " << citas[i].nombre << endl;
				cout << "Hora del tratamiento:" << citas[i].hora << endl;
				cout << "Nombre del tratamiento:" << citas[i].Ntratamiento << endl;
				cout << "Descripcion del tratamiento:" << citas[i].tratamiento << endl;
				cout << "Precio unitario del tratamiento:" << citas[i].preciotrat << endl;
				cout << "Cantidad del tratamiento:" << citas[i].CT << endl;
				cout << "Precio unitario:" << citas[i].precio << endl;
				cout << "Total(Pesos mexicanos):" << endl;
				cout << citas[i].preciototal << endl;
				cout << "La cita a sido modificada exitosamente";
				system("pause");
				system("cls");
			}
			break;

		case 3:
			cout << "Ingrese el numero de la cita que desee eliminar" << endl;
			cin >> cita;
			cita = cita - 1;
			for (i = cita; i == cita; i++)
			{
				citas[i].nombre = "";
				citas[i].hora = "";
				citas[i].Ntratamiento = "";
				citas[i].tratamiento = "";
				/*strcpy_s(nombre, ""); //copia el valor actual de la variable y se usa una coma para luego poner el nuevo valor
				strcpy_s(hora, "");
				strcpy_s(Ntratamiento, "");
				strcpy_s(tratamiento, "");*/
				citas[i].preciotrat = 0;
				citas[i].CT = 0;
				citas[i].precio = 0;
				citas[i].preciototal = 0;
			}
			cout << "La cita se borro exitosamente" << endl;
			system("pause");
			system("cls");
			break;

		case 4:
			//Muestra los valores actualizados
			for (i = 0; i < 5; i++)
			{
				cout << "La cita que fue ingresada en la posicion" << i + 1 << endl;
				cout << "Nombre de paciente: " << citas[i].nombre << endl;
				cout << "Hora del tratamiento:" << citas[i].hora << endl;
				cout << "Nombre del tratamiento:" << citas[i].Ntratamiento << endl;
				cout << "Descripcion del tratamiento:" << citas[i].tratamiento << endl;
				cout << "Precio unitario del tratamiento:" << citas[i].preciotrat << endl;
				cout << "Cantidad del tratamiento:" << citas[i].CT << endl;
				cout << "Precio unitario:" << citas[i].precio << endl;
				cout << "Total(Pesos mexicanos):" << endl;
				cout << citas[i].preciototal << endl;
				system("pause");
				system("cls"); // limpiar pantalla
			}
			break;

		case 5:
			system("cls");
			break;
		default:
			cout << "No se ingreso una opcion correcta" << endl;
			system("pause");
			break;
		}
	}
}
