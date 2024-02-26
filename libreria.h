#define _LIBRERIA_H

#include <iostream>
#include <fstream>
#include <string.h>
#include <ctype.h>

#define numhab 250
#define numind 84
#define numdob 60
#define numtrip 52
#define numquad 32
#define numking 20
#define numsuite 2

using namespace std;

void menu(){
	
	cout << "1. Cotizaciones\n";
	cout << "2. Ingresar cliente\n";
	cout << "3. Consultas clientes\n";
	cout << "4. Auditor" << char(161) << "a\n";
	cout << "5. Salir\n\n";
	
}
void cotizar(){
	int  op, contador = 0, precio[5];
	char paquete1[50]="Noche", paquete[50];
	
	cout << "En cada paquete se incluye habitaci" << char(162) << "n con ducha privada, insumos de aseo, servicio de tv, internet y aire acondicionado.\n\n";
	cout << "A continuaci" << char(162) << "n se desglosa los paquetes disponibles: \n\n";
	cout << "1. Noche (12hrs)\n";
	cout << "2. D" << char(161) << "a completo (24hrs)\n";
	cout << "3. Fin de semana  (2 d" << char(161) << "as y 3 noches)\n";
	cout << "4. Semana (7 d" <<  char(161) << "as completos)\n";
	cout << "5. Suite presidencial (24hrs, hasta 6 personas)\n\n";
	cout << "Seleccione el n" << char(163) << "mero de paquete de acuerdo con la lista anterior: ";
	cin >> op;
	
		switch (op){
	
		case 1:{
			ifstream myfile("Precios hotel.txt");
				if (myfile.is_open()){
					myfile >> contador;
						for(int i=1; i<=contador; i++){
							myfile >> paquete >> precio[0] >> precio[1] >> precio[2] >> precio[3] >> precio[4];
								if (strcmp("Noche",paquete) == 0){ 
									system ("cls");
									cout << "PAQUETE DE NOCHE.\n";
									cout << "\nEl paquete ofrece al cliente servicio de cena y desayuno por persona.\n";
									cout << "Los costos en pesos mexicanos se especifican a continuaci" << char(162) << "n de acuerdo con el n" << char(163) << "mero de personas:\n";
									cout << "\nIndividual (Cama para una persona): $" << precio[0];
									cout << "\n\nDoble (Puede tener dos camas individual o una cama doble): $" << precio[1];
									cout << "\n\nTriple (Equipada o una cama doble y una individual): $" << precio[2];
									cout << "\n\nQuad (Contiene dos camas dobles, puede incluirse una cama inflable infantil sin costo): $" << precio [3];
									cout << "\n\nKing (Cama king-size, puede ser ocupado por una o dos personas): $" << precio[4];
								}
						}
				myfile.close(); 	
				}
					else {
						cout << "No es posible abrir el archivo";
						cin.get();
					}	
		break;
		}
		
		case 2:{
			ifstream myfile("Precios hotel.txt");
				if (myfile.is_open()){
					myfile >> contador;
						for(int i=1; i<=contador; i++){
							myfile >> paquete >> precio[0] >> precio[1] >> precio[2] >> precio[3] >> precio[4];
								if (strcmp("Todo_dia",paquete) == 0){ 
									system ("cls");
									cout << "PAQUETE TODO EL D" << char(214) << "A.\n";
									cout << "\nEl paquete ofrece al cliente servicio de desayuno, almuerzo y cena por persona.\n";
									cout << "Los costos en pesos mexicanos se especifican a continuaci" << char(162) << "n de acuerdo con el n" << char(163) << "mero de personas:\n";
									cout << "\nIndividual (Cama para una persona): $" << precio[0];
									cout << "\n\nDoble (Puede tener dos camas individual o una cama doble): $" << precio[1];
									cout << "\n\nTriple (Equipada o una cama doble y una individual): $" << precio[2];
									cout << "\n\nQuad (Contiene dos camas dobles, puede incluirse una cama inflable infantil sin costo): $" << precio [3];
									cout << "\n\nKing (Cama king-size, puede ser ocupado por una o dos personas): $" << precio[4];
								}
						}
				myfile.close(); 	
				}
					else {
						cout << "No es posible abrir el archivo";
						cin.get();
					}	
		break;
		}

		case 3:{
			ifstream myfile("Precios hotel.txt");
				if (myfile.is_open()){
					myfile >> contador;
						for(int i=1; i<=contador; i++){
							myfile >> paquete >> precio[0] >> precio[1] >> precio[2] >> precio[3] >> precio[4];
								if (strcmp("Fin_semana",paquete) == 0){ 
									system ("cls");
									cout << "PAQUETE FIN DE SEMANA.\n";
									cout << "\nEl paquete ofrece al cliente servicio de desayuno, almuerzo y cena por persona.\n";
									cout << "Los costos en pesos mexicanos se especifican a continuaci" << char(162) << "n de acuerdo con el n" << char(163) << "mero de personas:\n";
									cout << "\nIndividual (Cama para una persona): $" << precio[0];
									cout << "\n\nDoble (Puede tener dos camas individual o una cama doble): $" << precio[1];
									cout << "\n\nTriple (Equipada o una cama doble y una individual): $" << precio[2];
									cout << "\n\nQuad (Contiene dos camas dobles, puede incluirse una cama inflable infantil sin costo): $" << precio [3];
									cout << "\n\nKing (Cama king-size, puede ser ocupado por una o dos personas): $" << precio[4];
								}
						}
				myfile.close(); 	
				}
					else {
						cout << "No es posible abrir el archivo";
						cin.get();
					}	
		break;
		}

		case 4:{
			ifstream myfile("Precios hotel.txt");
				if (myfile.is_open()){
					myfile >> contador;
						for(int i=1; i<=contador; i++){
							myfile >> paquete >> precio[0] >> precio[1] >> precio[2] >> precio[3] >> precio[4];
								if (strcmp("Semana",paquete) == 0){ 
									system ("cls");
									cout << "PAQUETE DE SEMANA.\n";
									cout << "\nEl paquete ofrece al cliente servicio de desayuno, almuerzo y cena por persona.\n";
									cout << "Los costos en pesos mexicanos se especifican a continuaci" << char(162) << "n de acuerdo con el n" << char(163) << "mero de personas:\n";
									cout << "\nIndividual (Cama para una persona): $" << precio[0];
									cout << "\n\nDoble (Puede tener dos camas individual o una cama doble): $" << precio[1];
									cout << "\n\nTriple (Equipada o una cama doble y una individual): $" << precio[2];
									cout << "\n\nQuad (Contiene dos camas dobles, puede incluirse una cama inflable infantil sin costo): $" << precio [3];
									cout << "\n\nKing (Cama king-size, puede ser ocupado por una o dos personas): $" << precio[4];
								}
						}
				myfile.close(); 	
				}
					else {
						cout << "No es posible abrir el archivo";
						cin.get();
					}	
		break;
		}

		case 5:{
			ifstream myfile("Precios hotel.txt");
				if (myfile.is_open()){
					myfile >> contador;
						for(int i=1; i<=contador; i++){
							myfile >> paquete >> precio[0] >> precio[1] >> precio[2] >> precio[3] >> precio[4];
								if (strcmp("Suite",paquete) == 0){ 
									system ("cls");
									cout << "PAQUETE SUITE PRESIDENCIAL.\n";
									cout << "\nEl paquete ofrece al cliente 3 comidas para cada persona, pieza con sala de estar, 2 habitaciones, uno con\n";
									cout << "cama King-size y otro con dos camas dobles, servicio a la habitaci" << char(162) << "n 24 hrs, ba" << char(164) << "o de lujo con yacusi y tina de\n";
									cout << "hidromasaje, terraza equipada con sillas plegables, botella de vino, teatro en casa, internet, aire acondicionado.";
									cout << "\n\nPrecio " << char(163) << "nico: $" << precio[0];
								}
						}
				myfile.close(); 	
				}
					else {
						cout << "No es posible abrir el archivo";
						cin.get();
					}	
		break;
		}
  
  		default: {
  		
		system ("cls");
		return cotizar();	
		
		break;
		  }
  
	}	
}
void ajustenombre(){
	
	char nombre1[50], nombre2[50], nombre3[50];
	int a, b, n=0;
	
	cout << "Escriba el nombre del cliente, nombres primero: ";
	cin.getline(nombre1, 50);
	a=strlen(nombre1);
		for(int i=0; i<a; i++){
			nombre1[0]=toupper(nombre1[0]);
				if(nombre1[i] == ' '){
					nombre2[n]=nombre1[i];
					nombre1[i+1]=toupper(nombre1[i+1]);
					n++;
				}
				else {
					nombre2[n]=nombre1[i];
					n++;
				}
		}
	
	n=0;	
	
	b=strlen(nombre2);
		for(int i=0; i<b; i++){
			if(nombre2[i] == ' '){
				nombre3[n]='_';
				n++;
			}
			else {
				nombre3[n]=nombre2[i];
				n++;
			}
		}

ofstream myfile ("Base de datos.txt",ios::app);
		if (myfile.is_open()){
			myfile << nombre3;	
			myfile << char(32); 	
			myfile.close();
			cout << "\n" << char(173) << "El nombre ha capturado exitosamente!\n\n";
		}
		else cout << "\nNo se puede abrir el archivo\n\n";
		
}
void info(){

	int op, contador;
	int ind, dob, trip, quad, king, suite, plan, cuenta, hab;
	char paq[20], cent;
	
	ajustenombre(); //ajuste de nombre e imprimir en la base de datos
	
	cout << "Seleccione el paquete que desea el cliente\n\n";
	cout << "1. Noche (12hrs)\n";
	cout << "2. D" << char(161) << "a completo (24hrs)\n";
	cout << "3. Fin de semana  (2 d" << char(161) << "as y 3 noches)\n";
	cout << "4. Semana (7 d" <<  char(161) << "as completos)\n";
	cout << "5. Suite presidencial (24hrs, hasta 6 personas)\n\n";
	cout << "Ingrese el n" << char(163) << "mero de paquete de acuerdo con la lista anterior: ";
	cin >> op;
	cin.ignore();
	
		switch (op) {
			
			case 1: {
				
				ifstream myfile ("Precios hotel.txt");
					if (myfile.is_open()){
						myfile >> contador;
							for(int i=1; i<=contador; i++){
								myfile >> paq >> ind >> dob >> trip >> quad >> king;
									if (strcmp(paq,"Noche") == 0) //compara
										break;		
							}
							myfile.close();
					}
					else cout << "No es posible abrir el archivo";
					
				system ("cls");
				cout << "Has elegido plan de noche.\n\n";
				cout << "Elija un tipo de habitaci" << char(162) << "n.\n\n";
				cout << "1. Individual. Costo: $" << ind;
				cout << "\n2. Doble. Costo: $" << dob;
				cout << "\n3. Triple. Costo: $" << trip;
				cout << "\n4. Quad. Costo: $" << quad;
				cout << "\n5. King. Costo: $" << king;
				cout << "\n\nSeleccione un n" << char(163) << "mero de acuerdo a la lista anterior: ";
				cin >> hab;
				cin.ignore();
									
					switch(hab){
						
						case 1: {
						
						system ("cls");
						cout << "El cliente ha elegido:\n\n";
						cout << "Paquete: Noche\n";
						cout << "Habitacion: Individual\n"; 
						cout << "Total a pagar: $" << ind << "\n\n";	
												
						ofstream myfile ("Base de datos.txt",ios::app);
									if (myfile.is_open()){
										myfile << "Noche" << " " << "Individual" << " " << ind << char(10);	 	
										myfile.close();
										cout << char(173) << "Se ha capturado exitosamente!";
									}
									else cout << "No se puede abrir el archivo";		
												
						break;	
						}
						
						////////////////////////////////////////
						
						case 2: {
						
						system ("cls");
						cout << "El cliente ha elegido:\n\n";
						cout << "Paquete: Noche\n";
						cout << "Habitacion: Doble\n"; 
						cout << "Total a pagar: $" << dob << "\n\n";	
												
						ofstream myfile ("Base de datos.txt",ios::app);
									if (myfile.is_open()){
										myfile << "Noche" << " " << "Doble" << " " << dob << char(10);	 	
										myfile.close();
										cout << char(173) << "Se ha capturado exitosamente!";
									}
									else cout << "No se puede abrir el archivo";
							
						break;
						}
						
						////////////////////////////////////////
						
						case 3: {
						
						system ("cls");
						cout << "El cliente ha elegido:\n\n";
						cout << "Paquete: Noche\n";
						cout << "Habitacion: Triple\n"; 
						cout << "Total a pagar: $" << trip << "\n\n";	
												
						ofstream myfile ("Base de datos.txt",ios::app);
									if (myfile.is_open()){
										myfile << "Noche" << " " << "Triple" << " " << trip << char(10);	 	
										myfile.close();
										cout << char(173) << "Se ha capturado exitosamente!";
									}
									else cout << "No se puede abrir el archivo";
							
						break;
						}
						
						////////////////////////////////////////
						
						case 4: {
						
						system ("cls");
						cout << "El cliente ha elegido:\n\n";
						cout << "Paquete: Noche\n";
						cout << "Habitacion: Quad\n"; 
						cout << "Total a pagar: $" << quad << "\n\n";	
												
						ofstream myfile ("Base de datos.txt",ios::app);
									if (myfile.is_open()){
										myfile << "Noche" << " " << "Quad" << " " << quad << char(10);	 	
										myfile.close();
										cout << char(173) << "Se ha capturado exitosamente!";
									}
									else cout << "No se puede abrir el archivo";
							
						break;
						}
							
						////////////////////////////////////////
						
						case 5: {
						
						system ("cls");
						cout << "El cliente ha elegido:\n\n";
						cout << "Paquete: Noche\n";
						cout << "Habitacion: King\n"; 
						cout << "Total a pagar: $" << king << "\n\n";	
												
						ofstream myfile ("Base de datos.txt",ios::app);
									if (myfile.is_open()){
										myfile << "Noche" << " " << "King" << " " << king << char(10);	 	
										myfile.close();
										cout << char(173) << "Se ha capturado exitosamente!";
									}
									else cout << "No se puede abrir el archivo";
							
						break;
						}	
							
					}
			break;
			} 
			
		    /////////////////////////////////////////////////////////////////////////////////////

			case 2: {
				
				ifstream myfile ("Precios hotel.txt");
					if (myfile.is_open()){
						myfile >> contador;
							for(int i=1; i<=contador; i++){
								myfile >> paq >> ind >> dob >> trip >> quad >> king;
									if (strcmp(paq,"Todo_dia") == 0) //compara
										break;		
							}
							myfile.close();
					}
					else cout << "No es posible abrir el archivo";
					
				system ("cls");
				cout << "Has elegido plan de d" << char(161) << "a completo.\n\n";
				cout << "Elija un tipo de habitaci" << char(162) << "n.\n\n";
				cout << "1. Individual. Costo: $" << ind;
				cout << "\n2. Doble. Costo: $" << dob;
				cout << "\n3. Triple. Costo: $" << trip;
				cout << "\n4. Quad. Costo: $" << quad;
				cout << "\n5. King. Costo: $" << king;
				cout << "\n\nSeleccione un n" << char(163) << "mero de acuerdo a la lista anterior: ";
				cin >> hab;
				cin.ignore();
									
					switch(hab){
						
						case 1: {
						
						system ("cls");
						cout << "El cliente ha elegido:\n\n";
						cout << "Paquete: D" << char(161) << "a completo\n";
						cout << "Habitacion: Individual\n"; 
						cout << "Total a pagar: $" << ind << "\n\n";	
												
						ofstream myfile ("Base de datos.txt",ios::app);
									if (myfile.is_open()){
										myfile << "Todo_dia" << " " << "Individual" << " " << ind << char(10);	 	
										myfile.close();
										cout << char(173) << "Se ha capturado exitosamente!";
									}
									else cout << "No se puede abrir el archivo";		
												
						break;	
						}
						
						////////////////////////////////////////
						
						case 2: {
						
						system ("cls");
						cout << "El cliente ha elegido:\n\n";
						cout << "Paquete: D" << char(161) << "a completo\n";
						cout << "Habitacion: Doble\n"; 
						cout << "Total a pagar: $" << dob << "\n\n";	
												
						ofstream myfile ("Base de datos.txt",ios::app);
									if (myfile.is_open()){
										myfile << "Todo_dia" << " " << "Doble" << " " << dob << char(10);	 	
										myfile.close();
										cout << char(173) << "Se ha capturado exitosamente!";
									}
									else cout << "No se puede abrir el archivo";
							
						break;
						}
						
						////////////////////////////////////////
						
						case 3: {
						
						system ("cls");
						cout << "El cliente ha elegido:\n\n";
						cout << "Paquete: D" << char(161) << "a completo\n";
						cout << "Habitacion: Triple\n"; 
						cout << "Total a pagar: $" << trip << "\n\n";	
												
						ofstream myfile ("Base de datos.txt",ios::app);
									if (myfile.is_open()){
										myfile << "Todo_dia" << " " << "Triple" << " " << trip << char(10);	 	
										myfile.close();
										cout << char(173) << "Se ha capturado exitosamente!";
									}
									else cout << "No se puede abrir el archivo";
							
						break;
						}
						
						////////////////////////////////////////
						
						case 4: {
						
						system ("cls");
						cout << "El cliente ha elegido:\n\n";
						cout << "Paquete: D" << char(161) << "a completo\n";
						cout << "Habitacion: Quad\n"; 
						cout << "Total a pagar: $" << quad << "\n\n";	
												
						ofstream myfile ("Base de datos.txt",ios::app);
									if (myfile.is_open()){
										myfile << "Todo_dia" << " " << "Quad" << " " << quad << char(10);	 	
										myfile.close();
										cout << char(173) << "Se ha capturado exitosamente!";
									}
									else cout << "No se puede abrir el archivo";
							
						break;
						}
							
						////////////////////////////////////////
						
						case 5: {
						
						system ("cls");
						cout << "El cliente ha elegido:\n\n";
						cout << "Paquete: D" << char(161) << "a completo\n";
						cout << "Habitacion: King\n"; 
						cout << "Total a pagar: $" << king << "\n\n";	
												
						ofstream myfile ("Base de datos.txt",ios::app);
									if (myfile.is_open()){
										myfile << "Todo_dia" << " " << "King" << " " << king << char(10);	 	
										myfile.close();
										cout << char(173) << "Se ha capturado exitosamente!";
									}
									else cout << "No se puede abrir el archivo";
							
						break;
						}	
							
					}
			break;
			}
			
			/////////////////////////////////////////////////////////////////////////////////////
			
			case 3: {
				
				ifstream myfile ("Precios hotel.txt");
					if (myfile.is_open()){
						myfile >> contador;
							for(int i=1; i<=contador; i++){
								myfile >> paq >> ind >> dob >> trip >> quad >> king;
									if (strcmp(paq,"Fin_semana") == 0) //compara
										break;		
							}
							myfile.close();
					}
					else cout << "No es posible abrir el archivo";
					
				system ("cls");
				cout << "Has elegido plan de fin de semana.\n\n";
				cout << "Elija un tipo de habitaci" << char(162) << "n.\n\n";
				cout << "1. Individual. Costo: $" << ind;
				cout << "\n2. Doble. Costo: $" << dob;
				cout << "\n3. Triple. Costo: $" << trip;
				cout << "\n4. Quad. Costo: $" << quad;
				cout << "\n5. King. Costo: $" << king;
				cout << "\n\nSeleccione un n" << char(163) << "mero de acuerdo a la lista anterior: ";
				cin >> hab;
				cin.ignore();
									
					switch(hab){
						
						case 1: {
						
						system ("cls");
						cout << "El cliente ha elegido:\n\n";
						cout << "Paquete: Fin de semana\n";
						cout << "Habitacion: Individual\n"; 
						cout << "Total a pagar: $" << ind << "\n\n";	
												
						ofstream myfile ("Base de datos.txt",ios::app);
									if (myfile.is_open()){
										myfile << "Fin_semana" << " " << "Individual" << " " << ind << char(10);	 	
										myfile.close();
										cout << char(173) << "Se ha capturado exitosamente!";
									}
									else cout << "No se puede abrir el archivo";		
												
						break;	
						}
						
						////////////////////////////////////////
						
						case 2: {
						
						system ("cls");
						cout << "El cliente ha elegido:\n\n";
						cout << "Paquete: Fin de semana\n";
						cout << "Habitacion: Doble\n"; 
						cout << "Total a pagar: $" << dob << "\n\n";	
												
						ofstream myfile ("Base de datos.txt",ios::app);
									if (myfile.is_open()){
										myfile << "Fin_semana" << " " << "Doble" << " " << dob << char(10);	 	
										myfile.close();
										cout << char(173) << "Se ha capturado exitosamente!";
									}
									else cout << "No se puede abrir el archivo";
							
						break;
						}
						
						////////////////////////////////////////
						
						case 3: {
						
						system ("cls");
						cout << "El cliente ha elegido:\n\n";
						cout << "Paquete: Fin de semana\n";
						cout << "Habitacion: Triple\n"; 
						cout << "Total a pagar: $" << trip << "\n\n";	
												
						ofstream myfile ("Base de datos.txt",ios::app);
									if (myfile.is_open()){
										myfile << "Fin_semana" << " " << "Triple" << " " << trip << char(10);	 	
										myfile.close();
										cout << char(173) << "Se ha capturado exitosamente!";
									}
									else cout << "No se puede abrir el archivo";
							
						break;
						}
						
						////////////////////////////////////////
						
						case 4: {
						
						system ("cls");
						cout << "El cliente ha elegido:\n\n";
						cout << "Paquete: Fin de semana\n";
						cout << "Habitacion: Quad\n"; 
						cout << "Total a pagar: $" << quad << "\n\n";	
												
						ofstream myfile ("Base de datos.txt",ios::app);
									if (myfile.is_open()){
										myfile << "Fin_semana" << " " << "Quad" << " " << quad << char(10);	 	
										myfile.close();
										cout << char(173) << "Se ha capturado exitosamente!";
									}
									else cout << "No se puede abrir el archivo";
							
						break;
						}
							
						////////////////////////////////////////
						
						case 5: {
						
						system ("cls");
						cout << "El cliente ha elegido:\n\n";
						cout << "Paquete: Fin de semana\n";
						cout << "Habitacion: King\n"; 
						cout << "Total a pagar: $" << king << "\n\n";	
												
						ofstream myfile ("Base de datos.txt",ios::app);
									if (myfile.is_open()){
										myfile << "Fin_semana" << " " << "King" << " " << king << char(10);	 	
										myfile.close();
										cout << char(173) << "Se ha capturado exitosamente!";
									}
									else cout << "No se puede abrir el archivo";
							
						break;
						}	
							
					}
			break;
			}
			
			/////////////////////////////////////////////////////////////////////////////////////
			
			case 4: {
				
				ifstream myfile ("Precios hotel.txt");
					if (myfile.is_open()){
						myfile >> contador;
							for(int i=1; i<=contador; i++){
								myfile >> paq >> ind >> dob >> trip >> quad >> king;
									if (strcmp(paq,"Semana") == 0) //compara
										break;		
							}
							myfile.close();
					}
					else cout << "No es posible abrir el archivo";
					
				system ("cls");
				cout << "Has elegido plan de semana.\n\n";
				cout << "Elija un tipo de habitaci" << char(162) << "n.\n\n";
				cout << "1. Individual. Costo: $" << ind;
				cout << "\n2. Doble. Costo: $" << dob;
				cout << "\n3. Triple. Costo: $" << trip;
				cout << "\n4. Quad. Costo: $" << quad;
				cout << "\n5. King. Costo: $" << king;
				cout << "\n\nSeleccione un n" << char(163) << "mero de acuerdo a la lista anterior: ";
				cin >> hab;
				cin.ignore();
									
					switch(hab){
						
						case 1: {
						
						system ("cls");
						cout << "El cliente ha elegido:\n\n";
						cout << "Paquete: Semana\n";
						cout << "Habitacion: Individual\n"; 
						cout << "Total a pagar: $" << ind << "\n\n";	
												
						ofstream myfile ("Base de datos.txt",ios::app);
									if (myfile.is_open()){
										myfile << "Semana" << " " << "Individual" << " " << ind << char(10);	 	
										myfile.close();
										cout << char(173) << "Se ha capturado exitosamente!";
									}
									else cout << "No se puede abrir el archivo";		
												
						break;	
						}
						
						////////////////////////////////////////
						
						case 2: {
						
						system ("cls");
						cout << "El cliente ha elegido:\n\n";
						cout << "Paquete: Semana\n";
						cout << "Habitacion: Doble\n"; 
						cout << "Total a pagar: $" << dob << "\n\n";	
												
						ofstream myfile ("Base de datos.txt",ios::app);
									if (myfile.is_open()){
										myfile << "Semana" << " " << "Doble" << " " << dob << char(10);	 	
										myfile.close();
										cout << char(173) << "Se ha capturado exitosamente!";
									}
									else cout << "No se puede abrir el archivo";
							
						break;
						}
						
						////////////////////////////////////////
						
						case 3: {
						
						system ("cls");
						cout << "El cliente ha elegido:\n\n";
						cout << "Paquete: Semana\n";
						cout << "Habitacion: Triple\n"; 
						cout << "Total a pagar: $" << trip << "\n\n";	
												
						ofstream myfile ("Base de datos.txt",ios::app);
									if (myfile.is_open()){
										myfile << "Semana" << " " << "Triple" << " " << trip << char(10);	 	
										myfile.close();
										cout << char(173) << "Se ha capturado exitosamente!";
									}
									else cout << "No se puede abrir el archivo";
							
						break;
						}
						
						////////////////////////////////////////
						
						case 4: {
						
						system ("cls");
						cout << "El cliente ha elegido:\n\n";
						cout << "Paquete: Semana\n";
						cout << "Habitacion: Quad\n"; 
						cout << "Total a pagar: $" << quad << "\n\n";	
												
						ofstream myfile ("Base de datos.txt",ios::app);
									if (myfile.is_open()){
										myfile << "Semana" << " " << "Quad" << " " << quad << char(10);	 	
										myfile.close();
										cout << char(173) << "Se ha capturado exitosamente!";
									}
									else cout << "No se puede abrir el archivo";
							
						break;
						}
							
						////////////////////////////////////////
						
						case 5: {
						
						system ("cls");
						cout << "El cliente ha elegido:\n\n";
						cout << "Paquete: Semana\n";
						cout << "Habitacion: King\n"; 
						cout << "Total a pagar: $" << king << "\n\n";	
												
						ofstream myfile ("Base de datos.txt",ios::app);
									if (myfile.is_open()){
										myfile << "Semana" << " " << "King" << " " << king << char(10);	 	
										myfile.close();
										cout << char(173) << "Se ha capturado exitosamente!";
									}
									else cout << "No se puede abrir el archivo";
							
						break;
						}	
							
					}
			break;
			}
			
			/////////////////////////////////////////////////////////////////////////////////////
			
			case 5: {
				
				ifstream myfile ("Precios hotel.txt");
					if (myfile.is_open()){
						myfile >> contador;
							for(int i=1; i<=contador; i++){
								myfile >> paq >> ind >> dob >> trip >> quad >> king;
									if (strcmp(paq,"Suite") == 0) //compara
										break;		
							}
							myfile.close();
					}
					else cout << "No es posible abrir el archivo";
					
					system ("cls");
					cout << "Has elegido plan de suite presidencial.\n\n";
					cout << "Habitacion " << char(163) << "nica. Costo: $" << ind;
				
					cout << "\n\nEl cliente ha elegido:\n\n";
					cout << "Paquete: Suite presidencial\n";
					cout << "Habitacion: " << char(163) << "nica \n"; 
					cout << "Total a pagar: $" << ind << "\n\n";	
									
					ofstream myfile1 ("Base de datos.txt",ios::app);
						if (myfile1.is_open()){
							myfile1 << "Suite" << " " << "Unico" << " " << ind << char(10);	 	
							myfile1.close();
							cout << char(173) << "Se ha capturado exitosamente!";
						}
						else cout << "No se puede abrir el archivo";
			}
		
			default: {
			
			system ("cls");
			return info();
				
			break;
			
			}
		
		}
		
}
void consulta(){
	
int  a, b, n=0, cont=0, cuenta;
char nombre1[50], nombre2[50], nombre3[50], nombre[50], paq[20], hab[20];

	cout << "Escriba el nombre del cliente, nombres primero: ";
	cin.getline(nombre1, 50);
	a=strlen(nombre1);
		for(int i=0; i<a; i++){
			nombre1[0]=toupper(nombre1[0]);
				if(nombre1[i] == ' '){
					nombre2[n]=nombre1[i];
					nombre1[i+1]=toupper(nombre1[i+1]);
					n++;
				}
				else {
					nombre2[n]=nombre1[i];
					n++;
				}
		}
	
	n=0;	

	b=strlen(nombre2);
		for(int i=0; i<a; i++){
			if(nombre2[i] == ' '){
				nombre3[n]='_';
				n++;
			}
			else {
				nombre3[n]=nombre2[i];
				n++;
			}
		}

ifstream myfile ("Contador.txt");
	if (myfile.is_open()){
		myfile >> cont;
		myfile.close();
	}
	else cout << "\nNo se puede abrir el archivo\n\n";		

ifstream myfile1 ("Base de datos.txt");
	if (myfile1.is_open()){
			for(int i=1; i<=cont; i++){
				myfile1 >> nombre >> paq >> hab >> cuenta;
					if (strcmp(nombre,nombre3) == 0) {
						cout << "\nEl cliente eligi" << char(162) << ":\n\n";
						cout << "Paquete: "<< paq;	
						cout <<	"\nHabitaci" << char(162) << "n: " << hab;
						cout << "\nTotal a pagar: " << cuenta;
					}			
			}
		myfile.close();
	}
	else cout << "\nNo se puede abrir el archivo\n\n";	
}
void auditoria(){
	int cont=0, contpaq1=0, contpaq2=0, contpaq3=0, contpaq4=0, contpaq5=0, cuenta;
	int conthab1=0, conthab2=0, conthab3=0, conthab4=0, conthab5=0, conthab6=0, habtotal=0, ingreso=0;
	char nombre[50], paq[50], hab[50];
	
	
	
	cout << "La siguiente informaci" << char(162) << "n corresponde a nuestra base de datos:\n\n\n";
	
	ifstream myfile ("Contador.txt");
	if (myfile.is_open()){
		myfile >> cont;
		myfile.close();
	}
	else cout << "\nNo se puede abrir el archivo\n\n";
	
	cout << "El n" << char(163) << "mero de personas de alta en nuestro sistema es: " << cont;
	
	ifstream myfile1 ("Base de datos.txt");
	if (myfile1.is_open()){
			for(int i=1; i<=cont; i++){
				myfile1 >> nombre >> paq >> hab >> cuenta;
					if (strcmp(paq,"Noche") == 0) 
						contpaq1++;
						
						if (strcmp(paq,"Todo_dia") == 0)
							contpaq2++;
							
							if (strcmp(paq,"Fin_semana") == 0)
								contpaq3++;
								
								if (strcmp(paq,"Semana") == 0)
									contpaq4++;
									
									if (strcmp(paq,"Suite") == 0) 
										contpaq5++; 
			}
		myfile1.close();
	}
	else cout << "\nNo se puede abrir el archivo\n\n";
	
	cout << "\n\n\nEl n" << char(163) << "mero de personas hospedadas por paquete es: ";
	cout << "\n\nNoche: " << contpaq1;
	cout << "\nTodo el d" << char(161) << "a: " << contpaq2;
	cout << "\nFin de semana: " << contpaq3;
	cout << "\nSemana: " << contpaq4;
	cout << "\nSuite presidencial: " << contpaq5;
	
	ifstream myfile2 ("Base de datos.txt");
	if (myfile2.is_open()){
			for(int i=1; i<=cont; i++){
				myfile2 >> nombre >> paq >> hab >> cuenta;
					if (strcmp(hab,"Individual") == 0) 
						conthab1++;
						
						if (strcmp(hab,"Doble") == 0)
							conthab2++;
							
							if (strcmp(hab,"Triple") == 0)
								conthab3++;
								
								if (strcmp(hab,"Quad") == 0)
									conthab4++;
									
									if (strcmp(hab,"King") == 0) 
										conthab5++; 
										
										if (strcmp(hab, "Unico") ==0)
											conthab6++;
			}
		myfile2.close();
	}
	else cout << "\nNo se puede abrir el archivo\n\n";
	
	habtotal=conthab1+conthab2+conthab3+conthab4+conthab5+conthab6;
	
	cout << "\n\n\nEl n" << char(163) << "mero de habitaciones ocupadas es: ";
	cout << "\n\nTotal: " << habtotal;
	cout << "\nIndividual: " << conthab1;
	cout << "\nDoble: " << conthab2;
	cout << "\nTriple: " << conthab3;
	cout << "\nQuad: " << conthab4;
	cout << "\nKing: " << conthab5;
	cout << "\nSuite: " << conthab6;

	cout << "\n\n\nEl n" << char(163) << "mero de habitaciones disponibles es: ";
	cout << "\n\nTotal: " << numhab-habtotal;
	cout << "\nIndividual: " << numind-conthab1;
	cout << "\nDoble: " << numdob-conthab2;
	cout << "\nTriple: " << numtrip-conthab3;
	cout << "\nQuad: " << numquad-conthab4;
	cout << "\nKing: " << numking-conthab5;
	cout << "\nSuite: " << numsuite-conthab6;
	
	
	ifstream myfile3 ("Base de datos.txt");
	if (myfile3.is_open()){
			for(int i=1; i<=cont; i++){
				myfile3 >> nombre >> paq >> hab >> cuenta;
					ingreso=ingreso+cuenta;
			}
		myfile3.close();
	}
	else cout << "\nNo se puede abrir el archivo\n\n";
	
	cout << "\n\n\nEl ingreso totaa en el hotel es de: $" << ingreso;
	
}
