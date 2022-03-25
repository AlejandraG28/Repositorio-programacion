#include <iostream>
#include <math.h>
using namespace std;
main()

{
int a;
do {

		int opcion;
			cout<< "presione una de las siguientes teclas del menu segun su interes \n ";
			cout << "1 piso "<<endl;
			cout << "2 piso"<< endl;
			cout << "3 piso"<< endl;
			cout << "4 piso"<< endl;
			cout << "5 piso"<< endl;
			cout << "6 piso"<< endl;
			cout << "7 piso"<< endl;
			cout << "8 piso"<< endl;
			cout << "9 piso"<< endl;
			cout << "10 piso"<< endl;
			cout << "el piso que ingresaste no funciona"<< endl;
		
				cin >> opcion;
				system ("cls");
				switch (opcion)
				{
					case 1: cout << "Bienvenido al primer piso \n";
					
							int entrada;
							
								cout<< "Ingrese a alguna oficina segun su interes \n ";
								cout << "1 OFICINA uno suma"<<endl;
								cout << "2 OFICINA dos resta"<< endl;
								cout << "3 OFICINA tres multiplicacion"<< endl;
								cout << "4 OFICINA cuatro division"<< endl;
								cout << "5 OFICINA cinco potencia"<< endl;
								cout << "6 OFICINA seis raiz"<< endl;
								cout << "7 OFICINA siete"<< endl;
								cout << "8 OFICINA ocho"<< endl;
								cout << "9 OFICINA nueve"<< endl;
								cout << "10 OFICINA diez"<< endl;
								cout << "La ofinica que ingresaste no corresponde a este piso "<< endl;
			
									cin>> entrada;
									system ("cls");
									switch (entrada)
								{
									case 1: cout << "Bienvenido a la oficina 101 \n";
									
												double n1, n2,s;
													cout << "ingrese el primer numero para la suma";
													cin >> n1;
													cout << "ingrese el segundo numero para la suma ";
													cin >> n2;
													s=n1+n2;
													cout << "el resultado de la suma es: "<<s <<endl;
						
									break;
									case 2: cout << "Bienvenido a la oficina 102 \n";
											double n3, n4,r;
													cout << "ingrese el primer numero para la resta";
													cin >> n3;
													cout << "ingrese el segundo numero para la resta ";
													cin >> n4;
													r=n3-n4;
													cout << "el resultado de la resta es: "<<r << endl;
						
									break;
									case 3: cout << "Bienvenido a la oficina 103 \n";
											double n5, n6,m;
													cout << "ingrese el primer numero para la multiplicacion";
													cin >> n5;
													cout << "ingrese el segundo numero para la multiplicacion ";
													cin >> n6;
													m=n5*n6;
													cout << "el resultado de la multiplicacion es: " << m <<endl;
													
									break;
									case 4: cout << "Bienvenido a la oficina 104 \n";
											double n7, n8,d;
													cout << "ingrese el primer numero para la division";
													cin >> n7;
													cout << "ingrese el segundo numero para la division ";
													cin >> n8;
													d=n7/n8;
													cout << "el resultado de la division es: " << d <<endl;
									break;
									case 5: cout << "Bienvenido a la oficina 105 \n";
											double num1, num2,potencia;
												cout << "ingrese la base de la potencia";
												cin >> num1;
												cout << "ingrese el exponente de l potencia";
												cin >> num2;
												potencia = pow (num1,num2);
												cout << "la potencia de " <<num1<<" elevado a la " <<num2<< " es: "<<potencia <<endl;
									break;
									case 6: cout << "Bienvenido a la oficina 106 \n";
											double n9,raiz;
												cout << "ingrese el numero de la raiz";
												cin >> n9;
												raiz = sqrt (n9);
												cout << "la raiz de " <<n9 << "es igual a " << raiz <<endl;
									break;
									case 7: cout << "Bienvenido a la oficina 107 \n";
									break;
									case 8: cout << "Bienvenido a la oficina 108 \n";
									break;
									case 9: cout << "Bienvenido a la oficina 109 \n";
									break;
									case 10: cout << "Bienvenido a la oficina 110 \n";
								}
								
							break;
					case 2: cout << "Bienvenido al segundo piso \n";
					
							int entradas;
							
								cout<< "Ingrese a alguna oficina segun su interes \n ";
								cout << "1 OFICINA uno"<<endl;
								cout << "2 OFICINA dos"<< endl;
								cout << "3 OFICINA tres"<< endl;
								cout << "4 OFICINA cuatro"<< endl;
								cout << "5 OFICINA cinco"<< endl;
								cout << "6 OFICINA seis"<< endl;
								cout << "7 OFICINA siete"<< endl;
								cout << "8 OFICINA ocho"<< endl;
								cout << "9 OFICINA nueve"<< endl;
								cout << "10 OFICINA diez"<< endl;
								cout << "La ofinica que ingresaste no corresponde a este piso "<< endl;
		
									cin>> entradas;
									system ("cls");
									switch (entradas)
								{
									case 1: cout << "Bienvenido a la oficina 201 \n";
									break;
									case 2: cout << "Bienvenido a la oficina 202 \n";
									break;
									case 3: cout << "Bienvenido a la oficina 203 \n";
									break;
									case 4: cout << "Bienvenido a la oficina 204 \n";
									break;
									case 5: cout << "Bienvenido a la oficina 205 \n";
									break;
									case 6: cout << "Bienvenido a la oficina 206 \n";
									break;
									case 7: cout << "Bienvenido a la oficina 207 \n";
									break;
									case 8: cout << "Bienvenido a la oficina 208 \n";
									break;
									case 9: cout << "Bienvenido a la oficina 209 \n";
									break;
									case 10: cout << "Bienvenido a la oficina 210 \n";
								}
							
							break;
					case 3: cout << "Bienvenido al tercer piso \n";
					
							int cadena;
							
								cout<< "Ingrese a alguna oficina segun su interes \n ";
								cout << "1 OFICINA uno"<<endl;
								cout << "2 OFICINA dos"<< endl;
								cout << "3 OFICINA tres"<< endl;
								cout << "4 OFICINA cuatro"<< endl;
								cout << "5 OFICINA cinco"<< endl;
								cout << "6 OFICINA seis"<< endl;
								cout << "7 OFICINA siete"<< endl;
								cout << "8 OFICINA ocho"<< endl;
								cout << "9 OFICINA nueve"<< endl;
								cout << "10 OFICINA diez"<< endl;
								cout << "La ofinica que ingresaste no corresponde a este piso "<< endl;
		
									cin>> cadena;
									system ("cls");
									switch (cadena)
								{
									case 1: cout << "Bienvenido a la oficina 301 \n";
									break;
									case 2: cout << "Bienvenido a la oficina 302 \n";
									break;
									case 3: cout << "Bienvenido a la oficina 303 \n";
									break;
									case 4: cout << "Bienvenido a la oficina 304 \n";
									break;
									case 5: cout << "Bienvenido a la oficina 305 \n";
									break;
									case 6: cout << "Bienvenido a la oficina 306 \n";
									break;
									case 7: cout << "Bienvenido a la oficina 307 \n";
									break;
									case 8: cout << "Bienvenido a la oficina 308 \n";
									break;
									case 9: cout << "Bienvenido a la oficina 309 \n";
									break;
									case 10: cout << "Bienvenido a la oficina 310 \n";
								}
							
							break;
					case 4: cout << "Bienvenido al cuarto piso \n";
					
							int cadenas;
							
								cout<< "Ingrese a alguna oficina segun su interes \n ";
								cout << "1 OFICINA uno"<<endl;
								cout << "2 OFICINA dos"<< endl;
								cout << "3 OFICINA tres"<< endl;
								cout << "4 OFICINA cuatro"<< endl;
								cout << "5 OFICINA cinco"<< endl;
								cout << "6 OFICINA seis"<< endl;
								cout << "7 OFICINA siete"<< endl;
								cout << "8 OFICINA ocho"<< endl;
								cout << "9 OFICINA nueve"<< endl;
								cout << "10 OFICINA diez"<< endl;
								cout << "La ofinica que ingresaste no corresponde a este piso "<< endl;
		
									cin>> cadenas;
									system ("cls");
									switch (cadenas)
								{
									case 1: cout << "Bienvenido a la oficina 401 \n";
									break;
									case 2: cout << "Bienvenido a la oficina 402 \n";
									break;
									case 3: cout << "Bienvenido a la oficina 403 \n";
									break;
									case 4: cout << "Bienvenido a la oficina 404 \n";
									break;
									case 5: cout << "Bienvenido a la oficina 405 \n";
									break;
									case 6: cout << "Bienvenido a la oficina 406 \n";
									break;
									case 7: cout << "Bienvenido a la oficina 407 \n";
									break;
									case 8: cout << "Bienvenido a la oficina 408 \n";
									break;
									case 9: cout << "Bienvenido a la oficina 409 \n";
									break;
									case 10: cout << "Bienvenido a la oficina 410 \n";
								}	
									
							break;
						
						case 5: cout << "Bienvenido al quinto piso \n";
					
							int cargo;
							
								cout<< "Ingrese a alguna oficina segun su interes \n ";
								cout << "1 OFICINA uno"<<endl;
								cout << "2 OFICINA dos"<< endl;
								cout << "3 OFICINA tres"<< endl;
								cout << "4 OFICINA cuatro"<< endl;
								cout << "5 OFICINA cinco"<< endl;
								cout << "6 OFICINA seis"<< endl;
								cout << "7 OFICINA siete"<< endl;
								cout << "8 OFICINA ocho"<< endl;
								cout << "9 OFICINA nueve"<< endl;
								cout << "10 OFICINA diez"<< endl;
								cout << "La ofinica que ingresaste no corresponde a este piso "<< endl;
		
									cin>> cargo;
									system ("cls");
									switch (cargo)
								{
									case 1: cout << "Bienvenido a la oficina 501 \n";
									break;
									case 2: cout << "Bienvenido a la oficina 502 \n";
									break;
									case 3: cout << "Bienvenido a la oficina 503 \n";
									break;
									case 4: cout << "Bienvenido a la oficina 504 \n";
									break;
									case 5: cout << "Bienvenido a la oficina 505 \n";
									break;
									case 6: cout << "Bienvenido a la oficina 506 \n";
									break;
									case 7: cout << "Bienvenido a la oficina 507 \n";
									break;
									case 8: cout << "Bienvenido a la oficina 508 \n";
									break;
									case 9: cout << "Bienvenido a la oficina 509 \n";
									break;
									case 10: cout << "Bienvenido a la oficina 510 \n";
								}	
									
							break;
						case 6: cout << "Bienvenido al sexto piso \n";
					
							int cargos;
							
								cout<< "Ingrese a alguna oficina segun su interes \n ";
								cout << "1 OFICINA uno"<<endl;
								cout << "2 OFICINA dos"<< endl;
								cout << "3 OFICINA tres"<< endl;
								cout << "4 OFICINA cuatro"<< endl;
								cout << "5 OFICINA cinco"<< endl;
								cout << "6 OFICINA seis"<< endl;
								cout << "7 OFICINA siete"<< endl;
								cout << "8 OFICINA ocho"<< endl;
								cout << "9 OFICINA nueve"<< endl;
								cout << "10 OFICINA diez"<< endl;
								cout << "La ofinica que ingresaste no corresponde a este piso "<< endl;
		
									cin>> cargos;
									system ("cls");
									switch (cargos)
								{
									case 1: cout << "Bienvenido a la oficina 601 \n";
									break;
									case 2: cout << "Bienvenido a la oficina 602 \n";
									break;
									case 3: cout << "Bienvenido a la oficina 603 \n";
									break;
									case 4: cout << "Bienvenido a la oficina 604 \n";
									break;
									case 5: cout << "Bienvenido a la oficina 605 \n";
									break;
									case 6: cout << "Bienvenido a la oficina 606 \n";
									break;
									case 7: cout << "Bienvenido a la oficina 607 \n";
									break;
									case 8: cout << "Bienvenido a la oficina 608 \n";
									break;
									case 9: cout << "Bienvenido a la oficina 609 \n";
									break;
									case 10: cout << "Bienvenido a la oficina 610 \n";
								}	
									
							break;	
						case 7: cout << "Bienvenido al septimo piso \n";
					
							int carga;
							
								cout<< "Ingrese a alguna oficina segun su interes \n ";
								cout << "1 OFICINA uno"<<endl;
								cout << "2 OFICINA dos"<< endl;
								cout << "3 OFICINA tres"<< endl;
								cout << "4 OFICINA cuatro"<< endl;
								cout << "5 OFICINA cinco"<< endl;
								cout << "6 OFICINA seis"<< endl;							
								cout << "7 OFICINA siete edad"<< endl;
								cout << "8 OFICINA ocho"<< endl;
								cout << "9 OFICINA nueve"<< endl;
								cout << "10 OFICINA diez"<< endl;
								cout << "La ofinica que ingresaste no corresponde a este piso "<< endl;
		
									cin>> carga;
									system ("cls");
									switch (carga)
								{
									case 1: cout << "Bienvenido a la oficina 701 \n";
									break;
									case 2: cout << "Bienvenido a la oficina 702 \n";
									break;
									case 3: cout << "Bienvenido a la oficina 703 \n";
									break;
									case 4: cout << "Bienvenido a la oficina 704 \n";
									break;
									break;
									case 6: cout << "Bienvenido a la oficina 706 \n";
									break;
									case 7: cout << "Bienvenido a la oficina 707 \n";
									
									int e1,e2,e3,suma;
									cout << "ingrese la primera edad: ";
									cin >> e1;
													if (e1 >=18)
														{
														cout << "Bienvenido a cine para adultos " <<endl;
														}
													else
													{
														if (e1<=12)
														{
														cout << "Bienvenido a cine para adolescentes" <<endl;
														}
														else 
														{
															if (e2<=10)
															cout << "Bienvenido a cine para niños" <<endl;	
														}
													}																								
									cout << "ingrese la segunda edad: ";
									cin >> e2;
													if (e2 >=18)
														{
														cout << "Bienvenido a cine para adultos " <<endl;
														}
													else
													{
														if (e2<=12)
														{
														cout << "Bienvenido a cine para adolescentes" <<endl;
														}
														else 
														{
															if (e2<=10)
															cout << "Bienvenido a cine para niños" <<endl;	
														}
													}
									cout << "ingrese la tercera edad: ";
									cin >> e3;
													if (e3 >=18)
														{
														cout << "Bienvenido a cine para adultos " <<endl;
														}
													else
													{
														if (e3<=12)
														{
														cout << "Bienvenido a cine para adolescentes" <<endl;
														}
														else 
														{
															if (e3<=10)
															cout << "Bienvenido a cine para niños" <<endl;	
														}
													}
									suma = e1+e2+e3;											
					 					if  (suma <=99)
											{
										    	int e4,e5;
												cout << "ingrese dos edades mas: " <<endl;
												cout << "ingrese la cuarta edad: ";
												cin >> e4;
													if (e4 >=18)
														{
														cout << "Bienvenido a cine para adultos " <<endl;
														}
													else
													{
														if (e4<=12)
														{
														cout << "Bienvenido a cine para adolescentes" <<endl;
														}
														else 
														{
															if (e4<=10)
															cout << "Bienvenido a cine para niños" <<endl;	
														}
													}
												cout << "ingrese la quinta edad: ";
												cin >> e5;	
													if (e5 >=18)
														{
														cout << "Bienvenido a cine para adultos " <<endl;
														cout << "Han ingresado cinco personas a la sala" <<endl;
														}
													else
													{
														if (e5<=12)
														{
														cout << "Bienvenido a cine para adolescentes" <<endl;
														cout << "Han ingresado cinco personas a la sala" <<endl;
														}
														else 
														{
															if (e5<=10)
															cout << "Bienvenido a cine para niños" <<endl;
															cout << "Han ingresado cinco personas a la sala" <<endl;	
														}
														
													}	
																					
											}			
											
										else 
											{
											int prom;
											prom =suma/3;																												
											cout <<"el promedio de las edades ingresadas es: " << prom <<endl <<"Han ingresado tres personas a la sala" <<endl ;														
											}					
									break;
									case 5: cout << "Bienvenido a la oficina 705 \n";
									break;
									case 8: cout << "Bienvenido a la oficina 708 \n";
									break;
									case 9: cout << "Bienvenido a la oficina 709 \n";
									break;
									case 10: cout << "Bienvenido a la oficina 710 \n";
								}	
									
							break;	
						case 8: cout << "Bienvenido al octavo piso \n";
					
							int cargas;
							
								cout<< "Ingrese a alguna oficina segun su interes \n ";
								cout << "1 OFICINA uno"<<endl;
								cout << "2 OFICINA dos"<< endl;
								cout << "3 OFICINA tres"<< endl;
								cout << "4 OFICINA cuatro"<< endl;
						cout <<  "hello kitty";
								cout << "5 OFICINA cinco"<< endl;
								cout << "6 OFICINA seis"<< endl;
								cout << "7 OFICINA siete"<< endl;
								cout << "8 OFICINA ocho"<< endl;
								cout << "9 OFICINA nueve"<< endl;
								cout << "10 OFICINA diez"<< endl;
								cout << "La ofinica que ingresaste no corresponde a este piso "<< endl;
		
									cin>> cargas;
									system ("cls");
									switch (cargas)
								{
									case 1: cout << "Bienvenido a la oficina 801 \n";
									break;
									case 2: cout << "Bienvenido a la oficina 802 \n";
									break;
									case 3: cout << "Bienvenido a la oficina 803 \n";
									break;
									case 4: cout << "Bienvenido a la oficina 804 \n";
									break;
									case 5: cout << "Bienvenido a la oficina 805 \n";
									break;
									case 6: cout << "Bienvenido a la oficina 806 \n";
									break;
									case 7: cout << "Bienvenido a la oficina 807 \n";
									break;
									case 8: cout << "Bienvenido a la oficina 808 \n";
									break;
									case 9: cout << "Bienvenido a la oficina 809 \n";
									break;
									case 10: cout << "Bienvenido a la oficina 810 \n";
								}	
									
							break;	
						case 9: cout << "Bienvenido al noveno piso \n";
					
							int cosa;
							
								cout<< "Ingrese a alguna oficina segun su interes \n ";
								cout << "1 OFICINA uno"<<endl;
								cout << "2 OFICINA dos"<< endl;
								cout << "3 OFICINA tres"<< endl;
								cout << "4 OFICINA cuatro"<< endl;
								cout << "5 OFICINA cinco"<< endl;
								cout << "6 OFICINA seis"<< endl;
								cout << "7 OFICINA siete"<< endl;
								cout << "8 OFICINA ocho"<< endl;
								cout << "9 OFICINA nueve"<< endl;
								cout << "10 OFICINA diez"<< endl;
								cout << "La ofinica que ingresaste no corresponde a este piso "<< endl;
		
									cin>> cosa;
									system ("cls");
									switch (cosa)
								{
									case 1: cout << "Bienvenido a la oficina 901 \n";
									break;
									case 2: cout << "Bienvenido a la oficina 902 \n";
									break;
									case 3: cout << "Bienvenido a la oficina 903 \n";
									break;
									case 4: cout << "Bienvenido a la oficina 904 \n";
									break;
									case 5: cout << "Bienvenido a la oficina 905 \n";
									break;
									case 6: cout << "Bienvenido a la oficina 906 \n";
									break;
									case 7: cout << "Bienvenido a la oficina 907 \n";
									break;
									case 8: cout << "Bienvenido a la oficina 908 \n";
									break;
									case 9: cout << "Bienvenido a la oficina 909 \n";
									break;
									case 10: cout << "Bienvenido a la oficina 910 \n";
								}	
									
							break;	
						case 10: cout << "Bienvenido al decimo piso \n";
					
							int cosas;
							
								cout<< "Ingrese a alguna oficina segun su interes \n ";
								cout << "1 OFICINA uno"<<endl;
								cout << "2 OFICINA dos"<< endl;
								cout << "3 OFICINA tres"<< endl;
								cout << "4 OFICINA cuatro"<< endl;
								cout << "5 OFICINA cinco"<< endl;
								cout << "6 OFICINA seis"<< endl;
								cout << "7 OFICINA siete"<< endl;
								cout << "8 OFICINA ocho"<< endl;
								cout << "9 OFICINA nueve"<< endl;
								cout << "10 OFICINA diez"<< endl;
								cout << "La ofinica que ingresaste no corresponde a este piso "<< endl;
		
									cin>> cosas;
									system ("cls");
									switch (cosas)
								{
									case 1: cout << "Bienvenido a la oficina 1001 \n";
									break;
									case 2: cout << "Bienvenido a la oficina 1002 \n";
									break;
									case 3: cout << "Bienvenido a la oficina 1003 \n";
									break;
									case 4: cout << "Bienvenido a la oficina 1004 \n";
									break;
									case 5: cout << "Bienvenido a la oficina 1005 \n";
									break;
									case 6: cout << "Bienvenido a la oficina 1006 \n";
									break;
									case 7: cout << "Bienvenido a la oficina 1007 \n";
									break;
									case 8: cout << "Bienvenido a la oficina 1008 \n";
									break;
									case 9: cout << "Bienvenido a la oficina 1009 \n";
									break;
									case 10: cout << "Bienvenido a la oficina 1010 \n";
								}	
									
							break;	
					default: cout << "la eleccion no pertenece al mismo \n";
					

				}
		cout<< "si desea continuar precione 1 sino precione cualquier otra tecla";
	cin>> a;
	system ("cls");
	} while ( a==1);
	
	

}
