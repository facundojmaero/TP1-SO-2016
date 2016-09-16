# TP1-SO-2016 

### Laboratorio 1 - Observando el Comportamiento de Linux - 2016 
![Icono](https://t3.ftcdn.net/jpg/00/96/00/98/160_F_96009890_zdJu97gT4d6zoltOWyQXdbbzdkSi9Glz.jpg)
___
|Autores                               |
|------------------------------------|
|Gonzalez Somerstein Gustavo -7721064  |
|Maero Facundo - 38479441              |

## 1. Descripción del programa
---
El programa KSamp permite inspeccionar información interna del Kernel de Linux, particularmente en el directorio /proc. 

El software actualmente muestra:

 - El nombre del equipo donde se ejecuta, y la fecha y hora actual como mensaje de bienvenida.
 - El tipo y modelo de CPU, y su velocidad de clock en MHz
 - La versión del Kernel de Linux del sistema
 - El tiempo que ha estado encendido el equipo (D hh:mm:ss)
 - La cantidad de sistemas de archivos diferentes que soporta el Kernel

Además, acepta parámetros para visualizar información adicional:

 - Cantidad de tiempo de CPU utilizado para usuarios, sistema y proceso idle.
 - Cantidad de cambios de contexto.
 - Fecha y hora cuando el sistema fue iniciado
 - Número de procesos creados desde el inicio del sistema

## 2. Instrucciones de instalación
---
- Para instalar el programa, descargue el repositorio en su computadora.
- Luego, mediante la terminal, ejecute los siguientes comandos para descomprimir el archivo .zip y situarse en la carpeta donde se halla el Makefile:
```
% cd Downloads
% unzip TP1-SO-2016-master.zip
% cd TP1-SO-2016-master/ksamp/work/code
```
- Para comenzar el proceso de compilación y linkeo de los archivos, ejecute el comando:
```
% make
```
 
 - Una vez terminado, para visualizar en consola la información, ejecute el comando: 


```
% ./ksamp
```
- Además, puede ejecutar uno de los siguientes comandos para visualizar información adicional:
```
% ./ksamp -s
% ./ksamp -stats
```
