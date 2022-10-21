/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>
#include <stdio.h>
#include <cstring>
#include <stdlib.h>


using namespace std;

struct tiendagamer
{

	int idjuego, numjuego, opc;
    float precio_unitario= 0, impuesto, total;
    string nomjuego, clasificacion, categoria, caracteristicas, descripcion, genero, Ano_Lan;

};

int main()
{
    tiendagamer videojuego[3];
	int opcion, busqueda;

	do
	{
	printf("\t ***TiendaGamer UANL*** \n");
    printf(" 1.-Agregar Articulo \n 2.-Modificar Articulo\n 3.-Eliminar Articulo\n 4.-Lista Articulovigentes\n 5.-Limpiar Pantalla\n 6.-Salir\n");
    scanf("%d", &opcion);


		switch (opcion)
		{
		case 1:
			//capturar y guardar los datos por posicion
			for (int i = 0; i < 3; i++)
			{
				videojuego[i].idjuego = 20220000 + i;
				printf("ID del videjuego: %d \n", videojuego[i].idjuego);
				int salida=1;
				
				do
				{
					printf("Ingrese el num del videojuego \n");
					scanf("%d", &videojuego[i].numjuego);
				} while (videojuego[i].numjuego == videojuego[i - 1].numjuego || videojuego[i].numjuego == videojuego[i - 2].numjuego);
					
					
				printf("Ingrese el nombre del videojuego\n");
				cin.ignore();
				getline(cin, videojuego[i].nomjuego); 
				printf("Ingrese el fecha de lanzamiento del videojuego\n");
				cin.ignore();
				getline(cin, videojuego[i].Ano_Lan);
				printf("Ingrese el clasificacion del videojuego\n");
				cin.ignore();
				getline(cin, videojuego[i].clasificacion);
				printf("Ingrese la descripcion del videojuego\n");
				cin.ignore();
				getline(cin, videojuego[i].descripcion);
				printf("Ingrese la categoria del videojuego\n");
				cin.ignore();
				getline(cin, videojuego[i].categoria);
				printf("Ingrese el subtotal \n");
				scanf("%f", &videojuego[i].precio_unitario);
				videojuego[i].impuesto = videojuego[i].precio_unitario * .16;
				videojuego[i].total = videojuego[i].precio_unitario + videojuego[i].impuesto;
		
			}
			break;

		case 2: 
			break;

		case 3:// no hara nada
			printf("ingrese el num del videojuego");
			scanf("%d", &busqueda);

			//imprimir los datos por posicion 
			for (int i = 0; i < 3; i++)
			{
				if (busqueda == videojuego[i].numjuego)
				{
					videojuego[i].numjuego = 0;
				}
			}
			break;

		case 4:
		int opc;
			printf(" 1.-Listas Vigentes\n");
			scanf("%d", &opc);
			if (opc == 1)
			{
				printf("Ingrese el num del videojuego");
				scanf("%d", &busqueda);

				//imprimir los datos por posicion 
				for (int i = 0; i < 3; i++)
				{
					if (busqueda == videojuego[i].numjuego)
					{
					    printf("Id del videojuego: %d \n", videojuego[i].idjuego);
						printf("Numero del videojuego: %d \n", videojuego[i].numjuego);
						printf("Nombre del videojuego: %s \n", videojuego[i].nomjuego.c_str());
						printf("Fecha de lanzamiento del videojuego: %s \n", videojuego[i].Ano_Lan.c_str());
						printf("Clasificacion del videojuego: %s \n", videojuego[i].clasificacion.c_str());
						printf("Descripcion del videojuego: %s \n", videojuego[i].descripcion.c_str());
						printf("Precio unitario del videojuego: %f \n", videojuego[i].precio_unitario);
						printf("El Iva: %f \n", videojuego[i].impuesto);
						printf("Costo total: %f \n", videojuego[i].total);
					}
				}
			}
			break;
		case 5:
			printf("saliendo... \n");
			break;
		default:
			printf("intente denuevo... \n");
			break;
		}
	} while (opcion != 5);
	system("pause");
}
