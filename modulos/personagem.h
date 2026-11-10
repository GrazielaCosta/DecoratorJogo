#ifndef PERSONAGEM_H
#define PERSONAGEM_H

class Personagem {
public:
    virtual int PoderDeAtaque() const = 0;
    virtual ~Personagem() = default;
};

class PersonagemBasico : public Personagem {
public:
    int PoderDeAtaque() const override;
};

#endif