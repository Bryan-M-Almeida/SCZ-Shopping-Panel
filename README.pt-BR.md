# SCZ Shopping

Um sistema de gestão de estoque e vendas baseado em console, desenvolvido em C.

[English](README.md) | [Español](README.es.md) | [Português](README.pt-BR.md)

## Sobre o Projeto

SCZ Shopping é uma aplicação de console projetada para simular as operações básicas de uma pequena loja.

O projeto foi desenvolvido em C com foco na prática de conceitos fundamentais de programação, como:

- Funções
- Estruturas (`struct`)
- Arrays
- Manipulação de arquivos
- Validação de entradas
- Algoritmos de busca
- Algoritmos de ordenação
- Programação modular
- Gestão básica de estoque

## Funcionalidades

- Cadastrar produtos
- Listar produtos cadastrados
- Buscar produtos por código
- Editar informações de produtos
- Excluir produtos
- Registrar vendas
- Atualizar automaticamente o estoque após as vendas
- Ordenar produtos por preço
- Salvar dados dos produtos em um arquivo
- Carregar dados salvos ao iniciar a aplicação
- Validar códigos de produto, preços, quantidades e disponibilidade em estoque

## Estrutura do Projeto

```text
SCZShopping/
├── data/
│   └── .gitkeep
├── product.h
├── product.c
├── file.h
├── file.c
├── main.c
├── .gitignore
└── README.md
```

## Arquivos Principais

| Arquivo     | Descrição                                               |
| ----------- | ------------------------------------------------------- |
| `main.c`    | Programa principal e menu interativo                    |
| `product.c` | Lógica de gestão de produtos e estoque                  |
| `product.h` | Estrutura de produto e declarações de funções           |
| `file.c`    | Persistência de dados e operações de arquivos           |
| `file.h`    | Declarações relacionadas a arquivos                     |
| `data/`     | Diretório usado para armazenar dados locais de produtos |

## Menu

================================
SISTEMA DE GESTIÓN DE INVENTARIO
================================

1. Registrar producto
2. Listar productos
3. Buscar producto
4. Editar producto
5. Eliminar producto
6. Registrar venta
7. Ordenar productos
8. Guardar datos
9. Salir

## Armazenamento de Dados

As informações dos produtos são armazenadas localmente em:

```
data/products.txt
```

O arquivo é gerado pela aplicação quando o usuário salva os dados.
O arquivo de dados real é intencionalmente excluído do controle de versão por conter dados locais da aplicação.

## Requisitos

- Compilador C
- GCC recomendado
- Git
- Terminal

## Compilação

Usando GCC:

```
gcc main.c product.c file.c -o scz-shopping
```

No Windows:
```
gcc main.c product.c file.c -o scz-shopping.exe
```


## Execução

# Linux/macOS:
```
./scz-shopping
```

# Windows
```
./scz-shopping
```


## Conceitos Praticados

Este projeto é principalmente educacional e tem foco na prática de:

```
Programação em C
├── Variáveis e tipos de dados
├── Estruturas condicionais
├── Loops
├── Funções
├── Arrays
├── Estruturas
├── Ponteiros
├── Strings
├── Manipulação de arquivos
├── Busca
├── Ordenação
└── Programação modular
```


## Status do Projeto

Atualmente em desenvolvimento.
Novas funcionalidades, melhorias e refatorações de código podem ser adicionadas conforme o projeto evolui.

## Autor

**Bryan** <br>
Estudante de Engenharia de Sistemas | Programação em C
Desenvolvido como um projeto de programação para aprender e praticar C.

[English](README.md) | [Español](README.es.md) | [Português](README.pt-BR.md)