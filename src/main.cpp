#include <iostream>
#include "ServicioPostal.h"
#include "FedEX.h"
#include "Envio.h"

using namespace std;

int main (){


    ServicioPostal *servicioPostal  = new ServicioPostal(9, 1, 15.7);
    FedEX *fedex = new FedEX(750.00, 30.50);
    Envio *envio = new Envio();

    envio->AgregarCosto(servicioPostal);
    envio->AgregarCosto(fedex);

    double total = envio->ObtenerTotalDeCostos();


    cout << "\nEl monto total de los envíos es de: "<< total << "\n" << endl;

    delete servicioPostal;
    delete fedex;
    delete envio;
    

    return 0;
}
    
