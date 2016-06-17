#include <iostream>
#include "robot.h"
#include "trabajadores.h"
#include "sirviente.h"
#include "abastecedores.h"
#include <string>
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char const *argv[]) {
	int dia=0;
	double dinero = 15000;
	double amperios = 20000;
	int opcion;
	std::vector<robot*> producidos;
	std::vector<robot*> comrpados;
	while(opcion != 7){
		cout << "Dia: " << dia << endl;
		cout << "Dinero: " << dinero << endl;
		cout << "Amperios Disponibles: " << amperios << endl;
		cout << "1. Agregar Robots\n2. Modificar Robots\n3. Eliminar Robots\n4. Comprar Robots (usuario)\n5. Usar función Robots (usuario)\n6. Botar Robots(usuario)\n7. Salir" << endl;
		cin >> opcion;
		if (opcion == 1)
		{
			string serie;
			string material;
			double amperios;
			double precio;
			cout << "Ingrese el numero de serie: " << endl;
			cin >> serie;
			cout << "Ingrese de que esta hecho: " << endl;
			cin >> material;
			cout << "Ingrese la cantidad de amperios que usara el robot: " << endl;
			cin >> amperios;
			cout << "Ingrese el precio del robot: " << endl;
			cin >> precio;
			int opcion;
			cout << "Que clase de robot quiere crear?\n1. Trabajadores\n2. Sirviente \n3. Abastecedores" << endl;
			cin >> opcion;
			if (opcion == 1)
			{
				producidos.push_back(new trabajadores(serie,material,amperios,precio));
				cout << "Se ha creado el Trabajador exitosamente" << endl;
			}else if (opcion == 2)
			{
				producidos.push_back(new sirviente(serie,material,amperios,precio,0));
				cout << "Se ha creado el Sirviente exitosamente" << endl;
			}else{
				producidos.push_back(new abastecedores(serie,material,amperios,precio));
				cout << "Se ha creado el Abastecedor exitosamente" << endl;
			}
			//dinero = dinero-50;
		}else if (opcion == 2)
		{
			//dia++;

		}else if (opcion == 3)
		{
			//dia++;
			for (int i = 0; i < producidos.size(); ++i)
			{
				cout << i << producidos[i]->toString() << endl;
			}
			int opcionEliminar;
			cout << "Ingrese la posicion a Eliminar: " << endl;
			cin >> opcionEliminar;
			producidos.erase(producidos.begin()+opcionEliminar);
		}else if (opcion == 4)
		{
			//dia++;
		}else if (opcion == 5)
		{
			dia++;
		}else if (opcion == 6)
		{
			//dia++;
		}else{
			cout << "Gracias por utilizar este programa :3 (Estoy siendo amigable :3)" << endl;
		}
	}
	return 0;
}
