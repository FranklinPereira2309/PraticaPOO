#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

class Celular {
    private: 
        string nome;
        string modelo;
        string marca;
        string cor;
        string mensagem;
        int numero;
        string armazenamento;
        string processador;
        string memoria;
        long int imei;
    
    public:
    string getNome(){
        return nome;
    }

    void setNome(string _nome){
        nome = _nome;
    }
    int getLigar() {
        return numero;
    }
    void setLigar(int _numero) {
        numero=_numero;
    }

    string getDesligar() {
        return mensagem;
    }
    void setDesligar(string _mensagem) {
        mensagem = _mensagem;
    }
    
    string getModelo() {
        return modelo;
    }
    void setModelo(string _modelo) {
            modelo =_modelo;           
    }

    string getMarca() {
        return marca;
    }

    void setMarca(string _marca) {
        marca = _marca;
    }

    void exibirConfiguracao(string _nome, string _armazenamento, string _processador, string _memoria) {
        //system("clear");
        cout << "O seu celular possui as seguintes configurações: " << endl 
        << "---------------------------------------------\n"
        << "* Nome do celular: " << _nome << endl
        << "* Armazenamento: " << _armazenamento << " GB" << endl 
        << "* Processador: " << _processador << " Mhz" << endl
        << "* Memoria: " << _memoria << " GB" << endl;  
    }
    
};

int main() {
    Celular celular, iphone;
    system("clear");
    celular.exibirConfiguracao("Iphone 14 PRO max", "128","2.5","8");
    iphone.exibirConfiguracao("Nokia 3650", "256", "intel core 3.0", "16");
    return 0;
}