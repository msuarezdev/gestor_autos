#include <iostream> 

using namespace std;


	int menu (void)
	{
	cout << "\nBIENVENIDO AL PROGRAMA PARA LA GESTION DE COMERCIALIZACION DE AUTOS. \n"<<
	"**********Seleccione la tarea que deseé realizar************" << endl;
	cout << "\n1: Buesqueda y venta de un auto" << endl;
	cout << "\n2: Actualizar datos de un auto" << endl;
	cout << "\n3: Listado de autos ordenados por origen" << endl;
	cout << "\n4: Datos del auto mas caro y del mas esconomico " << endl;
	cout << "\n5: Total recaudado en ventas" << endl;
	}

int main(){
    //Declaración de variables
    char marca[50];
    float precio[50], descuento[50];
    int id[500], origen[50], stock[1000], i, n, op, op2, max=500;

	cout<<"Cuanto autos va a ingresar? "<<endl;
	cin>>n;
	for(i=0;i<n;i++){
	cout << "Introduzca los datos del auto" << endl;
	cout << "Codigo: " << i+1 << endl;
	cin>> id[i];
	cout << "Marca: "<< i+1 << endl;
	cin >> marca[i] ;
	cout << " Origen (seleccione 1 para Nacional o 2 para importado) \n" << i+1<< endl;
	cin >> origen[i] ;
	cout << "Precio: "<< i+1 << endl;
	cin>> precio[i] ; 
    cout << "Descuento: " << i+1<< endl;
	cin >> descuento[i];
    cout << "Stock: "<< i+1 << endl;
	cin>> stock[i] ; 
	}
	return 0;

	do{
	menu();
	cin>>op;
	switch (op)
	{
	case 1 :
		i++;
		cout<<"\n Ingrese el codigo del auto"<< endl;
		cin>> id[i];
		cout<<"\n Ingrese 1 para volver al menu y 0 para salir: "<< endl;
		cin>>op2;
		break;
	
	case 2:
		cout<<"\n Ingrese 1 para volver al menu y 0 para salir: "<< endl;
		cin>>op2;
		break;
	case 3:
		for(i=1; i<max;i++)
		{
			if( origen[i]=1){
				cout<<"Nacionales: "<<origen[i]<<endl;
				}else{
					cout<<"Importados: "<<origen[i]<<endl;
				}
		}
		cout<<"\n Ingrese 1 para volver al menu y 0 para salir: "<< endl;
		cin>>op2;
		break;
	case 4:	
	break;
	}
	}

