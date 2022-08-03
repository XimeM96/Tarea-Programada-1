FLAGS = -g -c --std=c++17

all:
	mkdir -p bin
	g++ $(FLAGS) src/Envio.cpp -o bin/Envio.o
	g++ $(FLAGS) src/FedEX.cpp -o bin/FedEX.o
	g++ $(FLAGS) src/ServicioPostal.cpp -o bin/ServicioPostal.o
	g++ $(FLAGS) src/main.cpp -o bin/main.o
	g++ -g -o bin/tarea1 bin/Envio.o bin/FedEX.o bin/ServicioPostal.o bin/main.o 


test:

	mkdir -p bin
	g++ $(FLAGS) tests/tests_tiposDeEnvio.cpp -o bin/tests_tiposDeEnvio.o
	g++ $(FLAGS) src/FedEX.cpp -o bin/FedEX.o
	g++ $(FLAGS) src/ServicioPostal.cpp -o bin/ServicioPostal.o
	g++ -g -o bin/tests bin/tests_tiposDeEnvio.o bin/FedEX.o bin/ServicioPostal.o -lgtest -lgtest_main -lpthread 

	
clean:
	rm -Rf bin