# Readability #

Header per rendere il c più leggibile

## Esempio ##

```c
/* Codice normale */
if ((!func1() && func2()) || func3())

/* Codice con Readability */
if ((not func1() and func2()) or func3())

/* Codice normale */
b = 1 ^ 0;

/* Codice con Readability */
b = true xor false;

/* Codice normale */
if ((tab_closed == 1) && !was_last_tab)

/* Codice con Readability */
if ((tab_closed is true) and not was_last_tab)

/* Codice normale */
char * foo = "bar";
unsigned char b = 0b01000101;

/* Codice con Readability */
str foo = "bar";
unsigned byte b = 0b01000101;

```

## Usare l'header ##

L'header è interamente composto da \#define e typedef, non inserisco quindi una
spiegazione di ogni elemento perché può essere letto direttamente.


## Cosa può stare in questo repo ##

L'obbiettivo è rendere il c il più possibile esplicito e leggibile.

Prima di aggiungere qualcosa, ci si deve chiedere:

 * La semplificazione, riguarda una parola chiave o un tipo del c?  
 * È solo un nuovo nome per qualcosa?
 * La nuova parola è più chiara di quella sostituita?
 
Se la risposta a tutte le domande è si, allora si può aggiungere alla libreria.

## Ispirazione ##

Questo repo cerca di portare un po' della bellezza del python nel c.
Alcune frasi prese da ["The Zen of Python"](https://www.python.org/dev/peps/pep-0020/):

> Beautiful is better than ugly.  
  Explicit is better than implicit.  
  Simple is better than complex.  
  Complex is better than complicated.  
  Flat is better than nested.  
  Sparse is better than dense.  
  Readability counts.  

## Altre informazioni ##

> This is the Unix philosophy: Write programs that do one thing and do it well.
Write programs to work together. Write programs to handle text streams, because
that is a universal interface.

Aggiornamenti: [GitHub](https://github.com/matteoalessiocarrara/readability)  
Email: sw.matteoac@gmail.com
