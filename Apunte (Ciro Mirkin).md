# Apunte de C++

**Variable gloabal:** int global_var=0;

 #define forr(n, i) for(int i=0; i **<** n; i++) 

## Vectores

**Libreria:** #include< vector >

**Uso:**

vector < int > nums( 2, 0 ); </br>
nums[ 0 ] = 1;

**Optener longitud:** nums.size( );

**Recorrer un vector:** for(int i=0; i < int( nums.size( ) ); i++) cout<<nums[ i ];

**Redimencionar:** nums.resize( 2 );

**Añadir un último elemento:** nums.push_back( 80 );

**Eliminar el ultimo elemento:** nums.pop_back( );

**Vector pasado por referencia:** void ordenar(int n, vector< int >& arr) { }

**Matris:** vector< vector< int > > muestras( n );

**Matris como parametro de función:** int analizar( vector< vector< int > >& muestras ) { }

**Como retorno de función:**
 
vector< int > librero( ) { } </br>
vector< int > lib = librero(alturabases, alturalibros, orden);

## Arreglos

int cantidadmayores( int edades[ ], int cantidadEdades );

## Arreglo dinamico

**Libreria:** #include< stdlib.h >

int largo, *nums; </br>
nums = new int[largo]; </br>
for(int i=0; i < largo; i++) cin>>nums[ i ]; </br>
delete[ ] nums; </br>

## String

**Libreria:** #include< string >

**Uso:**

string nombre; </br>
cin>>nombre; </br>
cout<<nombre; </br>	

**Copiar contenido:** a = b;

**Obtener longitud¨:** nombre.size();

**Saber si dos cadenas son iguales:** if(nombre.compare(nombre2 == 0) { }

**Concatenacion:** nombre.append(letra); || nombre += letra;

**Invertir:** for(int i = int( nombre.size() ) - 1 ; i >= 0; i--) nombre2.append( nombre[ i ] );

**Caracter a mayuscula:** nombre[ i ] = toupper( nombre[ i ] );

**Caracter a minuscula:** nombre[ i ] = tolower( nombre[ i ] );

**Sub string:** str.substr( init, endeFromInit ); 

string nombre = "mateo"; </br>
string nombre2 = nombre.substr( 2, 2 ); // "te";

## Char
char nombreDeMiGato [] = "Kim"; </br>
char nombreDePersona[20]; </br>
cin.getline(nombreDePersona, 20, '\n');

**Obtener longitud:** strlen(texto);

**Convertir a entero:** atoi(caracteres) Libreria: #include<stdlib.h>

**Convertir a flotante:** atof(caracteres) Libreria: #include<stdlib.h>

**Pasar a mayusculas:** strlwr(palabra)

**Copiar contenido de a hacia b:** strcpy( b, a )

**Saber si dos cadenas son iguales:** if(strcmp( a, b ) == 0) { }

**Invertir:** strrev(cad);

## Estructuras 

struct infoUsuario { </br>
	char nombre[16]; </br>
	int edad; </br>
} </br>
usuario1 = { </br>
	"Ciro", </br>
	17 </br>
}, </br>
usuario2;

cin>>usuario2.edad; </br>
cout<<"Edad: "<<usuario2.edad;

**Arreglo:** 

struct estructuraHijo { </br>
	int numero; </br>
}; </br>

struct estructuraPadre { </br>
	char nombre[10]; </br>
	struct estructuraHijo hijo; </br>
} arregloDeEstructuras[2];

for(int i=0; i<2; i++) { </br>
	cout<<"Ingrese su nombre: "; </br>
	cin.getline(arregloDeEstructuras[i].nombre, '\n');</br></br>
	cout<<"Ingrese un numero: "; </br>
	cin>>arregloDeEstructuras[i].hijo.numero; </br></br> 	cout<<endl; </br>fflush(stdin); // Esta linea vacia el buffer </br>
}

## Funciones matematicas

**n1 elevado a n2:** pow ( n1, n2 );

**Raiz cuadrada:** sqrt ( n );

## stdlib.h

**Obtener el mayor de dos numeros:** max ( n1, n2 );

**Obtener el menor:** min ( n1, n2 );

**Obtener valor absoluto de un numero (numero positivo):** abs ( n );

**Obtener numero aleatorio:** rand ( );

## ctype.h

**Funciones booleanas** (true o false)

char c[ ] = "a";

isalnum( c ); // (A-Z) (a-z) (0-9)

isalpha( c ); // (A-Z)(a-z)

isdigit( c ); // (0-9)

islower( c ); // (a-z)

isupper( c ); // (A-Z)

isspace( c ); // espacios, tabulaciones, retornos de linea, cambio de linea, etc.