#ifndef FEDEX_H
#define FEDEX_H
#include "TipoEnvio.h"

using namespace std;

class FedEX : public TipoEnvio{

    private:

    double costoBase = 35.00;
    double km = 0;
    double kg = 0;

    public:

    FedEX(double distancia,double peso);
    double CalculoEnvio(); 
    double calculoPorFedEX();
};


#endif