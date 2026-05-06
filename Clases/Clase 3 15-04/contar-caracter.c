#include <stdio.h>

int main() {

    long nc = 0;
    nc = 0;
    while (getchar( ) != EOF)
        ++nc;
    printf("Se leyeron %ld caracteres", nc);
    return 0;
}