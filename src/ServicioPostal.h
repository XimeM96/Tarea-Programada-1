#ifndef SERVICIOPOSTAL_H
#define SERVICIOPOSTAL_H
#include "TipoEnvio.h"

using namespace std;

class ServicioPostal : public TipoEnvio{

    private:

    double kilo = 0.0;
    int tipoClase = 0;
    double km = 0.0;

    public:

    ServicioPostal(double kg, int clase, double kilometros);
    ServicioPostal(float kg, int clase);
    double CalculoPorServicioPostal();
    double CalculoEnvio(); 


};

#endif