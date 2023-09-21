# Apunte de C++

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

## #Define
 #define forr(n, i) for(int i=0; i **<** n; i++) </br>
forr( 4, i ) { }
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