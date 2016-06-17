#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char const *argv[]) {
	int dia=0;
	double dinero = 15000;
	double amperios = 20000;
	int opcion;
	while(opcion != 7){
		cout << "Dia: " << dia << endl;
		cout << "Dinero: " << dinero << endl;
		cout << "Amperios Disponibles: " << amperios << endl;
		cout << "1. Agregar Robots\n2. Modificar Robots\n3. Eliminar Robots\n4. Comprar Robots (usuario)\n5. Usar función Robots (usuario)\n6. Botar Robots(usuario)\n7. Salir" << endl;
		cin >> opcion;
		if (opcion == 1)
		{
			dia++;
			//dinero = dinero-50;
		}else if (opcion == 2)
		{
			dia++;
		}else if (opcion == 3)
		{
			dia++;
		}else if (opcion == 4)
		{
			dia++;
		}else if (opcion == 5)
		{
			dia++;
		}else if (opcion == 6)
		{
			dia++;
		}else{
			cout << "Gracias por utilizar este programa :3 (Estoy siendo amigable :3)" << endl;
		}
	}
	return 0;
}
