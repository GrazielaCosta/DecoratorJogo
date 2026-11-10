#include "PocaoDecorator.h"

PocaoDecorator::PocaoDecorator(Personagem& personagem)
    : PersonagemDecorator(personagem) {}

int PocaoDecorator::PoderDeAtaque() const {
    return personagem.PoderDeAtaque() + 2;
}