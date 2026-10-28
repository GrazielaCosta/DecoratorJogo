#include <iostream>
using namespace std;

class PersonagemBasico {
    public:
    int PoderDeAtaque() {
        return 10;
    }
};


class PersonagemComPocao {
    public:
    int PoderDeAtaque() {
        return 12;
    }
};


class PersonagemComEspada {
    public:
    int PoderDeAtaque() {
        return 15;
    }
};


class PersonagemComEncatamento {
    public:
    int PoderDeAtaque() {
        return 18;
    }
};

int main() {
    PersonagemBasico personagem1;
    PersonagemComEspada personagem2;
    PersonagemComPocao personagem3;
    PersonagemComEncatamento personagem4;


    cout << "Personagem basico: " << personagem1.PoderDeAtaque() << endl;


    cout << "Personagem com pocao: " << personagem3.PoderDeAtaque() << endl;


    cout << "Personagem com espada: " << personagem2.PoderDeAtaque() << endl;

    
    cout << "Personagem com encatamento: " << personagem4.PoderDeAtaque() << endl;
}