#ifndef PERSONAGEM_BASICO_H
#define PERSONAGEM_BASICO_H

#include "Personagem.h"

class PersonagemBasico : public Personagem {
public:
    int PoderDeAtaque() const override;
};

#endif