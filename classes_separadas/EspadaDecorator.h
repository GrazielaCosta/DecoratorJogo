#ifndef ESPADA_DECORATOR_H
#define ESPADA_DECORATOR_H

#include "PersonagemDecorator.h"

class EspadaDecorator : public PersonagemDecorator {
public:
    EspadaDecorator(Personagem& personagem);
    int PoderDeAtaque() const override;
};

#endif