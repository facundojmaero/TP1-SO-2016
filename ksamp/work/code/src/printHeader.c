#include <stdio.h>
#include <stdlib.h>
#include <string.h>
    /**
    * @brief Imprime el mensaje de bienvenida
    *
    * Al iniciar el programa, imprime por consola un mensaje de bienvenida, que consiste en
    * el nombre de la pc donde se esta ejecutando, y la hora y fecha actual.
    * @param fp File Descriptor, utilizado para abrir los archivos necesarios como lectura
    * @param buffer[] Arreglo de caracteres usado para almacenar las cadenas encontradas
    */
int printHeader(FILE* fp,char buffer[]){

	char fecha [20];
	char hora [20];

	printf("\nBienvenido a ksamp!\n");
	fp = fopen("/proc/sys/kernel/hostname","r");
	if (fp == NULL){
		return 1;
	} 
	buffer = fgets(buffer, 256, fp); 
	fclose(fp);
	printf("Hostname: %s",buffer);

	fp = fopen("/proc/driver/rtc","r");
	if (fp == NULL){
		return 1;
	} 
	
	buffer = fgets(buffer, 100, fp);
	strcpy(hora,buffer+11);
	buffer = fgets(buffer, 100, fp);
	strcpy(fecha,buffer+11);

	hora[strcspn(hora, "\n")] = 0;

	printf("Hora y Fecha actual: %s - %s\n",hora,fecha);

	fclose(fp);
	return 0;
}