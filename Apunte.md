# Apunte

**Aviso**: Este archivo contiene faltas de ortografia debido a que fue escrito rapido, eso si el código esta libre de errores.
</br></br></br></br>

## Convercion explicita de tipos

Convertir flotante a entero

```cpp
float nr = 1.3;
int n = int(nr);
```

## Sentencias de control

Las sentencias de control nos permiten controlar el flujo de control dentro de ciclos.

### Continue

Todo lo que este despues de la sentencia *continue* se va a omitir, se saltara directamente a la condicion del while(i<10)

```cpp	
while(i<10) {
	i++;
	cout<<"> ";
	if(i>=5) continue; 
	cout<<"Todabia estamos antes del 5"<<endl;
}
```

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

## Estructuras (Estructura de datos)

Se definen Globalmente arriba de la funcion principal *main*

Se pueden crear vacias como en este ejemplo:

```cpp
struct infoUsuario {
	char nombre[16];
	int edad;
} usuario2;
```

O Con un contenido por defecto

```cpp
struct infoUsuario {
	char nombre[16];
	int edad;
} usuario1 = {
	"Ciro",
	17
}; 
```

### Vector de estructuras

Importamos la libreria para los vectores

```cpp
#include<vector>
```

Definimos como sera la estructura

```cpp
struct Alumno {
	string nombre, apellido;
	char divicion;
	int edad;
};
```

Creamos el arreglo dentro de la funcion principal *main*

```cpp
vector<Alumno> alumnos(2);
```

Y para rellenarlo o mostrarlo seria asi (en este caso lo rellenamos)

```cpp
for(int i=0; i<int(n); i++) {
	cout<<"Nombre: ";
	cin>>alumnos[i].nombre;
	cout<<"Apellido: ";
	cin>>alumnos[i].apellido;
	cout<<"Divicion: ";
	cin>>alumnos[i].divicion;
	cout<<"edad: ";
	cin>>alumnos[i].edad;
	cout<<endl;
}
```

### Estructuras anidadas

Crear una arreglo no es necesario, si no lo necesitas quita los corchetes [2] y cambia el nombre a la estructura creada (arregloDeEstructuras).

```cpp
struct estructuraHijo {
	int numero;
};

struct estructuraPadre {
	char nombre[10];
	struct estructuraHijo hijo;
} arregloDeEstructuras[2];
```

## Vectores

Es un tipo parametrico, su valor determina su tipo. </br>
Suelen ser de tipo entero.

Libreria:

```cpp
	#include<vector>
```

Creacion y uso

```cpp
	vector<int> nums(4);

	nums[0] = 1;
	nums[1] = 2;
	nums[2] = 3;
	nums[3] = 3;

	cout<<nums[0]<<endl;
```

### Optener longitud de un vector

```cpp
nums.size();
```

### Recorrer un vector

Es recomentable convertir la longitud del vector a un entero para evitar errores, pero no es absolutamente necesario.

```cpp
vector<int> nums(4);
for(int i=0; i<int(nums.size()); i++) {
	int n = nums[i];
}
```

### Redimencionar un vector

Si lo achicamos los elementos previos se perdenar.

```cpp
nums.resize(2);
```

### Añadir y quitar ultimos elementos del vector

Añadir un elemento a lo ultimo:

```cpp
nums.push_back(80);
```

Eliminar el ultimo elemento:

```cpp
nums.pop_back();
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

### Puntero como parametro de una funcion

Puntero como argumento:

```cpp
void cambiarValor(int *n, int nn) {
	*n = nn;
}

int main() {
	
	int n = 1;
	int *np;
	np = &n;
	
	cout<<n<<endl;
	cambiarValor(np, 7);
	cout<<n<<endl;
	
	return 0;
}
```

Tambien podemos pasar directamente la direccion:

```cpp
cambiarValor(&n, 5);
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

## Funciones

El Prototipo de una funcion se situa **antes** de la funcion principal *main*.

```cpp
int sumarDosNumeros(int a, int b);
```

Luego llamarla en la funcion *main* y almacenar en una variable lo que retorna

```cpp
int main() {
	int suma = sumarDosNumeros(2, 2);
	cout<<suma;

	return 0;
}
```

Por ultimo definimos la funcion debajo de la funcion principal *main*

```cpp
int sumarDosNumeros(int a, int b) {
	int suma = a + b;
	return suma;
}
```

### Paso por referencia a una funcion

```cpp
void mostrarNumero(int&);

int main() {
	int numero = 2023;
	mostrarNumero(numero);	
	return 0;
}

void mostrarNumero(int& numero) {
	cout<<numero;
}
```

### Arreglos como parametro de una funcion

```cpp
void mostrarArreglo(int arr[], int arrLong);

int main() {
	
	int nums[] = {1,2,3,4};
	mostrarArreglo(nums, 4);
	
	return 0;
}

void mostrarArreglo(int arr[], int arrLong) {
	for(int i=0; i<arrLong; i++) cout<<arr[i]<<" - ";
}
```

Para un Arreglo bidimencional es necesario definir el largo del segundo arreglo (X)

```cpp
#define arrX 3 

void mostrarArreglo(int arr[][arrX], int arrLong);

int main() {
	int arrY = 2;
	int nums[arrY][arrX] = {{1,2,3}, {5,6,7}};
	mostrarArreglo(nums, arrY);
	
	return 0;
}

void mostrarArreglo(int arr[][arrX], int arrY) {
	for(int i=0; i<arrY; i++) {
		for(int j=0; j<arrX; j++) cout<<arr[i][j];
		cout<<endl;
	};
}
```

## Funciones matematicas

n1 elevado a n2

```cpp
pow(n1, n2);
```

raiz cuadrada

```cpp
sqrt(n);
```

## stdlib.h

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

## ctype.h


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