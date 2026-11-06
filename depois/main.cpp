#include <iostream>
using namespace std;

class Personagem {
    public:
        virtual int PoderDeAtaque() const = 0;
        virtual ~Personagem() = default;
};

class PersonagemBasico : public Personagem {
    public:
        int PoderDeAtaque() const override {
            return 10;
        }
};

class PersonagemDecorator : public Personagem {
    protected:
        Personagem& personagem;

public:
    PersonagemDecorator(Personagem& personagem) : personagem(personagem) {}
    
    int PoderDeAtaque() const override {
        return personagem.PoderDeAtaque();
    }
};


class PocaoDecorator : public PersonagemDecorator {
    public:
        PocaoDecorator(Personagem& personagem) : PersonagemDecorator(personagem) {}
        
        int PoderDeAtaque() const override {
            return personagem.PoderDeAtaque() + 2;
        }
};

class EspadaDecorator : public PersonagemDecorator {
    public:
        EspadaDecorator(Personagem& personagem) : PersonagemDecorator(personagem) {}

        int PoderDeAtaque() const override {
            return personagem.PoderDeAtaque() + 5;
        }
};


class EncantamentoDecorator : public PersonagemDecorator {
    public:
        EncantamentoDecorator(Personagem& personagem) : PersonagemDecorator(personagem) {}

        int PoderDeAtaque() const override {
            return personagem.PoderDeAtaque() + 8;
        }
};

int main() {
    PersonagemBasico basico;
    cout << "Personagem basico: " << basico.PoderDeAtaque() << endl;

    PocaoDecorator pocao(basico);
    cout << "Personagem com pocao: " << pocao.PoderDeAtaque() << endl;

    EspadaDecorator espada(basico);
    cout << "Personagem com espada: " << espada.PoderDeAtaque() << endl;

    EncantamentoDecorator encantamento(basico);
    cout << "Personagem com encantamento: " << encantamento.PoderDeAtaque() << endl;
    
    
    PocaoDecorator personagemComPocao(basico);
    EspadaDecorator personagemComPocaoEEspada(personagemComPocao);
    EncantamentoDecorator personagemComEspadaEEncantamento(espada); 
    EncantamentoDecorator personagemCompleto(personagemComPocaoEEspada);

    cout << "Personagem com espada e encantamento: " << personagemComEspadaEEncantamento.PoderDeAtaque() << endl;

    cout << "Personagem com pocao, espada e encantamento: " << personagemCompleto.PoderDeAtaque() << endl;
    
    return 0;
}