#include <iostream>
#include <fstream>
#include <string.h>
#include <ctype.h>
#include "libreria.h"

using namespace std;

int main() {
int opmenu, cond, cont;
char cent;

cout << "Bienvenido a hotel los aluxes, " << char(168) << "Qu" << char(130) << " operaci" << char(162) << "n desea hacer?: \n\n"; 
menu(); //imprimir opciones
cout << "Ingrese el n" << char(163) << "mero de la acci" << char(162) << "n que desee: ";
cin >> opmenu;
cin.ignore();

	switch(opmenu){
	
		case 1: {
			
			system ("cls");
			cout << "Ha elegido cotizaciones.\n\n";
			
			cond=1;
			
				while (cond==1)	{
					cotizar(); //funcion cotizar
					cout << "\n\n" << char(168) << "Desea cotizar otro paquete? (Y/N): ";
					cin >> cent;
					cin.ignore();
						
						if(cent=='n' || cent=='N'){
							system("cls");
							break;
						}
					
					system("cls");
				
				}
		
			return main();
			
			break;
		
		}
		
		//////////////////////////////////////////////////////////////////
		
		case 2: {
			
			system ("cls");
			cout << "Ha elegido ingresar usuario.\n\n";				
			info(); //funcion info
			
			ifstream myfile ("Contador.txt");
			if (myfile.is_open()){
				myfile >> cont;				
				myfile.close();
			}
			else cout << "No es posible abrir el archivo";
			
			cont=cont+1;
			
			ofstream myfile1 ("Contador.txt");
			if (myfile1.is_open()){
				myfile1 << cont;				
				myfile1.close();
			}
			else cout << "No es posible abrir el archivo";
			
			cin.get();
			cin.get();
			system("cls");
			return main();
						
			break;
		
		}
		
		//////////////////////////////////////////////////////////////////
		
		case 3:{
			
			system ("cls");
			cout << "Ha elegido consulta de clientes\n\n";
			consulta();
			cin.get();
			cin.get();
			system("cls");
			return main();
			
			break;
		
		}
		
		//////////////////////////////////////////////////////////////////
		
		case 4:{
			
			system ("cls");
			cout << "Ha elegido auditoria\n\n";
			auditoria();
			cin.get();
			cin.get();
			system("cls");
			return main();
						
		break;
		
		}
		
		//////////////////////////////////////////////////////////////////
		
		case 5: {
			
		return 0;
		
		break;
		
		}
		
		//////////////////////////////////////////////////////////////////
		
		default: {
		
		system ("cls");
		return main();
			
			break;
		} 
		
	}

return 0;

}
