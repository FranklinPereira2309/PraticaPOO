#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;


class Ponto {
    double x,y;   
        
    
    public:
        double getX() {
            return x;
        }

        double getY() {
            return y;
        }

        bool operator==(Ponto _p) {
            return(x == _p.getX() && y == _p.getY());
        }

        Ponto operator+(Ponto _p) {
            Ponto p(x + _p.getX(), y + _p.getY());
            return p;
        }

        bool operator=(Ponto _p) {
            x = _p.getX();
            y = _p.getY();
        }
    
};

int main() {
    
    Ponto p1(2,3);
    Ponto p2(3,4);

    if(p1 == p2) {
        cout << " Igual" << endl;
    }else {
        cout << "Diferente" << endl;
    }
    
    return 0;
}