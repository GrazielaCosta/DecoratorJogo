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

class PersonagemComPocaoEEspada
{
    public:
    int PoderDeAtaque() {
        return 17;
    }
};

class PersonagemComPocaoEEncantamento
{
    public:
    int PoderDeAtaque() {
        return 20;
    }
};

class PersonagemComEspadaEEncantamento
{
    public:
    int PoderDeAtaque() {
        return 20;
    }
};


int main() {
    PersonagemBasico personagem1;
    PersonagemComEspada personagem2;
    PersonagemComPocao personagem3;
    PersonagemComEncantamento personagem4;
    PersonagemCompleto personagem5;
    PersonagemComPocaoEEspada personagem6;
    PersonagemComPocaoEEncantamento personagem7;
    PersonagemComEspadaEEncantamento personagem8;

    cout << "Personagem basico: " << personagem1.PoderDeAtaque() << endl;

    cout << "Personagem com pocao: " << personagem3.PoderDeAtaque() << endl;

    cout << "Personagem com espada: " << personagem2.PoderDeAtaque() << endl;

    cout << "Personagem com encantamento: " << personagem4.PoderDeAtaque() << endl;

    cout << "Personagem completo (com pocao, espada e encantamento): " << personagem5.PoderDeAtaque() << endl;

    cout << "Personagem com pocao e espada: " << personagem6.PoderDeAtaque() << endl;

    cout << "Personagem com pocao e encantamento: " << personagem7.PoderDeAtaque() << endl;

    cout << "Personagem com espada e encantamento: " << personagem8.PoderDeAtaque() << endl;
    
    return 0;
}