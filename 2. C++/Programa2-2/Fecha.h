#ifndef FECHA_H_
#define FECHA_H_

class Fecha
{
private:
    int dia, mes, anio;

public:
    Fecha(int = 3, int = 4, int = 2014);
    void inicializaFecha(int, int, int);
    void muestraFecha();
};
#endif