#ifndef POCAO_DECORATOR_H
#define POCAO_DECORATOR_H

#include "PersonagemDecorator.h"

class PocaoDecorator : public PersonagemDecorator {
public:
    PocaoDecorator(Personagem& personagem);
    int PoderDeAtaque() const override;
};

#endif