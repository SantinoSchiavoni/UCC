/*
Crear una clase llamada Password que siga las siguientes condiciones: 
 Los  atributos son  longitud y contraseña.  Por  defecto,  la  longitud  será  de  8 
caracteres 
Generar los siguientes constructores: 
 Un constructor por defecto. 
 Un constructor con la longitud pasada como parámetro.  
Generar los siguientes métodos: 
 generarPassword():   genera  la  contraseña  del  objeto  con  la  longitud  que 
corresponda. 
 esFuerte(): devuelve si es fuerte o no. Para que sea fuerte debe tener más de 
2 mayúsculas, más de 1 minúscula y más de 5 números. 
 Método para visualización de la contraseña y la longitud. 
 Método para cargar la longitud. 
Realizar un programa principal que haga uso de la clase.
*/

class Password{
    private:
        int longitud;
        char contrasena[];
    public:
        Password();
        Password(int longitud);
        void setLongitud(int longitud);
        int getLongitud();

        void generarPassword();
        bool esFuerte();
        void mostrarContrasena();
        void mostrarLongitud();
        void cargarLongitud();
};