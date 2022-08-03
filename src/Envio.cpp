#include "Envio.h"

Envio::Envio(){


}

void Envio::AgregarCosto(TipoEnvio *tipoEnvio){
    
    this->arregloDeCostos.push_back(tipoEnvio);

}

double Envio::ObtenerTotalDeCostos(){

    double resultado = 0.0;

    for(TipoEnvio *tipoEnvio : this->arregloDeCostos){

    resultado += tipoEnvio->CalculoEnvio();

    }
    return resultado;
}
