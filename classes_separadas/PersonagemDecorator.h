#ifndef PERSONAGEM_DECORATOR_H
#define PERSONAGEM_DECORATOR_H

#include "Personagem.h"

class PersonagemDecorator : public Personagem {
protected:
    Personagem& personagem;

public:
    PersonagemDecorator(Personagem& personagem);
    int PoderDeAtaque() const override;
};

#endif