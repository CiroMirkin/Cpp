# Apunte C++

**Aviso**: Hay faltar de ortografia, este documento fue escrito rapido, aún así el código no tiene error ya que el mismo fue provado.
</br></br></br>

## Tipo de dato Char

Crear y guardar
```
char nombreDeMiGato [] = "Kim";

cout<<nombreDeMiGato;
```

Ingresar contenido (palabra)

```
char nombreDePersona[10];
cout<<"Escriba su nombre: ";
cin>>nombreDePersona;
```
	
Ingresar contenido (frace)

```
char nombreDePersona[20];
cout<<"Escriba su nombre: ";
cin.getline(nombreDePersona, 20, '\n');
	
cout<<nombreDePersona;
```

### Obtener Longitud 

Usamos la función *strlen* que cuenta los caracteres,  las mayusculas valen 2.

Importar esta libreria:

```
	#include<string.h>
```

Uso:

```	
char texto[] = "yo yo mr.White!";
int longitudDelTexto = strlen(texto);
```

### Convertir a entero

Libreria

```
	#include<stdlib.h>
```

Funcion

```
char caracteres[] = "12";
int numero = atoi(caracteres);
```

### Convertir a flotante

Libreria

```
	#include<stdlib.h>
```

Funcion

```
char caracteres[] = "12";
float numero = atof(caracteres);
```

### Convertir a minusculas

```
char palabra[] = "PATO";
strlwr(palabra);
```

### Copiar el contenido de una variable a otra

Como argumento de la funcion va primero la cadena vacia y luego la que tiene el contenido que queremos copiar.

```
char palabra1[] = "Duck";
char palabra2[10];
	
strcpy(palabra2, palabra1);
```

### Invertir loa caracteres de una cadena

```
char cad[] = "che";
strrev(cad);  // ehc
```

### Comparar dos cadenas

Si **hi** fuese **Ey** con la primera en mayuscula tambien diria *"na que ve"*.

```
char a[] = "hi";
char b[] = "ey";

if(strcmp(a, b) == 0) {
	cout<<"Iguales";
} else {
	cout<<"na que ve";
}
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

```
cout<<*direccionDelNumero;
```

Mostrar contenido de la direccion:

```
cout<<direccionDelNumero;
```

### Arreglos

Creacion

```
int num[] = { 1, 2, 3 };
int *dirNum; 
dirNum = num;
```
Ver contenido

```	
for(int i=0; i<3; i++) {
	cout<<"numero: "<<*dirNum++;
	cout<<endl;
}
```
Ver direccion

```
for(int i=0; i<3; i++) {
	cout<<endl;	
	cout<<"Direccion del numero: "<<dirNum++;
}
	
```

### Arreglos dinamicos

new -> Reserva el numero de bytes solicitado por una declaracion
delete -> Libera los bytes reservados

```
int largoArray, *arregloDinamico;
	
cout<<"ingrese el largo del arreglo: ";
cin>>largoArray;
	
// Reservamos 
arregloDinamico = new int[largoArray];
```

Liberamos la memoria reservada al terminar de usar el arreglo.

```
delete[] arregloDinamico;
```

### Funciones matematicas

n1 elevado a n2

```
pow(n1, n2);
```

raiz cuadrada

```
sqrt(n);
```

### stdlib.h

**Importar libreria** </br>

Obtener el mayor de dos numeros

```
max(n1, n2);
```

Obtener el menor

```
min(n1, n2);
```

Obtener valor absoluto de un numero (numero positivo)

```
abs(n);
```

Obtener numero aleatorio

```
rand();
```

### ctype.h

**Importar libreria** </br>
Funciones booleanas (true o false)

```
char c[] = "a";

isalnum(c); // (A-Z)(a-z)(0-9)

isalpha(c); // (A-Z)(a-z)

isdigit(c); // (0-9)

islower(c); // (a-z)

isupper(c); // (A-Z)

isspace(c); // espacios, tabulaciones, retornos de linea, cambio de linea, etc.

```