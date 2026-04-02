# Clase 01-04

## La SINTAXIS de un LENGUAJE DE PROGRAMACIÓN describe las combinaciones de símbolos que forman un programa sintácticamente correcto. Como esta SINTAXIS está basada en los  LENGUAJES FORMALES, debemos comenzar con este concepto.

## Los LENGUAJES FORMALES están formados por PALABRAS, las palabras son CADENAS y las  cadenas están constituidas por CARACTERES de un ALFABETO. Esta frase involucra cinco  términos (lenguaje formal, palabra, cadena, carácter y alfabeto) que son fundamentales en este campo. A continuación los analizamos detenidamente.

## CARACTERES y ALFABETOS
> Un CARÁCTER (también llamado SÍMBOLO) es el elemento constructivo básico. Es la entidad  fundamental, indivisible, a partir de la cual se forman los alfabetos.

> Un ALFABETO es un conjunto finito griega de caracteres. Se lo identifica, habitualmente, con la letra (sigma), y con sus caracteres se construyen las cadenas de caracteres de un Lenguaje Formal.

## CADENAS
> Una CADENA, forma abreviada de la frase cadena de caracteres, es una secuencia finita de caracteres tomados de cierto alfabeto y colocados uno a continuación de otro. Es decir: una cadena se construye CONCATENANDO caracteres de un alfabeto dado.

## LONGITUD DE UNA CADENA
> La LONGITUD de una cadena S es la cantidad de caracteres que la componen.

## CADENA VACÍA
> Es la cadena que no tiene caracteres. En otras palabras: la cadena vacía es la cadena de longitud 0.

## UNA SIMPLIFICACIÓN: LA POTENCIACIÓN DE UN SÍMBOLO
> La POTENCIACIÓN de un carácter simplifica la escritura de cadenas
> La operación de CONCATENACIÓN aplicada a cadenas produce una nueva cadena formada por los caracteres de la primera cadena seguidos inmediatamente por los caracteres de la segunda cadena.

## LENGUAJES NATURALES
> Se denomina LENGUAJE NATURAL a todo lenguaje hablado y/o escrito que es utilizado por los seres humanos para comunicarse. Los Lenguajes Naturales son intrínsecamente AMBIGUOS.

> LENGUAJE FORMAL es un conjunto alfabeto dado, y tiene dos características fundamentales:  de cadenas formadas con caracteres de un alfabeto dado, y tiene dos características fundamentales:
>- las cadenas que constituyen un Lenguaje Formal no tienen una semántica asociada, solo tienen una sintaxis dada por la ubicación de los caracteres dentro de cada cadena.
>- un Lenguaje Formal nunca es ambiguo.

## PALABRA
> Una cadena es vacía o bien está compuesta por una sucesión de uno o más caracteres que pertenecen a un alfabeto dado, como hemos visto ya en muchos ejemplos.
> Dado que una PALABRA es una cadena que pertenece a un determinado Lenguaje Formal, todos los conceptos sobre cadena explicados anteriormente se aplican también a las palabras.
> La cardinalidad de un Lenguaje Formal es la cantidad de palabras que lo componen.
> Dado que un Lenguaje Formal es un conjunto, un SUBLENGUAJE es un subconjunto de un Lenguaje Formal dado.

## LENGUAJES FORMALES INFINITOS 
> Los Lenguajes Formales también pueden ser INFINITOS, lo que significa que estos lenguajes pueden tener una cantidad infinita de palabras, aunque cada una de ellas debe ser de longitud finita; no existen las palabras de longitud infinita.

## LENGUAJE UNIVERSAL SOBRE UN ALFABETO
> El LENGUAJE UNIVERSAL sobre este alfabeto Sigma es un Lenguaje Formal infinito que contiene todas las palabras que se pueden formar con los caracteres del alfabeto Sigma, más la palabra vacía. Sigma* sigma clausura” o “sigma estrella”.

## IMPORTANTE: 
## Ciertos Lenguajes Formales están relacionados con la sintaxis de losLenguajes de Programación. 
## Un Lenguaje de Programación (LP) tiene palabras reservadas, nombres creados por el programador, constantes enteras y reales, caracteres de puntuación, operadores aritméticos, operadores lógicos, declaraciones, expresiones, sentencias, etc. 
## Todos estos elementos constituyen diferentes Lenguajes Formales, algunos infinitos y otros finitos. 