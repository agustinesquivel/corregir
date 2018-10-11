

typedef struct{
int IdPropietario;
char nombre[tam];
char apellido[tam];
char dirección[tam];
int numeroTarjeta[tarjeta];
int isEmpty;
}eDatos[cantidad];
static int generarCodigoPropietario();
int inicializarPropietario(eDatos* list, int cantidad);
int altaPropietario(eDatos[i], int cantidad);
int buscarPropietarioPorCodigo(eDatos list[], int cantidad, int codigoPropietario);
int modificarCliente(eCliente list[], int len);
int mostrarDatos(eDatos list[], int cantidad);
int menuPropietarios();
