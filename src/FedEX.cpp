#include "FedEX.h"

FedEX::FedEX(double distancia, double peso){
    this->km = distancia;
    this->kg = peso;
}

double FedEX::calculoPorFedEX(){

    if(km > 500){
        costoBase = costoBase + 15.00;
    }
    if(kg > 10){

        costoBase += 10.00;
    }

    return costoBase;
}

double FedEX::CalculoEnvio(){

    return calculoPorFedEX();

};