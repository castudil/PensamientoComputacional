/*
Escriba un programa que enseñe el manejo de las variables puntero.

Para esto utilize dos variables:
 - Variable entero m
 - Varieble puntero a entero z (*z)

El programa debe:
- Leer y asignar un valor entero a la variable m
- Imprimir el valor y dirección de m (m y &m)
- Asignar a z la dirección &m
- Imprimir el puntero z y el contenido de la dirección (z y *z)
- Leer y asignar un nuevo valor entero a la variable m
- Imprimir el puntero z y el contenido de la dirección (z y *z)
- Leer y asignar un nuevo valor entero a la dirección del puntero z
- Imprimir el valor y dirección de m (m y &m)

Entrada:
La entrada corresponde los tres valores enteros por ser asignados.

Salida:
La salida debe seguir el siguiente formato:

"m - valor: [Valor de m] - direccion: [Valor de &m]

z - apunta a: [Valor de z] - contenido de la direccion: [Valor de *z]

z - apunta a: [Valor de z] - contenido de la direccion: [Valor de *z]

m - valor: [Valor de m] - direccion: [Valor de &m]"

Recordar: Salto de línea final (ej: printf("output\n");)

Nota: Las direcciones de memorias obtenidas pueden diferir con las de este documento.

Entrada a:
1 2 3

Salida a:
m - valor: 1 - direccion: 0x7ffe17a117b8

z - apunta a: 0x7ffe17a117b8 - contenido de la direccion: 1

z - apunta a: 0x7ffe17a117b8 - contenido de la direccion: 2

m - valor: 3 - direccion: 0x7ffe17a117b8


Entrada b:
-5 0 5

Salida b:
m - valor: -5 - direccion: 0x7ffed7a2f158

z - apunta a: 0x7ffed7a2f158 - contenido de la direccion: -5

z - apunta a: 0x7ffed7a2f158 - contenido de la direccion: 0

m - valor: 5 - direccion: 0x7ffed7a2f158
*/