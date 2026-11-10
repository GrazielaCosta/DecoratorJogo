#include "EspadaDecorator.h"

EspadaDecorator::EspadaDecorator(Personagem& personagem)
    : PersonagemDecorator(personagem) {}

int EspadaDecorator::PoderDeAtaque() const {
    return personagem.PoderDeAtaque() + 5;
}