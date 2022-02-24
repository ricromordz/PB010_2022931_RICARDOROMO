#include <iostream>
#include <string>

using namespace std;

int main() {

	bool menu = true, paciente = true;
	float preciotrat = 0, precio = 0, preciototal = 0;
	//char nombre[40] = "", tratamiento[100] = "", hora[10] = "", Ntratamiento[100] = "";
	string nombre, tratamiento, hora, Ntratamiento;  // string funciona igual que char en el sentido que ambos considera un espacio como salto de linea pero string permite usar comandos para evitar eso 
	int opcion = 0, CT = 0, num = 0;
	cout << "\t\t\t\t\tBienvenido a su clinica dentista" << endl;
	cout << "Para abrir el menu de opciones ingrese un numero" << endl;
	cin >> num;
	while(menu){
		
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
				cout << "Nombre de paciente:";
				cin.ignore(); //sirve para ignorar el salto de linea de getline
				getline(cin, nombre); // salta de linea colocando el codigo posterior junto al actual
				//cin >> nombre;
				cout << "Hora del tratamiento:";
				getline(cin, hora);
				//cin >> hora;
				cout << "Nombre del tratamiento:";
				getline(cin, Ntratamiento);
				//cin >> Ntratamiento;
				cout << "Descripcion del tratamiento:";
				getline(cin, tratamiento);
				//cin >> tratamiento;
				cout << "Precio unitario del tratamiento:";
				cin >> preciotrat;
				cout << "Cantidad del tratamiento:";
				cin >> CT;
				cout << "Precio unitario:";
				cin >> precio;
				cout << "Total(Pesos mexicanos):";
				preciototal = precio + preciotrat;
				cout << preciototal << endl;
				cout << "para agregar otra cita ingrese un numero, para regresar al menu ingrese 6" << endl;
				cin >> num;
				if (num == 6)
					paciente = false;
			}
			paciente = true;
			break;
		case 2:
			//Modifica los valores anteriores
			cout << "Nombre de paciente: " << nombre << endl;
			cout << "Ingrese el nuevo valor:";
			cin >> nombre;
			cout << "Hora del tratamiento:" << hora << endl;
			cout << "Ingrese el nuevo valor:";
			cin >> hora;
			cout << "Nombre del tratamiento:" << Ntratamiento << endl;
			cout << "Ingrese el nuevo valor:";
			cin >> Ntratamiento;
			cout << "Descripcion del tratamiento:" << tratamiento << endl;
			cout << "Ingrese el nuevo valor:";
			cin >> tratamiento;
			cout << "Precio unitario del tratamiento:" << preciotrat << endl;
			cout << "Ingrese el nuevo valor:";
			cin >> preciotrat;
			cout << "Cantidad del tratamiento:" << CT << endl;
			cout << "Ingrese el nuevo valor:";
			cin >> CT;
			cout << "Precio unitario:" << precio << endl;
			cout << "Ingrese el nuevo valor:";
			cin >> precio;
			cout << "Total(Pesos mexicanos):" << endl;
			preciototal = precio + preciotrat;
			cout << preciototal << endl;
			system("cls");

			//Muestra los valores actualizados
			cout << "Nombre de paciente: " << nombre << endl;
			cout << "Hora del tratamiento:" << hora << endl;
			cout << "Nombre del tratamiento:" << Ntratamiento << endl;
			cout << "Descripcion del tratamiento:" << tratamiento << endl;
			cout << "Precio unitario del tratamiento:" << preciotrat << endl;
			cout << "Cantidad del tratamiento:" << CT << endl;
			cout << "Precio unitario:" << precio << endl;
			cout << "Total(Pesos mexicanos):" << endl;
			cout << preciototal << endl;
			system("pause");
			system("cls");

			break;

		case 3:
		
			nombre = "";
			hora = "";
			tratamiento = "";
			Ntratamiento = "";
			/*strcpy_s(nombre, ""); //copia el valor actual de la variable y se usa una coma para luego poner el nuevo valor
			strcpy_s(hora, "");
			strcpy_s(Ntratamiento, "");
			strcpy_s(tratamiento, "");*/
			preciotrat = 0;
			CT = 0;
			precio = 0;
			preciototal = 0;
			cout << "La cita se borro exitosamente" << endl;
			system("pause");
			system("cls");
			break;

		case 4:
			//Muestra los valores actualizados
			cout << "Nombre de paciente: " << nombre << endl;
			cout << "Hora del tratamiento:" << hora << endl;
			cout << "Nombre del tratamiento:" << Ntratamiento << endl;
			cout << "Descripcion del tratamiento:" << tratamiento << endl;
			cout << "Precio unitario del tratamiento:" << preciotrat << endl;
			cout << "Cantidad del tratamiento:" << CT << endl;
			cout << "Precio unitario:" << precio << endl;
			cout << "Total(Pesos mexicanos):" << endl;
			cout << preciototal << endl;
			system("pause");
			system("cls"); // limpiar pantalla

		case 5:
			system("cls");
		}
	}
}
