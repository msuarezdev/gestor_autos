#include <iostream> 

using namespace std;




int main(){
    //Declaración de variables
    char marca[5], origen[2];
    float precio, descuento;
    int id, stock;

 
	cout << "Introduzca los datos del coche" << endl;
	cout << "Codigo" << endl;
	cin>> id;
	cout << "Marca" << endl;
	cin >> marca ;
	cout << " Origen" << endl;
	cin >> origen ;
	cout << "Precio " << endl;
	cin>> precio ; 
    cout << "Descuento" << endl;
	cin>> descuento ;
    cout << "precio " << endl;
	cin>> precio ; 
    
    
 
	return 0;
}

/*int menu (void)
{
	int w;
 
	cout << "Bienvenido al programa de gestion para comercializacion de automoviles. Seleccione la tarea que deseé realizar" << endl;
	cout << "1: Buesque y venta de un automovil" << endl;
	cout << "2: Actualizar datos de un automovil" << endl;
	cout << "3: Listado de automoviles ordenados por origen" << endl;
	cout << "4: Datos de l automovil mas caro y del automovil mas esconomico " << endl;
	cout << "5: Total recaudado en ventas" << endl;
	cin >> w;
	cin.ignore();
 
	return w;
}
}*/