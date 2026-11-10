#ifndef ENCANTAMENTO_DECORATOR_H
#define ENCANTAMENTO_DECORATOR_H

#include "PersonagemDecorator.h"

class EncantamentoDecorator : public PersonagemDecorator {
public:
    EncantamentoDecorator(Personagem& personagem);
    int PoderDeAtaque() const override;
};

#endif