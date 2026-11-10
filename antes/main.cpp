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


class PersonagemComEncantamento {
    public:
    int PoderDeAtaque() {
        return 18;
    }
};

class PersonagemCompleto {
    public:
    int PoderDeAtaque() {
        return 25;
    }
};

int main() {
    PersonagemBasico personagem1;
    PersonagemComEspada personagem2;
    PersonagemComPocao personagem3;
    PersonagemComEncantamento personagem4;
    PersonagemCompleto personagem5;


    cout << "Personagem basico: " << personagem1.PoderDeAtaque() << endl;


    cout << "Personagem com pocao: " << personagem3.PoderDeAtaque() << endl;


    cout << "Personagem com espada: " << personagem2.PoderDeAtaque() << endl;

    
    cout << "Personagem com encantamento: " << personagem4.PoderDeAtaque() << endl;

    
    cout << "Personagem completo (com pocao, espada e encantamento): " << personagem5.PoderDeAtaque() << endl;

    return 0;
}