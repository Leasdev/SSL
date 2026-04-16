# Clase 15-04

>1.3 Proposicion for
~~~
#include <stdio.h>

int main() {

    int fahr;
    printf("Conversion Temperatura\n");
    for (fahr=0; fahr<=300; fahr=fahr+20) {
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }
    return 0;
}
~~~

>1.4 Constantes simbolicas

> **#define** nombre texto de reemplazo
> define un nombre simbólico o constante simbólica como una cadena de caracteres especial.
~~~
#define LOWER 0 /* límite inferior de la tabla */
#define UPPER 300 /* límite superior */
#define STEP 20 /* tamaño del incremento */
~~~

>1.5 Entrada y salida de caracteres

> La biblioteca estándar proporciona varias funciones para leer o escribir un carácter a la vez, de las cuales getchar y putchar son las más simples. 

> **c=getchar( )**
> getchar lee el siguiente carácter de entrada de una secuencia de texto y lo devuelve como su valor.

> **putchar(c)**
> escribe el contenido de la variable entera c como un carácter.

>1.5.2 Conteo de caracteres
~~~
#include <stdio.h>

int main() {

    long nc = 0;
    nc = 0;
    while (getchar( ) != EOF)
        ++nc;
    printf("Se leyeron %ld caracteres", nc);
    return 0;
}
~~~
> ++, que significa incrementa en uno.
> -- para disminuir en 1.
> El programa para contar caracteres acumula su cuenta en una variable long en lugar de una int. Los enteros long son por lo menos de 32 bits. Aunque en algunas máquinas int y long son del mismo tamaño.

>1.5.3 Conteo de lineas
~~~
#include <stdio.h>

int main() {

    int c, nl;
    nl = 0;
    while ((c=getchar( ))!=EOF)
        if (c=='\n')
            ++nl;
    printf("Se leyeron %d lineas\n", nl);
    return 0;
}
~~~

> El doble signo de igualdad == es la notación de C para expresar “igual a”.

>1.5.4 Conteo de palabras
~~~
#include <stdio.h>

#define IN 1
#define OUT 0

int main( ) {
    int c, nl, nw, nc, state;
    state = OUT;
    nl = nw = nc = 0;
    while ((c=getchar( ))!=EOF) {
        ++nc;
        if (c=='\n')
            ++nl;
        if (c==' ' || c=='\n' || c=='\r')
            state = OUT;
        else if (state==OUT) {
            state = IN;
            ++nw;
        }
    }
    printf ("Lineas: %d Palabras: %d Caracteres: %d\n", nl, nw, nc);
    return 0; 
}
~~~

> El ejemplo muestra también un else, el cual especifica una acción alternativa si la condición de una proposición if es falsa.
> Cada proposición puede ser una proposición sencilla o varias entre llaves. En el programa para contar palabras, la que está después del else es un if que controla dos proposiciones entre llaves.
