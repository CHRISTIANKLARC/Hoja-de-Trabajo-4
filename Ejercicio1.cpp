#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <sstream>
using namespace std;

struct info_agri{
	int tiposerv;
	float canthec;
	float totalpserv;
	float totalpservd;
};

void redatos();
int main(){
	redatos();

}

void redatos(){
	int tiposerv;
	float canthec;
	float precio;
	float descuento;
	float totalpserv;
	float totalpservd;
	cout<<"------------ INFORMACIÓN TIPOS DE SERVICIOS-------------"<<endl;
	cout<<"Ingrese el Tipo de Servicio que desee: "<<endl;
	cout<<" Tipo 1 --> Mala Hierba --> Costo por Hectarea: Q. 10.00 " << endl;
	cout<<" Tipo 2 --> Langostas --> Costo por Hectarea: Q. 20.00 " <<endl;
	cout<<" Tipo 3 --> Gusanos --> Costo por Hectarea: Q. 30.00 " <<endl;
	cout<<" Tipo 4 --> Todo lo anterior --> Costo por Hectarea: Q.50.00 "<<endl;
	cin>>tiposerv;
	cout<<"Indique la cantidad de Hectareas que desea que le trabajen: "<<endl;
	cin>>canthec;
	if (tiposerv==1){
		precio = 10.00;
		totalpserv = (precio * canthec);
		cout<<"El total a pagar es: "<<totalpserv<<endl;
	}
	if (tiposerv==2){
		precio = 20.00;
		totalpserv = (precio * canthec);
		cout<<"El total a pagar es: "<<totalpserv<<endl;
	}
	if (tiposerv==3){
		precio = 30.00;
		totalpserv = (precio * canthec);
		cout<<"El total a pagar es: "<<totalpserv<<endl;	
	}
	if (tiposerv==4){
		precio = 50.00;
		totalpserv = (precio * canthec);
		cout<<"El total a pagar es: "<<totalpserv<<endl;
	}
	if(canthec>500){
		totalpserv= (precio * canthec) - (totalpserv * 0.05);
		cout<<"El pago con descuento es: "<<totalpserv<<endl;
	}
	if(totalpserv>1500){
		totalpservd = (totalpserv - 1500) * 0.10;
		cout<<"Por su compra mayor a 1500 tiene un descuento adicional sobre el excedente de: "<<totalpservd<<endl;
		cout<<"Su total final es de: "<<totalpserv-totalpservd<<endl;
	}	cout<<"Tipo de servicio: "<<tiposerv<<"Cantidad de Hectareas: "<<canthec<<"Total por servicio: "<<totalpserv;
	ofstream grabarc;
	try {
		grabarc.open("HECTAREAS.txt",ios::app);
		grabarc<<tiposerv<<"\n"<<canthec<<"\t"<<totalpserv<<"\t"<<endl;
		grabarc.close();
	}
	catch(exception X){
		cout<<"Error en la apertura del archivo"<<endl;
	}
}


