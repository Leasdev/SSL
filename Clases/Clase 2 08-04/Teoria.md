# Clase 08-04

## REPASO
* Lenguaje: es un conjunto de palabras
* Pueden ser finitos o infinitos
* Palabras son finitas

## LIBRO: **El lenguaje de programación C**, Brian W. Kernighan & Dennis M. Ritchie

## CAPITULO 1: Introduccion general
>1.1 Comencemos
~~~
#include <stdio.h> 

main() {
    printf("hola, mundo\n");
}
~~~

> **#include <stdio.h>** ---> indica al compilador que debe incluir información acerca de la biblioteca estándar de entrada/salida.

> **main()** ---> define una función llamada main que no recibe valores de argumentos.

> **printf("hola, mundo\n");** ---> main llama a la función de biblioteca printf para escribir esta secuencia de caracteres; \n representa el carácter nueva línea.

> **\n** en la cadena representa el carácter nueva línea en la notación C. (secuencia de escape)

> **\b** (backspace) borra el caracter anterior.

>1.2 Variables y expresiones aritméticas

~~~
#include <stdio.h>
int main() {
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while(fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}
~~~

> En C, se deben declarar todas las variables antes de su uso, generalmente al principio de la función y antes de cualquier proposición ejecutable. Una declaración notifica las propiedades de una variable; consta de un nombre de tipo y una lista de variables.

> El tipo int significa que las variables de la lista son enteros, en contraste con float, que significa punto flotante, esto es, números que pueden tener una parte fraccionaria. El rango tanto de int como de float depende de la máquina que se está utilizando

* **char** carácter —un solo byte
* **short** entero corto
* **long** entero largo
* **double** punto flotante de doble precisión

> El ciclo while funciona de la siguiente manera: se prueba la condición entre paréntesis. De ser verdadera (fahr es menor o igual que upper), el cuerpo del ciclo (las tres proposiciones entre llaves) se ejecuta. Luego la condición se prueba nuevamente, y si es verdadera, el cuerpo se ejecuta de nuevo. Cuando la prueba resulta falsa (fahr excede a upper) la iteración termina, y la ejecución continúa en la proposición que sigue al ciclo. No existe ninguna otra proposición en este programa, de modo que termina.

> **%d** especifica un argumento entero.


