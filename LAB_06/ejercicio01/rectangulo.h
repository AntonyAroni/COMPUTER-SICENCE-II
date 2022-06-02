#ifndef RECTANGULO.H
#define RECTANGULO.H
class Rectangulo{
    private:
        float ancho, largo;
    public:
        Rectangulo(float,float);
        ~Rectangulo() {};
        void area();
        void peri();
};

#endif