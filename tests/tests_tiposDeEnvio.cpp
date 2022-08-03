#include <gtest/gtest.h>
#include "../src/Envio.h"
#include "../src/FedEX.h"
#include "../src/ServicioPostal.h"
#include "../src/TipoEnvio.h"

namespace{

    TEST(Test_ServicioPostal, Test_KGEntre0y3YPrimeraClase){

        ServicioPostal *servicioPostal = new ServicioPostal(2, 1, 15);

        double actual = servicioPostal->CalculoEnvio();
        double esperada = 4.5;

        EXPECT_DOUBLE_EQ(esperada, actual);

        delete servicioPostal;
    }

        TEST(Test_ServicioPostal, Test_KGEntre4y8YPrimeraClase){

        ServicioPostal *servicioPostal = new ServicioPostal(7, 1, 15);

        double actual = servicioPostal->CalculoEnvio();
        double esperada = 6.75;

        EXPECT_DOUBLE_EQ(esperada, actual);

        delete servicioPostal;
    }

        TEST(Test_ServicioPostal, Test_KG9oMasYPrimeraClase){

        ServicioPostal *servicioPostal = new ServicioPostal(20, 1, 15);

        double actual = servicioPostal->CalculoEnvio();
        double esperada = 9;

        EXPECT_DOUBLE_EQ(esperada, actual);

        delete servicioPostal;
    }

        TEST(Test_ServicioPostal, Test_KEntre0y3YSegundaClase){

        ServicioPostal *servicioPostal = new ServicioPostal(2, 2, 15);

        double actual = servicioPostal->CalculoEnvio();
        double esperada = 0.42;

        EXPECT_DOUBLE_EQ(esperada, actual);

        delete servicioPostal;
    }

        TEST(Test_ServicioPostal, Test_KGEntre4y8YSegundaClase){

        ServicioPostal *servicioPostal = new ServicioPostal(7, 2, 15);

        double actual = servicioPostal->CalculoEnvio();
        double esperada = 0.795;

        EXPECT_DOUBLE_EQ(esperada, actual);

        delete servicioPostal;
    }   

        TEST(Test_ServicioPostal, Test_KG9oMasYSegundaClase){

        ServicioPostal *servicioPostal = new ServicioPostal(20, 2, 15);

        double actual = servicioPostal->CalculoEnvio();
        double esperada = 1.125;

        EXPECT_DOUBLE_EQ(esperada, actual);

        delete servicioPostal;
    }   

        TEST(Test_ServicioPostal, Test_TerceraClase){

        ServicioPostal *servicioPostal = new ServicioPostal(2, 3, 15);

        double actual = servicioPostal->CalculoEnvio();
        double esperada = 0.18;

        EXPECT_DOUBLE_EQ(esperada, actual);

        delete servicioPostal;
    }
 
    TEST(Test_FedEX, Test_DistanciaMayorDe500){

        FedEX *fedex = new FedEX(750.00, 5.5);

        double actual = fedex->CalculoEnvio();
        double esperada = 50.00;

         EXPECT_DOUBLE_EQ(esperada, actual);

         delete fedex;
    }

        TEST(Test_FedEX, Test_PesoMayorDe10){

        FedEX *fedex = new FedEX(400.89, 35.00);

        double actual = fedex->CalculoEnvio();
        double esperada = 45.00;

         EXPECT_DOUBLE_EQ(esperada, actual);
         
         delete fedex;
    }


    TEST(Test_FedEX, Test_DistanciaMayorDe500YPesoMayorDe10){

        FedEX *fedex = new FedEX(750.00, 30.50);

        double actual = fedex->CalculoEnvio();
        double esperada = 60.00;


        EXPECT_DOUBLE_EQ(esperada, actual);

        delete fedex;
    }

        TEST(Test_CostoTotalDeEnvios, Test_ObtenerCostoTotal){

        FedEX *fedex = new FedEX(750.00, 30.50);
        ServicioPostal *servicioPostal = new ServicioPostal(9, 1, 15.7);

        double actualFedex = fedex->CalculoEnvio();
        double actualPostal = servicioPostal->CalculoEnvio();
        double total = actualFedex + actualPostal;
        double esperada = 69.42;


        EXPECT_DOUBLE_EQ(esperada, total);

        delete servicioPostal;
        delete fedex;
    }



}