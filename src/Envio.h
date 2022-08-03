#ifndef ENVIO_H
#define ENVIO_H
#include "TipoEnvio.h"
#include <vector>

using namespace std;

class Envio {

    vector <TipoEnvio*> arregloDeCostos;

    public:
    
    Envio();
    void AgregarCosto(TipoEnvio *tipoEnvio);
    double ObtenerTotalDeCostos();
   
};

#endif