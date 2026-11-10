#ifndef DECORATORS_H
#define DECORATORS_H

#include "personagem.h"

class PersonagemDecorator : public Personagem {
protected:
    Personagem& personagem;

public:
    PersonagemDecorator(Personagem& personagem);
    int PoderDeAtaque() const override;
};

class PocaoDecorator : public PersonagemDecorator {
public:
    PocaoDecorator(Personagem& personagem);
    int PoderDeAtaque() const override;
};

class EspadaDecorator : public PersonagemDecorator {
public:
    EspadaDecorator(Personagem& personagem);
    int PoderDeAtaque() const override;
};

class EncantamentoDecorator : public PersonagemDecorator {
public:
    EncantamentoDecorator(Personagem& personagem);
    int PoderDeAtaque() const override;
};

#endif