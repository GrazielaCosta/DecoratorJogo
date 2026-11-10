#include "PersonagemDecorator.h"

PersonagemDecorator::PersonagemDecorator(Personagem& personagem)
    : personagem(personagem) {}

int PersonagemDecorator::PoderDeAtaque() const {
    return personagem.PoderDeAtaque();
}