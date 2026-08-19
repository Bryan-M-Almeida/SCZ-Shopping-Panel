# SCZ Shopping

Un sistema de gestión de inventario y ventas basado en consola, desarrollado en C.

[English](README.md) | [Español](README.es.md) | [Português](README.pt-BR.md)

## Acerca del Proyecto

SCZ Shopping es una aplicación de consola diseñada para simular las operaciones básicas de una tienda pequeña.

El proyecto fue desarrollado en C con un enfoque en la práctica de conceptos fundamentales de programación como:

- Funciones
- Estructuras (`struct`)
- Arreglos
- Manejo de archivos
- Validación de entradas
- Algoritmos de búsqueda
- Algoritmos de ordenamiento
- Programación modular
- Gestión básica de inventario

## Funcionalidades

- Registrar productos
- Listar productos registrados
- Buscar productos por código
- Editar información de productos
- Eliminar productos
- Registrar ventas
- Actualizar automáticamente el inventario después de las ventas
- Ordenar productos por precio
- Guardar los datos de productos en un archivo
- Cargar los datos guardados al iniciar la aplicación
- Validar códigos de producto, precios, cantidades y disponibilidad de stock

## Estructura del Proyecto

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

## Archivos Principales

| Archivo     | Descripción                                     |
| ----------- | ------------------------------------------------ |
| `main.c`    | Programa principal y menú interactivo            |
| `product.c` | Lógica de gestión de productos e inventario      |
| `product.h` | Estructura de producto y declaraciones de funciones |
| `file.c`    | Persistencia de datos y operaciones de archivos  |
| `file.h`    | Declaraciones relacionadas con archivos          |
| `data/`     | Directorio usado para almacenar datos locales de productos |

## Menú

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

## Almacenamiento de Datos

La información de los productos se almacena localmente en: data/products.txt
El archivo es generado por la aplicación cuando el usuario guarda los datos.
El archivo de datos real se excluye intencionalmente del control de versiones porque contiene datos locales de la aplicación.

## Requisitos

- Compilador de C
- Se recomienda GCC
- Git
- Terminal

## Compilación

# Usando GCC:
```
gcc main.c product.c file.c -o scz-shopping
```

# En Windows:
```
gcc main.c product.c file.c -o scz-shopping.exe
```


## Ejecución

# Linux/macOS:
```
./scz-shopping
```


# Windows
```
scz-shopping.exe
```


## Conceptos Practicados

Este proyecto es principalmente educativo y se enfoca en practicar:
```
Programación en C
├── Variables y tipos de datos
├── Estructuras condicionales
├── Bucles
├── Funciones
├── Arreglos
├── Estructuras
├── Punteros
├── Cadenas de texto
├── Manejo de archivos
├── Búsqueda
├── Ordenamiento
└── Programación modular
```


## Estado del Proyecto

Actualmente en desarrollo.
Se podrán añadir nuevas funcionalidades, mejoras y refactorizaciones de código a medida que el proyecto evolucione.

## Autor

**Bryan** <br>
Estudiante de Ingeniería de Sistemas | Programación en C
Desarrollado como un proyecto de programación para aprender y practicar C.

[English](README.md) | [Español](README.es.md) | [Português](README.pt-BR.md)