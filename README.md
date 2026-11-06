# DecoratorJogo

Padrões de Projeto (Decorator - Estrutural) em C++.
Este projeto foi criado como parte da disciplina de Paradigmas de Programação do curso de Ciência da Computação do Instituto Federal de Goiás (IFG).


## Objetivo

Demonstrar como o padrão Decorator permite adicionar responsabilidades a um objeto por meio de objetos que o envolvem, possibilitando combinar comportamentos sem criar uma classe específica para cada configuração.

## Sobre o projeto

Este projeto apresenta uma implementação do padrão de projeto **Decorator**, utilizando como exemplo a personalização de um personagem de jogo por meio de equipamentos e melhorias.

O personagem possui um poder de ataque básico, que pode ser incrementado com diferentes decorators:

- **Poção:** adiciona 2 pontos de ataque.
- **Espada:** adiciona 5 pontos de ataque.
- **Encantamento:** adiciona 8 pontos de ataque.

O projeto apresenta duas implementações: uma solução ingênua, que utiliza classes específicas para cada configuração, e uma solução com o padrão Decorator, que permite combinar comportamentos dinamicamente.

## Estrutura do projeto

```text
DecoratorJogo/
├── antes/
│   └── main.cpp
├── depois/
│   └── main.cpp
└── README.md
```

- `antes/`: contém a implementação ingênua.
- `depois/`: contém a implementação utilizando o padrão Decorator.

## Pré-requisitos

Para compilar e executar o projeto, é necessário ter:

- Um compilador C++ (como o g++).
- Um terminal para executar os comandos.

## Como compilar e executar

Os comandos abaixo devem ser executados no terminal, a partir da pasta raiz do projeto.

### 1. Implementação ingênua

Compilar:

```bash
g++ antes/main.cpp -o antes/personagem.exe
```

Executar no Windows:

```powershell
.\antes\personagem.exe
```

### 2. Implementação com Decorator

Compilar:

```bash
g++ depois/main.cpp -o depois/personagem.exe
```

Executar no Windows:

```powershell
.\depois\personagem.exe
```

