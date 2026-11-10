#include "decorators.h"

// PersonagemDecorator

PersonagemDecorator::PersonagemDecorator(Personagem& personagem)
    : personagem(personagem) {}

int PersonagemDecorator::PoderDeAtaque() const {
    return personagem.PoderDeAtaque();
}

// PocaoDecorator

PocaoDecorator::PocaoDecorator(Personagem& personagem)
    : PersonagemDecorator(personagem) {}

int PocaoDecorator::PoderDeAtaque() const {
    return personagem.PoderDeAtaque() + 2;
}

// EspadaDecorator

EspadaDecorator::EspadaDecorator(Personagem& personagem)
    : PersonagemDecorator(personagem) {}

int EspadaDecorator::PoderDeAtaque() const {
    return personagem.PoderDeAtaque() + 5;
}

// EncantamentoDecorator

EncantamentoDecorator::EncantamentoDecorator(Personagem& personagem)
    : PersonagemDecorator(personagem) {}

int EncantamentoDecorator::PoderDeAtaque() const {
    return personagem.PoderDeAtaque() + 8;
}