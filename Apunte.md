# Apunte

**Aviso**: Este archivo contiene faltas de ortografia debido a que fue escrito rapido, eso si el código esta libre de errores.
</br></br></br></br>

## Tipo de dato Char

Crear y guardar
```cpp
char nombreDeMiGato [] = "Kim";

cout<<nombreDeMiGato;
```

Ingresar contenido (palabra)

```cpp
char nombreDePersona[10];
cout<<"Escriba su nombre: ";
cin>>nombreDePersona;
```
	
Ingresar contenido (frace)

```cpp
char nombreDePersona[20];
cout<<"Escriba su nombre: ";
cin.getline(nombreDePersona, 20, '\n');
	
cout<<nombreDePersona;
```

### Obtener Longitud 

Usamos la función *strlen* que cuenta los caracteres,  las mayusculas valen 2.

Importar esta libreria:

```cpp
	#include<string.h>
```

Uso:
```cpp
	
char texto[] = "yo yo mr.White!";
int longitudDelTexto = strlen(texto);
```

### Convertir a entero

Libreria

```cpp
	#include<stdlib.h>
```

Funcion

```cpp
char caracteres[] = "12";
int numero = atoi(caracteres);
```

### Convertir a flotante

Libreria

```cpp
	#include<stdlib.h>
```

Funcion

```cpp
char caracteres[] = "12";
float numero = atof(caracteres);
```

### Convertir a minusculas

```cpp
char palabra[] = "PATO";
strlwr(palabra);
```

### Copiar el contenido de una variable a otra

Como argumento de la funcion va primero la cadena vacia y luego la que tiene el contenido que queremos copiar.

```cpp
char palabra1[] = "Duck";
char palabra2[10];
	
strcpy(palabra2, palabra1);
```

### Invertir loa caracteres de una cadena

```cpp
char cad[] = "che";
strrev(cad);  // ehc
```

### Comparar dos cadenas

Si **hi** fuese **Ey** con la primera en mayuscula tambien diria *"na que ve"*.

```cpp
char a[] = "hi";
char b[] = "ey";

if(strcmp(a, b) == 0) {
	cout<<"Iguales";
} else {
	cout<<"na que ve";
}
```

## Vectores
Es un tipo parametrico, su valor determina su tipo.

```cpp
	#include<vector
```

```cpp
vector<string> ejemplo1 = {"a","b"};
vector<int> ejemplo2 = {1,2];
```

Podemos copiar dos vectores del mismo tipo.

el contenido de ejemplo2 se copia al vector ejemplo1:

```cpp
ejemplo1 = ejemplo2
```

## Punteros

Creacion:

```cpp
int numero;
int *direccionDelNumero;
	
numero = 18;
direccionDelNumero = &numero;
```
	
	
Mostrar direccion:

```cpp
cout<<*direccionDelNumero;
```

Mostrar contenido de la direccion:

```cpp
cout<<direccionDelNumero;
```

### Arreglos

Creacion

```cpp
int num[] = { 1, 2, 3 };
int *dirNum; 
dirNum = num;
```
Ver contenido

```cpp	
for(int i=0; i<3; i++) {
	cout<<"numero: "<<*dirNum++;
	cout<<endl;
}
```
Ver direccion

```cpp
for(int i=0; i<3; i++) {
	cout<<endl;	
	cout<<"Direccion del numero: "<<dirNum++;
}	
```

### Arreglos dinamicos

new -> Reserva el numero de bytes solicitado por una declaracion
delete -> Libera los bytes reservados

```cpp
int largoArray, *arregloDinamico;
	
cout<<"ingrese el largo del arreglo: ";
cin>>largoArray;
	
// Reservamos 
arregloDinamico = new int[largoArray];
```

Liberamos la memoria reservada al terminar de usar el arreglo.

```cpp
delete[] arregloDinamico;
```

### Funciones matematicas

n1 elevado a n2

```cpp
pow(n1, n2);
```

raiz cuadrada

```cpp
sqrt(n);
```

### stdlib.h

Obtener el mayor de dos numeros

```cpp
max(n1, n2);
```

Obtener el menor

```cpp
min(n1, n2);
```

Obtener valor absoluto de un numero (numero positivo)

```cpp
abs(n);
```

Obtener numero aleatorio

```cpp
rand();
```

### ctype.h


Funciones booleanas (true o false)

```cpp
char c[] = "a";

isalnum(c); // (A-Z)(a-z)(0-9)

isalpha(c); // (A-Z)(a-z)

isdigit(c); // (0-9)

islower(c); // (a-z)

isupper(c); // (A-Z)

isspace(c); // espacios, tabulaciones, retornos de linea, cambio de linea, etc.

```