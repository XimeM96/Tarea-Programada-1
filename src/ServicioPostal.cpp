#include "ServicioPostal.h"

ServicioPostal::ServicioPostal(double peso, int tipoDeClase, double distancia){

    this->kilo = peso;
    this->tipoClase = tipoDeClase;
    this->km = distancia;

}

ServicioPostal::ServicioPostal(float peso, int clase){

    this->kilo = peso;
    this->tipoClase = clase;

}

double ServicioPostal::CalculoPorServicioPostal(){

double costo = 0;


    if (kilo >= 0 && kilo  <=3){

        if(tipoClase == 1){
            costo = km  * 0.300;

        }
        else if (tipoClase == 2){
            costo = km  * 0.0280;

        }
        else if (tipoClase == 3){
            costo = km  * 0.0120;

        }

    }else if (kilo >= 4 && kilo <=8){

        if(tipoClase == 1){
            costo = km  * 0.450;

        }
        else if (tipoClase == 2){
            costo = km  * 0.0530;

        }
        else if (tipoClase == 3){
            costo = km * 0.0120;

        }

    }else if (kilo >= 9){

        if(tipoClase == 1){
            costo = km  * 0.600;

        }
        else if (tipoClase == 2){
            costo = km  * 0.0750;

        }
        else if (tipoClase == 3){
            costo = km * 0.0120;

        }
    }
    
    return costo;
}

double ServicioPostal::CalculoEnvio() {

    return CalculoPorServicioPostal();

};

