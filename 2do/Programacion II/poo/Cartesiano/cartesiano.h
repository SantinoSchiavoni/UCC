class Punto{
    private:
        float x;
        float y;
    public:
        Punto();
        Punto(float x, float y);

        void setX(float x);
        void setY(float y);
        float getX();
        float getY();

        void mostrar();
};

class Linea{
    private:
        Punto p1;
        Punto p2;
    public:
        Linea();
        Linea(float x1, float y1, float x2, float y2);
        void mostrarLinea();
        
};