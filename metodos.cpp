#include <iostream>
#include <string>

using namespace std;
    
    class Carro {
        public:
            string tipo;
            string cor;
            string placa;
            int numPortas;

            void acelerar(float _velocidade) {
                cout << "Acelerando para " << _velocidade
                << "Km/h" << endl;
            }

            void frear() {
                cout << "Freando" << endl;
            }
    };

int main() {
     Carro civic;

    civic.tipo = "Sedan";
    cout << civic.tipo << endl;

    civic.acelerar(30);
    civic.frear();

    return 0;

}

