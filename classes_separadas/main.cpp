#include <iostream>
#include "PersonagemBasico.h"
#include "PocaoDecorator.h"
#include "EspadaDecorator.h"
#include "EncantamentoDecorator.h"

using namespace std;

int main() {
    PersonagemBasico basico;

    cout << "Personagem basico: "
         << basico.PoderDeAtaque() << endl;

    PocaoDecorator pocao(basico);

    cout << "Personagem com pocao: "
         << pocao.PoderDeAtaque() << endl;

    EspadaDecorator espada(pocao);

    cout << "Personagem com pocao e espada: "
         << espada.PoderDeAtaque() << endl;

    EncantamentoDecorator encantamento(espada);

    cout << "Personagem completo (com pocao, espada e encantamento): "
         << encantamento.PoderDeAtaque() << endl;

    return 0;
}