#include "EncantamentoDecorator.h"

EncantamentoDecorator::EncantamentoDecorator(Personagem& personagem)
    : PersonagemDecorator(personagem) {}

int EncantamentoDecorator::PoderDeAtaque() const {
    return personagem.PoderDeAtaque() + 8;
}