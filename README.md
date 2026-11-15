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

O projeto apresenta diferentes implementações para demonstrar a evolução e as possibilidades de organização do código:

- **Implementação ingênua:** utiliza classes específicas para representar cada configuração de personagem.
- **Implementação com Decorator:** utiliza o padrão Decorator para combinar comportamentos dinamicamente, sem criar uma classe específica para cada combinação.
- **Implementação organizada em módulos:** separa as declarações das classes (`.h`) de suas implementações (`.cpp`), agrupando classes relacionadas.
- **Implementação com classes separadas:** organiza cada classe individualmente, utilizando arquivos `.h` para declarações e `.cpp` para implementações.

## Estrutura do projeto

```text
DecoratorJogo/
├── .vscode/
│   └── tasks.json
├── antes/
│   └── main.cpp
├── depois/
│   └── main.cpp
├── modulos/
│   ├── decorators.h
│   ├── decorators.cpp
│   ├── personagem.h
│   ├── personagem.cpp
│   └── main.cpp
├── separacao_classes/
│   ├── Personagem.h
│   ├── Personagem.cpp
│   ├── PersonagemBasico.h
│   ├── PersonagemBasico.cpp
│   ├── PersonagemDecorator.h
│   ├── PersonagemDecorator.cpp
│   ├── PocaoDecorator.h
│   ├── PocaoDecorator.cpp
│   ├── EspadaDecorator.h
│   ├── EspadaDecorator.cpp
│   ├── EncantamentoDecorator.h
│   ├── EncantamentoDecorator.cpp
│   └── main.cpp
├── diagrama_slides/
├── .gitattributes
├── .gitignore
└── README.md
```

## Organização das pastas

- `antes/`: contém a implementação ingênua, com as classes reunidas em um único arquivo.
- `depois/`: contém a implementação utilizando o padrão Decorator, também organizada em um único arquivo.
- `modulos/`: contém a implementação com as classes agrupadas em módulos, separando declarações e implementações.
- `separacao_classes/`: contém a implementação com cada classe organizada individualmente em arquivos `.h` e `.cpp`.
- `.vscode/`: contém o arquivo `tasks.json`, utilizado para configurar a compilação e execução das implementações pelo Visual Studio Code.
- `diagrama_slides/`: contém os diagramas UML utilizados na apresentação do trabalho e os slides da apresentação em PDF.

## Pré-requisitos

Para compilar e executar o projeto, é necessário ter:

- Um compilador C++ (como o g++).
- Um terminal para executar os comandos.
- Visual Studio Code (opcional, recomendado para edição e execução).
- Git (caso o projeto seja obtido por meio do GitHub).

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

### 3. Implementação organizada em módulos

Compilar:

```bash
g++ modulos/main.cpp modulos/personagem.cpp modulos/decorators.cpp -o modulos/personagem.exe
```

Executar no Windows:

```powershell
.\modulos\personagem.exe
```

### 4. Implementação com classes separadas

Compilar:

```bash
g++ separacao_classes/Personagem.cpp separacao_classes/PersonagemBasico.cpp separacao_classes/PersonagemDecorator.cpp separacao_classes/PocaoDecorator.cpp separacao_classes/EspadaDecorator.cpp separacao_classes/EncantamentoDecorator.cpp separacao_classes/main.cpp -o separacao_classes/personagem.exe
```

Executar no Windows:

```powershell
.\separacao_classes\personagem.exe
```

## Execução pelo Visual Studio Code

O projeto também possui uma configuração de tarefas no arquivo `.vscode/tasks.json`, permitindo compilar e executar as implementações organizadas em módulos e com separação de classes diretamente pelo Visual Studio Code.

Para utilizar:

1. Abrir a pasta do projeto no VS Code.
2. Pressionar `Ctrl + Shift + P`.
3. Pesquisar `Tasks: Run Task`.
4. Selecionar a implementação desejada:
   - `Decorator - Módulos`
   - `Decorator - Separação classes`

## Resultados esperados

As implementações com Decorator apresentam os seguintes valores de poder de ataque:

| Configuração | Poder de ataque |
|---|---:|
| Personagem básico | 10 |
| Personagem com poção | 12 |
| Personagem com poção e espada | 17 |
| Personagem completo (poção, espada e encantamento) | 25 |

As diferentes organizações do código mantêm a mesma lógica de funcionamento do padrão Decorator.